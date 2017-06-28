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

void EventDAO::updateEvent(Event* event){
	QString query = "UPDATE event  SET name =";
	query+= "'"+event->getName()+"', owner=";
	query+= "'"+event->getOwner()->getLogin()+"',date";
	query+= "'"+event->getDate()+"',description";
	query+= "'"+event->getDescription()+"',local";
	query+= "'"+event->getLocal()+"',price";
	query+= "'"+QString::number(event->getPrice())+"',food";
	query+= "'"+QString((event->getFood())?"1":"0")+"',drink";
	query+= "'"+QString((event->getDrink())?"1":"0")+"' WHERE eid =";
	query+="'"+QString::number(event->getId())+"';";
	this->update(query);
}


int EventDAO::getLastId(){
	QString query = "SELECT MAX(eid) FROM event;";
	QSqlQuery result = this->retrieve(query);
	if(result.size() == 0)
		return 0;
	result.first();
	return result.value(0).toInt();
}

Event * EventDAO::getEvent(int eid){
	QString query = "SELECT name, owner, date, description, price, local, food, drink, eid FROM event WHERE eid = '" + QString::number(eid) + "';";
	QSqlQuery result = this->retrieve(query);
	if(result.size() == 0)
		return NULL;
	result.first();
	Event *event = new Event();
	event->setName(result.value(0).toString());
	event->setOwner(result.value(1).toString());
	event->setDate(result.value(2).toString());
	event->setDescription(result.value(3).toString());
	event->setPrice(result.value(4).toDouble());
	event->setLocal(result.value(5).toString());
	event->setFood(result.value(6).toBool());
	event->setDrink(result.value(7).toBool());
	event->setId(result.value(8).toInt());
	return event;
}

int EventDAO::getAllInvitedEvents(Event **&events, QString login){
	QString query = "SELECT name, owner, date, description, price, local, food, drink, eid FROM event AS e NATURAL JOIN invite AS i WHERE i.accepted = '1' AND i.user ='"+login+"';";
	QSqlQuery result = this->retrieve(query);
	if(result.size() == 0)
		return 0;
	events = new Event* [result.size()];
	int n=0;
	while(result.next()){
		Event *event = new Event();
		event->setName(result.value(0).toString());
		event->setOwner(result.value(1).toString());
		event->setDate(result.value(2).toString());
		event->setDescription(result.value(3).toString());
		event->setPrice(result.value(4).toDouble());
		event->setLocal(result.value(5).toString());
		event->setFood(result.value(6).toBool());
		event->setDrink(result.value(7).toBool());
		event->setId(result.value(8).toInt());
		events[n] = event;
		n++;
	}
	return result.size();
}

int EventDAO::getAllMyEvents(Event **& events, QString login){
	QString query = "SELECT name, owner, date, description, price, local, food, drink, eid FROM event WHERE owner='"+login+"';";
	QSqlQuery result = this->retrieve(query);
	if(result.size() == 0)
		return 0;
	events = new Event* [result.size()];
	int n=0;
	while(result.next()){
		Event *event = new Event();
		event->setName(result.value(0).toString());
		event->setOwner(result.value(1).toString());
		event->setDate(result.value(2).toString());
		event->setDescription(result.value(3).toString());
		event->setPrice(result.value(4).toDouble());
		event->setLocal(result.value(5).toString());
		event->setFood(result.value(6).toBool());
		event->setDrink(result.value(7).toBool());
		event->setId(result.value(8).toInt());
		events[n] = event;
		n++;
	}
	return result.size();
}



