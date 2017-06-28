#ifndef EVENT_HPP
#define EVENT_HPP

#include <QString>
#include "User.hpp"
#include "DAORegistry.hpp"

class Event{
	QString name;
	QString local;
	QString date;
	QString description;
	double price;
	bool food;
	bool drink;
	User *owner;
	int id;
	
public:
	void setName(QString name){this->name=name;}
	void setLocal(QString local){this->local=local;}
	void setDate(QString date){this->date=date;}
	void setDescription(QString description){this->description=description;}
	void setPrice(double price){this->price=price;}
	void setFood(bool food){this->food=food;}
	void setDrink(bool drink){this->drink=drink;}
	void setOwner(User *owner){this->owner=owner;}
	void setOwner(QString login);
	void setId(int id){this->id = id;}
	
	QString getName(){return this->name;}
	QString getLocal(){return this->local;}
	QString getDate(){return this->date;}
	QString getDescription(){return this->description;}
	double getPrice(){return this->price;}
	bool getFood(){return this->food;}
	bool getDrink(){return this->drink;}
	User *getOwner(){return this->owner;}
	int getId(){return this->id;}
};

#endif
