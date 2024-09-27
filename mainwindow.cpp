#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signing.h"
#include "secdialog.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Log In");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();


    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Error", "Database is not connected!");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM users WHERE username = :username AND password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (query.exec()) {
        if (query.next()) {
            QMessageBox::information(this, "Login", "Username and password are correct");
            hide();
            secDialog = new SecDialog(this);
            connect(secDialog, &SecDialog::showMainWindow, this, &MainWindow::show);
            secDialog->setWindowTitle("AristoChat");
            secDialog->show();
        } else {
            QMessageBox::warning(this, "Login", "Username and password are not correct");
        }
    } else {
        QMessageBox::critical(this, "Error", "Failed to execute query" + query.lastError().text());
    }
}


void MainWindow::on_pushButton_clicked()
{
    hide();
    signing = new Signing(this);

    connect(signing, &Signing::showMainWindow, this, &MainWindow::show);

    signing->setWindowTitle("Sign Up");
    signing->show();
}

