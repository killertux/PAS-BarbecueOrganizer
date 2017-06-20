#ifndef USER_HPP
#define USER_HPP

#include <QString>

class User{
private:
	QString name;
	QString login;
	QString password;
	QString email;
public:
	User();
	User(QString name, QString login, QString email, QString password);
	QString getName() {return this->name;}
	QString getLogin() {return this->login;}
	QString getPassword() {return this->password;}
	QString getEmail() {return this->email;}
	
	void setName(QString name){this->name=name;}
	void setLogin(QString login){this->login=login;}
	void setPassword(QString password){this->password=password;}
	void setEmail(QString email){this->email=email;}
};

#endif
