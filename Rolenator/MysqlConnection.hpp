#ifndef MYSQLCONNECTION_HPP
#define MYSQLCONNECTION_HPP

#include <QSqlDatabase>

class MysqlConnection{
private:
	QSqlDatabase database;
public:
	MysqlConnection();
	~MysqlConnection();
	QSqlQuery exec(QString query);
};

#endif
