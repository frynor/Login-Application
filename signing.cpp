#include "signing.h"
#include "ui_signing.h"
#include <QString>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

Signing::Signing(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Signing)
{
    ui->setupUi(this);
}

Signing::~Signing()
{
    delete ui;
}

void Signing::on_pushButton_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    QString r_password = ui->lineEdit_3->text();

    if (username.isEmpty() || password.isEmpty() || r_password.isEmpty()) {
        QMessageBox::warning(this, "Failed", "All fields must be filled in order to register!");
        return;
    }

    if (password != r_password) {
        QMessageBox::warning(this, "Failed", "Passwords do not match!");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO users (username, password) VALUES (:username, :password)");
    query.bindValue(":username", username);
    query.bindValue (":password", password);

    if(query.exec()){
        QMessageBox::information(this, "Success", "Your account was successfully created!");
    } else {
        QMessageBox::warning(this, "Failed", "Failed to create an account, please try again." + query.lastError().text());
    }
}


void Signing::on_pushButton_2_clicked()
{
    emit showMainWindow();
    this->close();

}

