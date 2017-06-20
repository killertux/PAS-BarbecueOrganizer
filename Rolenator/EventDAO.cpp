#include "EventDAO.hpp"

EventDAO::EventDAO(QSqlDatabase* connection) : DAO(connection){
}

EventDAO::~EventDAO(){
}

void EventDAO::insertEvent(Event* event){
	
}

