#include "InviteHandler.hpp"

InviteHandler::InviteHandler(QMainWindow* mother, Invite **invites, int n){
	EventDAO *eventDAO = DAORegistry::getEventDAO();
	this->mother = mother;
	this->inviteWindow.setupUi(mother);
	this->inviteWindow.retranslateUi(mother);
	this->n = n;
	this->pointer = 0;
	this->invites = invites;

	Event *event = eventDAO->getEvent(this->invites[this->pointer]->getEventId());
	
	this->inviteWindow.labelConvitesEventName->setText(event->getName());
	
	mother->connect(this->inviteWindow.pushButtonAccept,SIGNAL(clicked()),this,SLOT(accept()));
	mother->connect(this->inviteWindow.pushButtonDecline,SIGNAL(clicked()),this,SLOT(decline()));
}

InviteHandler::~InviteHandler(){
}

void InviteHandler::accept(){
	EventDAO *eventDAO = DAORegistry::getEventDAO();
	InviteDAO *inviteDAO = DAORegistry::getInviteDAO();
	this->invites[this->pointer]->setAccepted(true);
	inviteDAO->updateInvite(this->invites[this->pointer]);
	this->pointer++;
	if(this->pointer < this->n){
		Event *event = eventDAO->getEvent(this->invites[this->pointer]->getEventId());
		this->inviteWindow.labelConvitesEventName->setText(event->getName());
		return;
	} else{
		emit updateInvites();
		mother->close();
	}
}

void InviteHandler::decline(){
	EventDAO *eventDAO = DAORegistry::getEventDAO();
	InviteDAO *inviteDAO = DAORegistry::getInviteDAO();
	inviteDAO->deleteInvite(this->invites[this->pointer]);
	this->pointer++;
	if(this->pointer < this->n){
		Event *event = eventDAO->getEvent(this->invites[this->pointer]->getEventId());
		this->inviteWindow.labelConvitesEventName->setText(event->getName());
		return;
	} else{
		emit updateInvites();
		mother->close();
	}
}

#include "InviteHandler.moc"
