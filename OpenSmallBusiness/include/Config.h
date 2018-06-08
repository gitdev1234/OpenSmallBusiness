/**
 * Config.h
 * Purpose: defines constants, enums and structs
 *
 * @author inc-ffh
 * @version 1.0 20180607
 */

#ifndef CONFIG_H
#define CONFIG_H

#include <string>
#include <QString>

using namespace std;

/* --- constants --- */

// general purpose

// database
const QString URL_OF_DATABASE = "localhost";
const QString NAME_OF_DATABASE = "OpenSmallBusiness";
const QString NAME_OF_SYS_DATABASE = "mysql";
const QString USER_OF_DATABASE = "qtuser";
const QString USER_PASSWORD_OF_DATABASE = "wmr44!§%$l12kjrw";


/* --- enums --- */
enum DataType {BOOL,INT,DOUBLE,STRING}; // TODO

#endif // CONFIG_H
