#ifndef USERDAO_HPP
#define USERDAO_HPP

#include "DAO.hpp"
#include "User.hpp"
#include <QString>
#include <QVariant>

class UserDAO : public DAO{
private:
public:
	UserDAO(QSqlDatabase* connection);
	~UserDAO();
	void insertUser(User *user);
	User *getUser(QString login);
	bool checkAvalibleEmail(QString email);
	int getAllUsers(User ***users);
};

#endif
