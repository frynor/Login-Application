#include "sqlconnection.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

sqlconnection::sqlconnection() {
    if (!QSqlDatabase::contains("qt_sql_default_connection")) {
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");

        db.setHostName("localhost");
        db.setDatabaseName("user_db");
        db.setUserName("root");
        db.setPassword("your_password");

        if (!db.open()) {
            qDebug() << "Failed to connect to MySQL:" << db.lastError().text();
        } else {
            qDebug() << "Connected to MySQL!";
        }
    }
}

void sqlconnection::fetchUsers() {
    QSqlDatabase db = QSqlDatabase::database();

    if (!db.isOpen()) {
        qDebug() << "Database is not open!";
        return;
    }

    QSqlQuery query;

    if (query.exec("SELECT username, email FROM users")) {
        while (query.next()) {
            QString username = query.value(0).toString();
            QString email = query.value(1).toString();
            qDebug() << "User:" << username << ", Email:" << email;
        }
    } else {
        qDebug() << "Query failed:" << query.lastError().text();
    }
}

sqlconnection::~sqlconnection() {
    QSqlDatabase db = QSqlDatabase::database();
    if (db.isOpen()) {
        db.close();
        qDebug() << "Database connection closed.";
    }
}
