/**
 * Database.cpp
 * Purpose: implements class Database
 *
 * @author inc-ffh
 * @version 1.0 20180607
 */


#include "Database.h"

/**
 * Database::init
 * @brief creates the database if not already created
 */
bool Database::init(bool secondTry_) {

    // try to open the database
    // if it's not possible to open the database
    // e.g. because the database does not exist yet,
    // open the system database, create the database and
    // try again to open it

    // try to open the databse
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(URL_OF_DATABASE);
    db.setDatabaseName(NAME_OF_DATABASE);
    db.setUserName(USER_OF_DATABASE);
    db.setPassword(USER_PASSWORD_OF_DATABASE);

    // if it's not possible to open the database
    // try to open the system database
    if (! db.open()) {
        db.setDatabaseName(NAME_OF_SYS_DATABASE);
        if (db.open()) {
            // if system database could be opened create database
            create();

            // try again to initialize / open the database
            if (! secondTry_) {
                init(true);
            }
        // otherwise exit
        } else {
            return false;
        }
    } else {
        cout << "Database " << NAME_OF_DATABASE.toStdString() << " was successfully opened!" << endl;
    }
    return true;
}

void Database::create() {
    QString sqlStatement = "CREATE DATABASE " + NAME_OF_DATABASE + ";";
    executeSQLStatement(sqlStatement);
}

void Database::executeSQLStatement(const QString &sqlStatement_) {
    QSqlQuery query;
    query.prepare(sqlStatement_);
    query.exec();
}




