#include <iostream>
#include <string>
#include "Coach.h"
#include "Station.h"
#include "Train.h"
#include "Ticket.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/statement.h>
#include <iostream>
#include <mysql_connection.h>
#include <mysql_driver.h>

using  namespace std;

int main()
{
    try {
        sql::mysql::MySQL_Driver* driver;
        sql::Connection* con;

        driver = sql::mysql::get_mysql_driver_instance();
        con = driver->connect("tcp://localhost:3306",
            "root", "12345");

        con->setSchema("project"); // your database name

        sql::Statement* stmt;
        stmt = con->createStatement();

        // SQL query to create a table
        string createTableSQL
            = "CREATE TABLE IF NOT EXISTS GFGCourses ("
            "id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,"
            "courses VARCHAR(255) NOT NULL"
            ")";

        stmt->execute(createTableSQL);

        string insertDataSQL
            = "INSERT INTO GFGCourses (courses) VALUES "
            "('DSA'),('C++'),('JAVA'),('PYTHON')";

        stmt->execute(insertDataSQL);

        // SQL query to retrieve data from the table
        string selectDataSQL = "SELECT * FROM GFGCourses";

        sql::ResultSet* res
            = stmt->executeQuery(selectDataSQL);

        // Loop through the result set and display data
        int count = 0;
        while (res->next()) {
            cout << " Course " << ++count << ": "
                << res->getString("courses") << endl;
        }

        delete res;
        delete stmt;
        delete con;
    }
    catch (sql::SQLException& e) {
        std::cerr << "SQL Error: " << e.what() << std::endl;
    }

    return 0;
}

