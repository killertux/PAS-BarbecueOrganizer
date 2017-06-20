#include "User.hpp"

User::User(){
}

User::User(QString name, QString login, QString email, QString password){
	this->name = name;
	this->login = login;
	this->email = email;
	this->password = password;
}


