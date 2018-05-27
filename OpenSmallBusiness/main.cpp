#include <iostream>
#include <QtSql/QSqlDatabase>

#include "DatabaseTable.h"
#include "ContactTable.h"
#include <iostream>

// sudo apt-get install mysql-server
// sudo apt-get install libqt5sql5-mysql
// sudo apt-get install libmysql++-dev
// CREATE USER 'qtuser'@'localhost' IDENTIFIED BY 'wmr44!§%$l12kjrw';
// GRANT ALL PRIVILEGES ON * . * TO 'qtuser'@'localhost';
// FLUSH PRIVILEGES;
// create database OpenSmallBusiness

using namespace std;

int main() {
    cout << "Hello World" << endl;


    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("OpenSmallBusiness");
    db.setUserName("qtuser");
    db.setPassword("wmr44!§%$l12kjrw");
    bool ok = db.open();
    cout << ok << endl;

    //QSqlQuery query;
    //query.exec("create table ");


    DatabaseTable contactTable;
    contactTable.setDatabaseTableType(new ContactTable());
    cout << contactTable.getTableName() << endl;
    vector<DatabaseTableField> test = contactTable.getTableStructure();
    for (int i=0; i<test.size(); i++) {
        cout << test[i].getName() << endl;
        cout << test[i].getDataType() << endl;
        cout << test[i].getLength() << endl;
    }

}


