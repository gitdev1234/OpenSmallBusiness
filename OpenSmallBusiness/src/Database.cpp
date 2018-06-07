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
bool Database::init() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(URL_OF_DATABASE);
    db.setDatabaseName(NAME_OF_DATABASE);
    db.setUserName(USER_OF_DATABASE);
    db.setPassword(USER_PASSWORD_OF_DATABASE);
    if (! db.open()) {
        return false;
    }

   /* string s = "CREATE TABLE table_name ( column1 integer, column2 integer, column3 integer );";
    QSqlQuery query;
    query.prepare(QString::fromStdString(s));
    query.exec();
    createIfNotCreatedDataBase(); */
}

void Database::createIfNotCreatedDataBase() {

}


