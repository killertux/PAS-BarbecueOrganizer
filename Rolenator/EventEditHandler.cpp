#include "EventEditHandler.hpp"

EventEditHandler::EventEditHandler(QMainWindow *mother, Event *event, User *user){
	this->mother = mother;
	this->user = user;
	this->eventEditWindow.setupUi(mother);
	this->eventEditWindow.retranslateUi(mother);
	this->fromEvent=false;
	this->event = event;
	
	mother->connect(this->eventEditWindow.actionSair,SIGNAL(triggered()),this,SLOT(closeWindow()));
	
	mother->connect(this->eventEditWindow.checkBoxBebidaNao,SIGNAL(stateChanged(int)),this,SLOT(checkBoxesNo(int)));
	mother->connect(this->eventEditWindow.checkBoxBebidaSim,SIGNAL(stateChanged(int)),this,SLOT(checkBoxesYes(int)));
	mother->connect(this->eventEditWindow.checkBoxComidaNao,SIGNAL(stateChanged(int)),this,SLOT(checkBoxesNo(int)));
	mother->connect(this->eventEditWindow.checkBoxComidaSim,SIGNAL(stateChanged(int)),this,SLOT(checkBoxesYes(int)));
	
	mother->connect(this->eventEditWindow.pushButtonSave,SIGNAL(clicked()),this,SLOT(save()));
	mother->connect(this->eventEditWindow.pushButtonBack,SIGNAL(clicked()),this,SLOT(back()));
	mother->connect(this->eventEditWindow.pushButtonInvte,SIGNAL(clicked()),this,SLOT(invite()));
	
	this->getPossibleInvite();
	
	if(event!=NULL){
		this->fromEvent =true;
		this->eventEditWindow.lineEditNomeEvento->setText(event->getName());
		this->eventEditWindow.lineEditLocal->setText(event->getLocal());
		this->eventEditWindow.textEditDescricao->setPlainText(event->getDescription());
		this->eventEditWindow.doubleSpinBoxPreco->setValue(event->getPrice());
		this->eventEditWindow.dateTimeEdit->setDateTime(QDateTime::fromString(event->getDate(),"yyyy-MM-ddTHH:mm:ss"));
		if(event->getFood())
			this->eventEditWindow.checkBoxComidaSim->setCheckState(Qt::Checked);
		else
			this->eventEditWindow.checkBoxComidaNao->setCheckState(Qt::Checked);
		if(event->getDrink())
			this->eventEditWindow.checkBoxBebidaSim->setCheckState(Qt::Checked);
		else
			this->eventEditWindow.checkBoxBebidaNao->setCheckState(Qt::Checked);
	}
}

EventEditHandler::~EventEditHandler(){
	InviteDAO *inviteDAO = DAORegistry::getInviteDAO();
	EventDAO *eventDAO = DAORegistry::getEventDAO();
	if(!this->fromEvent)
		inviteDAO->deleteAllFromEventId(eventDAO->getLastId()+1);
}

void EventEditHandler::closeWindow(){
	InviteDAO *inviteDAO = DAORegistry::getInviteDAO();
	EventDAO *eventDAO = DAORegistry::getEventDAO();
	if(!this->fromEvent)
		inviteDAO->deleteAllFromEventId(eventDAO->getLastId()+1);
	mother->close();
}

void EventEditHandler::_showError(QString text){
		QMessageBox::warning( 
        mother, 
        tr("Rolenator"), 
        text );
}

void EventEditHandler::checkBoxesNo(int state){
	if(this->eventEditWindow.checkBoxBebidaNao->isChecked())
		this->eventEditWindow.checkBoxBebidaSim->setCheckState(Qt::Unchecked);
	if(this->eventEditWindow.checkBoxComidaNao->isChecked())
		this->eventEditWindow.checkBoxComidaSim->setCheckState(Qt::Unchecked);
}

void EventEditHandler::checkBoxesYes(int state){
	if(this->eventEditWindow.checkBoxBebidaSim->isChecked())
		this->eventEditWindow.checkBoxBebidaNao->setCheckState(Qt::Unchecked);
	if(this->eventEditWindow.checkBoxComidaSim->isChecked())
		this->eventEditWindow.checkBoxComidaNao->setCheckState(Qt::Unchecked);
}

