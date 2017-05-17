#include "Rolenator.h"

Rolenator::Rolenator()
{
	QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
	this->loginHandler = new LoginHandler(this);
	
	/*
	
	this->viewEventHandler = new ViewEventHandler(this,event);*/
}

Rolenator::~Rolenator()
{}

void Rolenator::goToRegister(){
	delete this->loginHandler;
	this->registerHandler = new RegisterHandler(this);
}

void Rolenator::goToLogin(){
	//delete handler;
	this->loginHandler = new LoginHandler(this);
}

void Rolenator::goToEdit(Event* event){
	this->eventEditHandler = new EventEditHandler(this,event);
}


#include "Rolenator.moc"
