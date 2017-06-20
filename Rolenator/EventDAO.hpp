#ifndef EVENTDAO_HPP
#define EVENTDAO_HPP

#include "DAO.hpp"
#include "Event.hpp"

class EventDAO : public DAO {
private:
public:
	EventDAO(QSqlDatabase *connection);
	~EventDAO();
	void insertEvent(Event *event);
};

#endif
