/**
* @author Katrine Almås (s299622)
*/
#include "db.h"

bool createConnection()
{
    // create the default database connection
    QSqlDatabase defaultDB = QSqlDatabase::addDatabase("QSQLITE");

    defaultDB.setDatabaseName("C:/Users/katri/Downloads/sqlitestudio-3.1.1/SQLiteStudio/office");

    if (!(defaultDB.open())) {
        qDebug( "Failed to open database: " );
        return false;
    }

    return true;
}
