#ifndef DAOREGISTRY_HPP
#define DAOREGISTRY_HPP

#include "UserDAO.hpp"
#include "EventDAO.hpp"
#include "InviteDAO.hpp"
#include "MessageDAO.hpp"

class EventDAO;

class DAORegistry{
private:
	static UserDAO *userDAO;
	static EventDAO *eventDAO;
	static InviteDAO *inviteDAO;
	static MessageDAO *messageDAO;
public:
	static UserDAO *getUserDAO(){return DAORegistry::userDAO;}
	static void setUserDAO(UserDAO *userDAO){DAORegistry::userDAO = userDAO;}
	static EventDAO *getEventDAO(){return DAORegistry::eventDAO;}
	static void setEventDAO(EventDAO *eventDAO){DAORegistry::eventDAO = eventDAO;}
	static InviteDAO *getInviteDAO(){return DAORegistry::inviteDAO;}
	static void setInviteDAO(InviteDAO *inviteDAO){DAORegistry::inviteDAO = inviteDAO;}
	static MessageDAO *getMessageDAO(){return DAORegistry::messageDAO;}
	static void setMessageDAO(MessageDAO *messageDAO){DAORegistry::messageDAO = messageDAO;}
	
};
#endif
