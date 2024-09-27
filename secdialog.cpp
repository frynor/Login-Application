#include "secdialog.h"
#include "ui_secdialog.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

SecDialog::SecDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SecDialog)
{
    ui->setupUi(this);
}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_pushButton_clicked()
{
    emit showMainWindow();
    this->close();
}

