/**
 * Database.h
 * Purpose: defines class Database
 *
 * @author inc-ffh
 * @version 1.0 20180607
 */

#ifndef Database_H
#define Database_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include "Config.h"
// -- todo
#include <iostream>
using namespace std;
// -- todo

/**
 * Database class
 * @brief Database provides access to the database
 * The Database class provides acces to the database by having public functions for
 * initializing, reading and writing data to the database.
 * It is designed by the design pattern singleton.
 */
class Database {
    public:
        /* --- needed to create a singleton --- */
        static Database& getInstance() {
            static Database _instance;
            return _instance;
        }
        ~Database() {}

        /* --- interfacing the database --- */
        bool init(bool secondTry_ = false);
        void executeSQLStatement(const QString &sqlStatement_);


    private:
        /* --- needed to create a singleton --- */
        Database() {}; // must be private to avoid the creation of Database from the outside by the constructor
                       // use 'protected' if you want to inherit from this class
        Database            (const Database& Database_); // must be private to avoid creation of another Database-instance by copy-constructor
        Database& operator= (const Database& Database_); // must be private to avoid creating an new Database-instance by copying

        /* --- interfacing the database --- */
        void create();

        /* --- miscellaneous --- */

};

#endif // Database_H
