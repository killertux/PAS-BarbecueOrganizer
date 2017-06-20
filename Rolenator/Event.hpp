#ifndef EVENT_HPP
#define EVENT_HPP

#include <QString>

class Event{
	QString name;
	QString local;
	QString date;
	QString description;
	QString price;
	bool food;
	bool drink;
	
public:
	void setName(QString name){this->name=name;}
	void setLocal(QString local){this->local=local;}
	void setDate(QString date){this->date=date;}
	void setDescription(QString description){this->description=description;}
	void setPrice(QString price){this->price=price;}
	void setFood(bool food){this->food=food;}
	void setDrink(bool drink){this->drink=drink;}
	
	QString getName(){return this->name;}
	QString getLocal(){return this->local;}
	QString getDate(){return this->date;}
	QString getDescription(){return this->description;}
	QString getPrice(){return this->price;}
	bool getFood(){return this->food;}
	bool getDrink(){return this->drink;}
};

#endif
