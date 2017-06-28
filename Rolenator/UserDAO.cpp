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

int UserDAO::getAllUsersNotInvited(User *** users, int eventId){
	QString query = "SELECT u1.login, u1.name, u1.email, u1.password FROM user AS u1 WHERE NOT EXISTS (SELECT 1 FROM invite AS i WHERE i.user = u1.login AND i.eid = '"+QString::number(eventId)+"');";
	QSqlQuery result = this->retrieve(query);
	if(result.size() <= 0 )
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

int UserDAO::getAllUsersAcceptdInvite(User **& users, int eventId){
	QString query = "SELECT u1.login, u1.name, u1.email, u1.password FROM user AS u1 JOIN invite AS i ON i.user = u1.login WHERE i.accepted = '1' AND i.confirmed = '0' AND i.eid = '"+QString::number(eventId)+"';";
	QSqlQuery result = this->retrieve(query);
	if(result.size() <= 0 )
		return 0;
	users = new User* [result.size()];
	int n=0;
	while(result.next()){
		User *user = new User();
		user->setLogin(result.value(0).toString());
		user->setName(result.value(1).toString());
		user->setEmail(result.value(2).toString());
		user->setPassword(result.value(3).toString());
		users[n] = user;
		n++;
 	}
	return result.size();
}

int UserDAO::getAllUsersConfirmedInvite(User **& users, int eventId){
	QString query = "SELECT u1.login, u1.name, u1.email, u1.password FROM user AS u1 JOIN invite AS i ON i.user = u1.login WHERE i.confirmed = '1' AND i.eid = '"+QString::number(eventId)+"';";
	QSqlQuery result = this->retrieve(query);
	if(result.size() <= 0 )
		return 0;
	users = new User* [result.size()];
	int n=0;
	while(result.next()){
		User *user = new User();
		user->setLogin(result.value(0).toString());
		user->setName(result.value(1).toString());
		user->setEmail(result.value(2).toString());
		user->setPassword(result.value(3).toString());
		users[n] = user;
		n++;
 	}
	return result.size();
}

