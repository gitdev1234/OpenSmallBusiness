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
    stringstream sqlStatement;

    vector<DatabaseTableField> tableFields = getTableStructure();
    if (tableFields.size() > 0) {
        sqlStatement << "CREATE TABLE " << getTableName() << " (";

        for (auto const& field: tableFields) {
            string s = field.getTableFieldAndTypeAsString();
            if (&field != &tableFields.back()) {
                sqlStatement << s << ", ";
            } else {
                sqlStatement << s ;
            }


        }
        sqlStatement << " );";

        cout << sqlStatement.str();

        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("localhost");
        db.setDatabaseName("OpenSmallBusiness");
        db.setUserName("qtuser");
        db.setPassword("wmr44!§%$l12kjrw");
        bool ok = db.open();
        QSqlQuery query;
        query.prepare(QString::fromStdString(sqlStatement.str()));
        query.exec();
    }

}



