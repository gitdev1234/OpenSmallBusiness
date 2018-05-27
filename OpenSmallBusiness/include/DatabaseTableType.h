/**
 * DatabaseTableType.h
 * Purpose: defines interface DatabaseTableType
 *
 * @author inc-ffh
 * @version 1.0 20180527
 */

#ifndef DatabaseTableType_H
#define DatabaseTableType_H

#include <vector>
#include "DatabaseTableField.h"

/**
 * DatabaseTableType class
 * @brief The DatabaseTableType class is an interface which outsources the functions
 *  - getTableStructure
 *  - getTableName
 *
 * from DatabaseTable-Class
 *
 * The design of the DatabaseTableType-class is based on the design pattern 'strategy'.
 * In respect of this the DatabaseTableType-class is the so called 'Strategy' within the Strategy-Pattern.
 *
 * DatabaseTableType can be implemented by different types of sensor-classes.
 * If one wants to inherit from DatabaseTableType one has to implement the getTableStructure()-function.
 *
 *
 */
class DatabaseTableType {
    public:
        DatabaseTableType() {};

        /* --- provide information about table structure --- */
        virtual string getTableName() = 0;
        virtual vector<DatabaseTableField> getTableStructure() = 0;
};

#endif // DatabaseTableType_H
