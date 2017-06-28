#include "Event.hpp"

void Event::setOwner(QString login){
	UserDAO *userDAO = DAORegistry::getUserDAO();
	this->owner = userDAO->getUser(login);
}
