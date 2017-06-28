#include "MessageDAO.hpp"

MessageDAO::MessageDAO(QSqlDatabase* connection) : DAO(connection){
}

MessageDAO::~MessageDAO(){
}

void MessageDAO::insertMessage(Message* message){
	QString query = "INSERT INTO message(message,from_user,to_user,was_read) VALUES (";
	query += "'"+message->getMessage()+"',";
	query += "'"+message->getFrom()+"',";
	query += "'"+message->getTo()+"',";
	query += "'"+((message->getRead())?QString("1"):QString("0"))+"');";
	this->update(query);
}

int MessageDAO::getUnreadMessages(Message **& messages, QString from, QString to){
	QString query = "SELECT message, to_user, from_user, mid FROM message WHERE was_read = '0' AND to_user = '"+to+"' AND from_user = '"+from+"';";
	QSqlQuery result = this->retrieve(query);
	if(result.size() == 0)
		return 0;
	messages = new Message* [result.size()];
	int n=0;
	while(result.next()){
		Message *message = new Message();
		message->setMessage(result.value(0).toString());
		message->setTo(result.value(1).toString());
		message->setFrom(result.value(2).toString());
		message->setId(result.value(3).toInt());
		message->setRead(false);
		messages[n] = message;
		n++;
	}
	return result.size();
}

void MessageDAO::setMessageAsRead(int mid){
	QString query = "UPDATE message SET was_read = '1' WHERE mid = '"+QString::number(mid)+"';";
	this->update(query);
}

