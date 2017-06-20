#include "MainPageHandler.hpp"

MainPageHandler::MainPageHandler(QMainWindow* mother, User *user){
	this->mother = mother;
	this->user = user;
	this->mainPageWindow.setupUi(mother);
	this->mainPageWindow.retranslateUi(mother);
	UserDAO *userDAO = DAORegistry::getUserDAO();
	
	mother->connect(this->mainPageWindow.actionSair,SIGNAL(triggered()),this, SLOT(closeWindow()));
	mother->connect(this->mainPageWindow.actionLog_out,SIGNAL(triggered()),mother, SLOT(goToLogin()));
	mother->connect(this->mainPageWindow.pushButtonVisConvites,SIGNAL(clicked()),this,SLOT(goToInvite()));
	mother->connect(this->mainPageWindow.pushButtonVisEventos,SIGNAL(clicked()),this,SLOT(goToViewEvent()));
	mother->connect(this->mainPageWindow.pushButtonCriarEvento,SIGNAL(clicked()),this,SLOT(goToEditEvent()));
	mother->connect(this->mainPageWindow.pushButtonMessage,SIGNAL(clicked()),this,SLOT(goToMessage()));
	
	this->mainPageWindow.labelConvitesNum->setText("2");
	
	events = new Event*[1];
	events[0] = new Event;
	events[0]->setName("Evento de Teste");
	events[0]->setLocal("UTFPR");
	events[0]->setDescription("Apenas uma descrição de teste");
	events[0]->setPrice(32.50);
	events[0]->setDrink(true);
	events[0]->setFood(false);
	events[0]->setDate("01/06/17 20:00");
	
	this->mainPageWindow.comboBoxEventos->addItem(events[0]->getName());
	
	this->nUsers = userDAO->getAllUsers(&this->users);
	for(int i=0; i< this->nUsers; i++)
		if(this->users[i]->getLogin()!=this->user->getLogin()){
			QListWidgetItem *userItem = new QListWidgetItem(this->mainPageWindow.listWidgetAmigos);
			std::cout << i << "-" << this->nUsers << std::endl;
			userItem->setText(this->users[i]->getName());
			userItem->setData(Qt::UserRole,users[i]->getLogin());
		}
}

MainPageHandler::~MainPageHandler(){
}

void MainPageHandler::closeWindow(){
	mother->close();
}

void MainPageHandler::goToInvite(){
	QMainWindow *inviteWindow = new QMainWindow(mother);
	InviteHandler *inv = new InviteHandler(inviteWindow);
	inviteWindow->show();
}

void MainPageHandler::goToViewEvent(){
	ViewEventHandler *view = new ViewEventHandler(mother,events[0], user);
}

void MainPageHandler::goToEditEvent(){
	EventEditHandler *event = new EventEditHandler(mother,NULL, user);
}

void MainPageHandler::goToMessage(){
	//get the current addItem
	MessageHandler *msg = new MessageHandler(mother, user, user /*TODO*/);
}


#include "MainPageHandler.moc"
