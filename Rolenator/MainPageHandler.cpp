#include "MainPageHandler.hpp"

MainPageHandler::MainPageHandler(QMainWindow* mother, User *user){
	UserDAO *userDAO = DAORegistry::getUserDAO();
	InviteDAO *inviteDAO = DAORegistry::getInviteDAO();
	EventDAO *eventDAO = DAORegistry::getEventDAO();
	Event **events=NULL;
	int nEvents;
	this->mother = mother;
	this->user = user;
	this->mainPageWindow.setupUi(mother);
	this->mainPageWindow.retranslateUi(mother);

	
	mother->connect(this->mainPageWindow.actionSair,SIGNAL(triggered()),this, SLOT(closeWindow()));
	mother->connect(this->mainPageWindow.actionLog_out,SIGNAL(triggered()),mother, SLOT(goToLogin()));
	mother->connect(this->mainPageWindow.pushButtonVisConvites,SIGNAL(clicked()),this,SLOT(goToInvite()));
	mother->connect(this->mainPageWindow.pushButtonVisEventos,SIGNAL(clicked()),this,SLOT(goToViewEvent()));
	mother->connect(this->mainPageWindow.pushButtonCriarEvento,SIGNAL(clicked()),this,SLOT(goToEditEvent()));
	mother->connect(this->mainPageWindow.pushButtonMessage,SIGNAL(clicked()),this,SLOT(goToMessage()));
	
	this->updateEvents();
	this->updateInvite();
	
	this->nUsers = userDAO->getAllUsers(&this->users);
	for(int i=0; i< this->nUsers; i++)
		if(this->users[i]->getLogin()!=this->user->getLogin()){
			QListWidgetItem *userItem = new QListWidgetItem(this->mainPageWindow.listWidgetAmigos);
			userItem->setText(this->users[i]->getName());
			userItem->setData(Qt::UserRole,users[i]->getLogin());
			this->mainPageWindow.listWidgetAmigos->setCurrentItem(userItem);
		}
}

MainPageHandler::~MainPageHandler(){
}

void MainPageHandler::closeWindow(){
	mother->close();
}

void MainPageHandler::goToInvite(){
	QMainWindow *inviteWindow = new QMainWindow(mother);
	InviteHandler *inv = new InviteHandler(inviteWindow,this->invites,this->nInvites);
	this->connect(inv,SIGNAL(updateInvites()),this,SLOT(updateInvite()));
	this->connect(inv,SIGNAL(updateInvites()),this,SLOT(updateEvents()));
	inviteWindow->show();
}

void MainPageHandler::goToViewEvent(){
	EventDAO *eventDAO = DAORegistry::getEventDAO();
	int index = this->mainPageWindow.comboBoxEventos->currentIndex();
	Event *event = eventDAO->getEvent(this->mainPageWindow.comboBoxEventos->itemData(index,Qt::UserRole).toInt());
	
	ViewEventHandler *view = new ViewEventHandler(mother,event,this->user);
}

void MainPageHandler::goToEditEvent(){
	EventEditHandler *event = new EventEditHandler(mother,NULL, user);
}

void MainPageHandler::goToMessage(){
	QListWidgetItem *item = this->mainPageWindow.listWidgetAmigos->currentItem();
	UserDAO *userDAO = DAORegistry::getUserDAO();
	User *user_to = userDAO->getUser(item->data(Qt::UserRole).toString());

	MessageHandler *msg = new MessageHandler(mother, user, user_to);
}

void MainPageHandler::updateInvite(){
	InviteDAO *inviteDAO = DAORegistry::getInviteDAO();
	this->nInvites = inviteDAO->getAllOpenInviteTo(&this->invites,this->user->getLogin());
	this->mainPageWindow.labelConvitesNum->setText(QString::number(this->nInvites));
	if(nInvites == 0)
		this->mainPageWindow.pushButtonVisConvites->setEnabled(false);
}

void MainPageHandler::updateEvents(){
	EventDAO *eventDAO = DAORegistry::getEventDAO();
	int nEvents;
	nEvents = eventDAO->getAllMyEvents(events,user->getLogin());
	for(int i=0;i<nEvents;i++)
		this->mainPageWindow.comboBoxEventos->addItem(events[i]->getName(),events[i]->getId());
	
	nEvents = eventDAO->getAllInvitedEvents(events,user->getLogin());
	for(int i=0;i<nEvents;i++)
		this->mainPageWindow.comboBoxEventos->addItem(events[i]->getName(),events[i]->getId());
}


#include "MainPageHandler.moc"
