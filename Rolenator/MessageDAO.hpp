#ifndef MESSAGEDAO_HPP
#define MESSAGEDAO_HPP

#include "DAO.hpp"
#include "Message.hpp"
#include <QVariant>


class MessageDAO : public DAO{
private:
public:
	MessageDAO(QSqlDatabase *connection);
	~MessageDAO();
	void insertMessage(Message *message);
	int getUnreadMessages(Message **&messages,QString from, QString to);
	void setMessageAsRead(int mid);
};

#endif
