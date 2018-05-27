/**
 * ContactTable.cpp
 * Purpose: implements class ContactTable
 *
 * @author inc-ffh
 * @version 1.0
 */

#include "ContactTable.h"

/* --- constructor --- */
ContactTable::ContactTable() {

}

/* --- provide information about table structure --- */
string ContactTable::getTableName() {
    return "Contact";
}

vector<DatabaseTableField> ContactTable::getTableStructure() {
    vector<DatabaseTableField> tableStructure;
    DatabaseTableField field;

    field = DatabaseTableField("ID",DataType::INT,0);
    tableStructure.push_back(field);

    field = DatabaseTableField("Name",DataType::STRING,50);
    tableStructure.push_back(field);

    field = DatabaseTableField("Name2",DataType::STRING,50);
    tableStructure.push_back(field);

    field = DatabaseTableField("BillToAddress_ID",DataType::INT,0);
    tableStructure.push_back(field);

    field = DatabaseTableField("SellToAddress_ID",DataType::INT,0);
    tableStructure.push_back(field);

    return tableStructure;
}