void EventEditHandler::save(){
	EventDAO *eventDAO = DAORegistry::getEventDAO();
	//Let's check if all necessary field were filled.
	if(this->eventEditWindow.lineEditNomeEvento->text().isEmpty()){
		this->_showError("É necessário preencher o campo do nome!");
		return;
	}
	if(this->eventEditWindow.lineEditLocal->text().isEmpty()){
		this->_showError("É necessário preencher o campo do local!");
		return;
	}
	if(this->eventEditWindow.textEditDescricao->toPlainText().isEmpty()){
		this->_showError("É necessário preencher o campo da descrição!");
		return;
	}
	//Save Event.
	if(this->event == NULL){
		this->event = new Event();
		this->event->setName(this->eventEditWindow.lineEditNomeEvento->text());
		this->event->setDescription(this->eventEditWindow.textEditDescricao->toPlainText());
		this->event->setLocal(this->eventEditWindow.lineEditLocal->text());
		this->event->setDate(this->eventEditWindow.dateTimeEdit->dateTime().toString("yyyy-MM-ddTHH:mm:ss"));
		this->event->setPrice(this->eventEditWindow.doubleSpinBoxPreco->value());
		this->event->setDrink((this->eventEditWindow.checkBoxBebidaSim->isChecked())?true:false);
		this->event->setFood((this->eventEditWindow.checkBoxComidaSim->isChecked())?true:false);
		this->event->setOwner(user);
		eventDAO->insertEvent(this->event);
	} else {
		this->event->setName(this->eventEditWindow.lineEditNomeEvento->text());
		this->event->setDescription(this->eventEditWindow.textEditDescricao->toPlainText());
		this->event->setLocal(this->eventEditWindow.lineEditLocal->text());
		this->event->setDate(this->eventEditWindow.dateTimeEdit->dateTime().toString("yyyy-MM-ddTHH:mm:ss"));
		this->event->setPrice(this->eventEditWindow.doubleSpinBoxPreco->value());
		this->event->setDrink((this->eventEditWindow.checkBoxBebidaSim->isChecked())?true:false);
		this->event->setFood((this->eventEditWindow.checkBoxComidaSim->isChecked())?true:false);
		this->event->setOwner(user);
		eventDAO->updateEvent(this->event);
	}
	//Go to the view event
	if(this->fromEvent){
		ViewEventHandler *viewEvent = new ViewEventHandler(mother, event,user);
	} else
		MainPageHandler *main = new MainPageHandler(mother,user);
}

void EventEditHandler::back(){
	InviteDAO *inviteDAO = DAORegistry::getInviteDAO();
	EventDAO *eventDAO = DAORegistry::getEventDAO();
	if(this->fromEvent){
		ViewEventHandler *viewEvent = new ViewEventHandler(mother, event,user);
	} else{
		inviteDAO->deleteAllFromEventId(eventDAO->getLastId()+1);
		MainPageHandler *main = new MainPageHandler(mother,user);
	}
}

void EventEditHandler::getPossibleInvite(){
	UserDAO *userDAO = DAORegistry::getUserDAO();
	EventDAO *eventDAO = DAORegistry::getEventDAO();
	this->eventEditWindow.listWidgetInvite->clear();
	User **users;
	int nUsers = 0;
	if(this->event == NULL)
		nUsers = userDAO->getAllUsersNotInvited(&users,eventDAO->getLastId()+1);
	else
		nUsers = userDAO->getAllUsersNotInvited(&users,event->getId());
	for(int i=0; i< nUsers; i++)
		if(users[i]->getLogin()!=this->user->getLogin()){
			QListWidgetItem *userItem = new QListWidgetItem(this->eventEditWindow.listWidgetInvite);
			userItem->setText(users[i]->getName());
			userItem->setData(Qt::UserRole,users[i]->getLogin());
		}
}

void EventEditHandler::invite(){
	QListWidgetItem *item = this->eventEditWindow.listWidgetInvite->currentItem();
	InviteDAO *inviteDAO = DAORegistry::getInviteDAO();
	EventDAO *eventDAO = DAORegistry::getEventDAO();
	Invite invite;
	invite.setFrom(this->user->getLogin());
	invite.setAccepted(false);
	if(this->event == NULL)
		invite.setEventId(eventDAO->getLastId()+1);
	else
		invite.setEventId(event->getId());
	invite.setTo(item->data(Qt::UserRole).toString());
	inviteDAO->insertInvite(&invite);
	this->getPossibleInvite();
}


#include "EventEditHandler.moc"
