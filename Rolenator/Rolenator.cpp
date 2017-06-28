#include "Rolenator.h"

Rolenator::Rolenator()
{
	QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
	this->db = QSqlDatabase::addDatabase("QMYSQL","db");
	this->db.setHostName("localhost");
	this->db.setDatabaseName("rolenator");
	this->db.setPort(3307);
	this->db.setUserName("root");
	this->db.setPassword("brs42");
	if(!this->db.open())
		std::cout << "Error opening the database connection!\n";
	this->loginHandler = new LoginHandler(this);
	DAORegistry::setUserDAO(new UserDAO(&this->db));
	DAORegistry::setEventDAO(new EventDAO(&this->db));
	DAORegistry::setInviteDAO(new InviteDAO(&this->db));
	DAORegistry::setMessageDAO(new MessageDAO(&this->db));
	/*
	
	this->viewEventHandler = new ViewEventHandler(this,event);*/
}

Rolenator::~Rolenator()
{
	this->db.close();
}

void Rolenator::goToRegister(){
	delete this->loginHandler;
	this->registerHandler = new RegisterHandler(this);
}

void Rolenator::goToLogin(){
	//delete handler;
	this->loginHandler = new LoginHandler(this);
}

void Rolenator::goToEdit(Event* event){
	//this->eventEditHandler = new EventEditHandler(this,event,user);
}


#include "Rolenator.moc"
