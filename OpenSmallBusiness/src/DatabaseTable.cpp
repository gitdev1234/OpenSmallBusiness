/**
 * DatabaseTable.cpp
 * Purpose: implements class DatabaseTable
 *
 * @author inc-ffh
 * @version 1.0
 */

#include "DatabaseTable.h"

/* --- constructor --- */
DatabaseTable::DatabaseTable() {
    if (db->init()) {
    } else {
        cout << "It was not possible to connect to database " << NAME_OF_DATABASE.toStdString() << "!" << endl;
    }
}

/* --- provide information about table structure --- */
string DatabaseTable::getTableName() {
    return databaseTableType->getTableName();
}

vector<DatabaseTableField> DatabaseTable::getTableStructure() {
    return databaseTableType->getTableStructure();
}

/* --- getter and setter --- */
DatabaseTableType *DatabaseTable::getDatabaseTableType() const {
    return databaseTableType;
}

void DatabaseTable::setDatabaseTableType(DatabaseTableType *val_) {
    databaseTableType = val_;
}

/* --- database functions --- */
bool DatabaseTable::createTable() {
    stringstream sqlStream;
    QString sqlStatement;

    vector<DatabaseTableField> tableFields = getTableStructure();
    if (tableFields.size() > 0) {
        sqlStream << "CREATE TABLE " << getTableName() << " (";

        for (auto const& field: tableFields) {
            string s = field.getTableFieldAndTypeAsString();
            if (&field != &tableFields.back()) {
                sqlStream << s << ", ";
            } else {
                sqlStream << s ;
            }

        }
        sqlStream << " );";
        sqlStatement.fromStdString(sqlStream.str());
        db->executeSQLStatement(sqlStatement);
    }

}



