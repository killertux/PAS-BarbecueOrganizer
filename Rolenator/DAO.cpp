#include "DAO.hpp"

DAO::DAO(QSqlDatabase* connection){
	this->connection = connection;
}

DAO::~DAO(){
}

void DAO::update(QString query){
	this->connection->exec(query);
}

QSqlQuery DAO::retrieve(QString query){
	return this->connection->exec(query);
}


