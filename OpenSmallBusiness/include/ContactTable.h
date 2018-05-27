/**
 * ContactTable.h
 * Purpose: defines class ContactTable
 *
 * @author inc-ffh
 * @version 1.0 20180527
 */


#ifndef ContactTable_H
#define ContactTable_H

#include "DatabaseTableType.h"

/**
 * ContactTable class
 * @brief The ContactTable class provides an implementation of getTableStructure() for to provide information about the table structure
 *
 * The ContactTable class is an implementation of the interface SensorType and implements the function getTableStructure().
 * The design of it is based on the design pattern 'strategy'.
 * In respect of this the ContactTable-class is a so called 'ConcreteStrategy' within the Strategy-Pattern.
 */
class ContactTable : public DatabaseTableType {
    public:
        /* --- constructor --- */
        ContactTable();

        /* --- provide information about table structure --- */
        string getTableName();
        vector<DatabaseTableField> getTableStructure();
        
    private:
        
};

#endif // ContactTable_H
