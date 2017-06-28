#include "ViewEventHandler.hpp"

ViewEventHandler::ViewEventHandler(QMainWindow *mother, Event *event, User *user){
	this->mother = mother;
	this->user = user;
	this->viewEventWindow.setupUi(mother);
	this->viewEventWindow.retranslateUi(mother);
	this->event = event;
	
	mother->connect(this->viewEventWindow.actionSair,SIGNAL(triggered()),this,SLOT(closeWindow()));
	mother->connect(this->viewEventWindow.actionLog_out,SIGNAL(triggered()),mother,SLOT(goToLogin()));
	mother->connect(this->viewEventWindow.pushButtonModificar,SIGNAL(clicked()),this,SLOT(goToEdit()));
	mother->connect(this->viewEventWindow.pushButtonBack,SIGNAL(clicked()),this,SLOT(back()));
	mother->connect(this->viewEventWindow.pushButtonConfirmar,SIGNAL(clicked()),this,SLOT(confirmEvent()));
	
	this->viewEventWindow.labelNomeEvento->setText(event->getName());
	this->viewEventWindow.labelDataHora->setText(event->getDate());
	this->viewEventWindow.labelLocal->setText(event->getLocal());
	this->viewEventWindow.textBrowserDescricao->setPlainText(event->getDescription());
	this->viewEventWindow.labelPreco->setText(QString::number(event->getPrice()));
	if(event->getFood())
		this->viewEventWindow.checkBoxComidaSim->setCheckState(Qt::Checked);
	else
		this->viewEventWindow.checkBoxComidaNao->setCheckState(Qt::Checked);
	if(event->getDrink())
		this->viewEventWindow.checkBoxBebidaSim->setCheckState(Qt::Checked);
	else
		this->viewEventWindow.checkBoxBebidaNao->setCheckState(Qt::Checked);
	
	this->processInvited();
	
}

ViewEventHandler::~ViewEventHandler(){
}

void ViewEventHandler::closeWindow(){
	mother->close();
}

void ViewEventHandler::confirmEvent(){
	InviteDAO *inviteDAO = DAORegistry::getInviteDAO();
	Invite *invite = inviteDAO->getInvite(this->user->getLogin(),this->event->getId());
	invite->setConfirmed(true);
	inviteDAO->updateInvite(invite);
	this->processInvited();
}

void ViewEventHandler::goToEdit(){
	EventEditHandler *eventEdit = new EventEditHandler(mother,event,user);
}

void ViewEventHandler::back(){
	MainPageHandler *main = new MainPageHandler(mother,user);
}

void ViewEventHandler::processInvited(){
	UserDAO *userDAO = DAORegistry::getUserDAO();
	InviteDAO *inviteDAO = DAORegistry::getInviteDAO();
	User **users=NULL;
	int nUsers;
	
	this->viewEventWindow.listWidgetConfirmadas->clear();
	this->viewEventWindow.listWidgetNaoConfirmadas->clear();
	
	nUsers = userDAO->getAllUsersAcceptdInvite(users,this->event->getId());
	for(int i=0;i<nUsers;i++)
		this->viewEventWindow.listWidgetNaoConfirmadas->addItem(users[i]->getName());
	
	nUsers = userDAO->getAllUsersConfirmedInvite(users,this->event->getId());
	for(int i=0;i<nUsers;i++)
		this->viewEventWindow.listWidgetConfirmadas->addItem(users[i]->getName());
	
	if(event->getOwner()->getLogin() != user->getLogin()){
	this->viewEventWindow.pushButtonModificar->hide();
	if(inviteDAO->getInvite(user->getLogin(),event->getId()) != NULL && inviteDAO->getInvite(user->getLogin(),event->getId())->getConfirmed()){
		this->viewEventWindow.pushButtonConfirmar->hide();
		}
	} else {
		this->viewEventWindow.pushButtonConfirmar->hide();
	}
}



#include "ViewEventHandler.moc"
