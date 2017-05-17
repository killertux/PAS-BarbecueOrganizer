#include "InviteHandler.hpp"

InviteHandler::InviteHandler(QMainWindow* mother){
	this->mother = mother;
	this->inviteWindow.setupUi(mother);
	this->inviteWindow.retranslateUi(mother);
	
	n=2;
	events[0] = "Evento 1";
	events[1] = "Evento 2";
	pointer = 0;
	this->inviteWindow.labelConvitesEventName->setText(events[pointer]);
	
	mother->connect(this->inviteWindow.pushButtonAccept,SIGNAL(clicked()),this,SLOT(accept()));
	mother->connect(this->inviteWindow.pushButtonDecline,SIGNAL(clicked()),this,SLOT(decline()));
}

InviteHandler::~InviteHandler(){
}

void InviteHandler::accept(){
	//Do accept stuff
	this->pointer++;
	if(this->pointer < this->n){
		this->inviteWindow.labelConvitesEventName->setText(events[pointer]);
		return;
	} else{
		mother->close();
	}
}

void InviteHandler::decline(){
	//Do decline stuff
	this->pointer++;
	if(this->pointer < this->n){
		this->inviteWindow.labelConvitesEventName->setText(events[pointer]);
		return;
	} else{
		mother->close();
	}
}

#include "InviteHandler.moc"
