#ifndef INVITE_HPP
#define INVITE_HPP

#include <QString>

class Invite{
private:
	bool accepted;
	bool confirmed;
	QString to;
	QString from;
	int eventId;
public:
	Invite();
	void setAccepted(bool accepted){this->accepted = accepted;}
	bool getAccepted(){return this->accepted;}
	void setConfirmed(bool confirmed){this->confirmed = confirmed;}
	bool getConfirmed(){return this->confirmed;}
	void setTo(QString to){this->to = to;}
	QString getTo(){return this->to;}
	void setFrom(QString from){this->from = from;}
	QString getFrom(){return this->from;}
	void setEventId(int eventId){this->eventId = eventId;}
	int getEventId(){return this->eventId;}
};

#endif
