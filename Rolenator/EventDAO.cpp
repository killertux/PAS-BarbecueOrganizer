#include "EventDAO.hpp"

EventDAO::EventDAO(QSqlDatabase* connection) : DAO(connection){
}

EventDAO::~EventDAO(){
}

void EventDAO::insertEvent(Event* event){
	QString query = "INSERT INTO event(name, owner, date, description, local, price, food, drink) VALUES (";
	query+= "'"+event->getName()+"',";
	query+= "'"+event->getOwner()->getLogin()+"',";
	query+= "'"+event->getDate()+"',";
	query+= "'"+event->getDescription()+"',";
	query+= "'"+event->getLocal()+"',";
	query+= "'"+QString::number(event->getPrice())+"',";
	query+= "'"+QString((event->getFood())?"1":"0")+"',";
	query+= "'"+QString((event->getDrink())?"1":"0")+"');";
	this->update(query);
}

