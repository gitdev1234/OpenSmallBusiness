#include <iostream>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>

#include "DatabaseTable.h"
#include "Database.h"
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


    /*QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("OpenSmallBusiness");
    db.setUserName("qtuser");
    db.setPassword("wmr44!§%$l12kjrw");
    bool ok = db.open();
    cout << ok << endl;


    string s = "CREATE TABLE table_name ( column1 integer, column2 integer, column3 integer );";
    QSqlQuery query;
    query.prepare(QString::fromStdString(s));
    query.exec();

*/
    DatabaseTable contactTable;
    contactTable.setDatabaseTableType(new ContactTable());
    contactTable.createTable();


}


