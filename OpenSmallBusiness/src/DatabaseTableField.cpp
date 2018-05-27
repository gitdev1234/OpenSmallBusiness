/**
 * DatabaseTableField.cpp
 * Purpose: implements class DatabaseTableField
 *
 * @author inc-ffh
 * @version 1.0
 */

#include "DatabaseTableField.h"

/* --- constructor --- */
DatabaseTableField::DatabaseTableField(const string &name_, DataType dataType_, int length_) {
    setName(name_);
    setDataType(dataType_);
    setLength(length_);
}


/* --- getters / setters --- */
string DatabaseTableField::getName() const {
    return name;
}

void DatabaseTableField::setName(const string &val_) {
    name = val_;
}

DataType DatabaseTableField::getDataType() const {
    return dataType;
}

void DatabaseTableField::setDataType(const DataType &val_) {
    dataType = val_;
}

int DatabaseTableField::getLength() const {
    return length;
}

void DatabaseTableField::setLength(int val_) {
    length = val_;
}
