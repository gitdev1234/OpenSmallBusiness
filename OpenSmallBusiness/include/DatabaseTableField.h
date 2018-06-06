/**
 * DatabaseTableField.h
 * Purpose: defines class DatabaseTableField
 *
 * @author inc-ffh
 * @version 1.0 20180527
 */

#ifndef DatabaseTableField_H
#define DatabaseTableField_H

#include <sstream>
#include <iostream>

using namespace std;

#include "DatabaseTableField.h"

enum DataType {BOOL,INT,DOUBLE,STRING}; // TODO

/**
 * DatabaseTableField class
 * @brief The DatabaseTableField class describes a DatabaseTableField of a DatabaseTable
 */
class DatabaseTableField {
    public:
        /* --- constructor --- */
        DatabaseTableField(const string& name_ = "", DataType dataType_ = DataType::BOOL, int length_ = 0);

        /* --- format functions --- */
        const string getTableFieldAndTypeAsString() const;

        /* --- getters / setters --- */
        string getName() const;
        void setName(const string &val_);

        DataType getDataType() const;
        void setDataType(const DataType &val_);

        int getLength() const;
        void setLength(int val_);

private:
        string name;
        enum DataType dataType;
        int length;
};

#endif // DatabaseTableField_H
