#include "mainwindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include "sqlconnection.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    sqlconnection conn;

    MainWindow w;
    w.show();
    return a.exec();
}
