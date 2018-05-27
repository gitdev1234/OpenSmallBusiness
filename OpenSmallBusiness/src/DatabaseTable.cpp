/**
 * DatabaseTable.cpp
 * Purpose: implements class DatabaseTable
 *
 * @author inc-ffh
 * @version 1.0
 */

#include "DatabaseTable.h"

/* --- provide information about table structure --- */

string DatabaseTable::getTableName() {
    return databaseTableType->getTableName();
}

vector<DatabaseTableField> DatabaseTable::getTableStructure() {
    return databaseTableType->getTableStructure();
}


/* --- database functions --- */

DatabaseTableType *DatabaseTable::getDatabaseTableType() const {
    return databaseTableType;
}

void DatabaseTable::setDatabaseTableType(DatabaseTableType *val_) {
    databaseTableType = val_;
}

