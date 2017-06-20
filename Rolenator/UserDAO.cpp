#include "UserDAO.hpp"

UserDAO::UserDAO(QSqlDatabase* connection): DAO(connection){

}

UserDAO::~UserDAO(){
}

void UserDAO::insertUser(User *user){
	QString query = "INSERT INTO user(login, name, email, password) VALUES (";
	query += "'" + user->getLogin() + "',";
	query += "'" + user->getName() + "',";
	query += "'" + user->getEmail() + "',";
	query += "'" + user->getPassword() + "');";
	this->update(query);
}

User *UserDAO::getUser(QString login){
	QString query = "SELECT login, name, email, password FROM user WHERE login = '" + login + "';";
	QSqlQuery result = this->retrieve(query);
	if(result.size() == 0)
		return NULL;
	result.first();
	User *user = new User();
	user->setLogin(result.value(0).toString());
	user->setName(result.value(1).toString());
	user->setEmail(result.value(2).toString());
	user->setPassword(result.value(3).toString());
	return user;
}

int UserDAO::getAllUsers(User *** users){
	QString query = "SELECT login, name, email, password FROM user;";
	QSqlQuery result = this->retrieve(query);
	if(result.size() == 0)
		return 0;
	(*users) = new User* [result.size()];
	int n=0;
	while(result.next()){
		User *user = new User();
		user->setLogin(result.value(0).toString());
		user->setName(result.value(1).toString());
		user->setEmail(result.value(2).toString());
		user->setPassword(result.value(3).toString());
		(*users)[n] = user;
		n++;
	}
	return result.size();
}


bool UserDAO::checkAvalibleEmail(QString email){
	QString query = "SELECT count(*) FROM user WHERE email = '" + email + "';";
	QSqlQuery result = this->retrieve(query);
	if(result.size() == 0)
		return true;
	result.first();
	if(result.value(0).toInt() == 0)
		return true;
	else
		return false;
}

