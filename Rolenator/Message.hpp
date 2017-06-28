#ifndef MESSAGE_HPP
#define MESSAGE_HPP

#include <QString>

class Message{
private:
	QString message;
	QString to;
	QString from;
	bool read;
	int mid;
public:
	void setMessage(QString message){this->message = message;}
	void setTo(QString to){this->to = to;}
	void setFrom(QString from){this->from = from;}
	void setRead(bool read){this->read = read;}
	void setId(int mid){this->mid = mid;}
	
	QString getMessage(){return this->message;}
	QString getTo(){return this->to;}
	QString getFrom(){return this->from;}
	bool getRead(){return this->read;}
	int getId(){return this->mid;}
};

#endif
