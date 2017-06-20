#ifndef DAOREGISTRY_HPP
#define DAOREGISTRY_HPP

#include "UserDAO.hpp"
#include "EventDAO.hpp"

class DAORegistry{
private:
	static UserDAO *userDAO;
	static EventDAO *eventDAO;
public:
	static UserDAO *getUserDAO(){return DAORegistry::userDAO;}
	static void setUserDAO(UserDAO *userDAO){DAORegistry::userDAO = userDAO;}
	static EventDAO *getEventDAO(){return DAORegistry::eventDAO;}
	static void setEventDAO(EventDAO *eventDAO){DAORegistry::eventDAO = eventDAO;}
	
};
#endif
