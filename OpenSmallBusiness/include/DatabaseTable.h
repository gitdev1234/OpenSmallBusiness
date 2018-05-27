/**
 * DatabaseTable.h
 * Purpose: defines class DatabaseTable
 *
 * @author inc-ffh
 * @version 1.0 20180527
 */

#ifndef DatabaseTable_H
#define DatabaseTable_H

#include "DatabaseTableType.h"

/**
 * DatabaseTable class
 * @brief The DatabaseTable class describes a DatabaseTable of the type DatabaseTableType
 *
 * The design of the DatabaseTable-class is based on the design pattern 'strategy'.
 * In respect of this the DatabaseTable-class is the so called 'Context' within the Strategy-Pattern.
 *
 * The DatabaseTable class provides access to different kinds of DatabaseTables, which are defined as implementations
 * of the interface DatabaseTableType.
 * By setDatabaseTableType() one can choose the type of the DatabaseTable one wants to access.
 * The function readDatabaseTable() returns the double value of the current DatabaseTable measurement
 */
class DatabaseTable {
    public:
        /* --- constructor --- */
        DatabaseTable() {};

        /* --- getter and setter --- */        
        DatabaseTableType *getDatabaseTableType() const;
        void setDatabaseTableType(DatabaseTableType *val_);


        /* --- provide information about table structure --- */
        string getTableName();
        vector<DatabaseTableField> getTableStructure();

        /* --- database functions --- */
        bool createTable();
        bool dropTable();

private:
        DatabaseTableType *databaseTableType;
};

#endif // DatabaseTable_H
