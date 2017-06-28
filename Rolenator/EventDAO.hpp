#ifndef EVENTDAO_HPP
#define EVENTDAO_HPP

#include "DAO.hpp"
#include "Event.hpp"
#include <QVariant>

class Event;

class EventDAO : public DAO {
private:
public:
	EventDAO(QSqlDatabase *connection);
	~EventDAO();
	void insertEvent(Event *event);
	void updateEvent(Event *event);
	int getAllInvitedEvents(Event **&events, QString login);
	int getAllMyEvents(Event **&events, QString login);
	Event *getEvent(int eid);
	int getLastId();
};

#endif
