#include "MysqlConnection.hpp"

MysqlConnection::MysqlConnection(){
	this->database = QSqlDatabase::addDatabase("MYSQL","m_db_connect");
	this->database.setHostName("localhost");
	this->database.setDatabaseName("rolenator");
	this->database.setPort(3307);
	this->database.setUserName("root");
	this->database.setPassword("brs42");
	this->database.open();
}

MysqlConnection::~MysqlConnection(){
	this->database.close();
}

QSqlQuery MysqlConnection::exec(QString query){
	return this->database.exec(query);
}


