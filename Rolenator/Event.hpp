#ifndef EVENT_HPP
#define EVENT_HPP

#include <string>

class Event{
	std::string name;
	std::string local;
	std::string date;
	std::string description;
	std::string price;
	bool food;
	bool drink;
	
public:
	void setName(std::string name){this->name=name;}
	void setLocal(std::string local){this->local=local;}
	void setDate(std::string date){this->date=date;}
	void setDescription(std::string description){this->description=description;}
	void setPrice(std::string price){this->price=price;}
	void setFood(bool food){this->food=food;}
	void setDrink(bool drink){this->drink=drink;}
	
	std::string getName(){return this->name;}
	std::string getLocal(){return this->local;}
	std::string getDate(){return this->date;}
	std::string getDescription(){return this->description;}
	std::string getPrice(){return this->price;}
	bool getFood(){return this->food;}
	bool getDrink(){return this->drink;}
};

#endif
