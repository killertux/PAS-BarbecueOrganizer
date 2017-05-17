#include "MainPageHandler.hpp"

MainPageHandler::MainPageHandler(QMainWindow* mother){
	this->mother = mother;
	this->mainPageWindow.setupUi(mother);
	this->mainPageWindow.retranslateUi(mother);
	
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
	events[0]->setPrice("32,00");
	events[0]->setDrink(true);
	events[0]->setFood(false);
	events[0]->setDate("01/06/17 20:00");
	
	this->mainPageWindow.comboBoxEventos->addItem(events[0]->getName().c_str());
	
	QListWidgetItem *user = new QListWidgetItem(this->mainPageWindow.listWidgetAmigos);
	user->setText("Bruno");
	this->mainPageWindow.listWidgetAmigos->setCurrentItem(user);
	user = new QListWidgetItem(this->mainPageWindow.listWidgetAmigos);
	user->setText("Everton");
	user = new QListWidgetItem(this->mainPageWindow.listWidgetAmigos);
	user->setText("Tavano");
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
	ViewEventHandler *view = new ViewEventHandler(mother,events[0]);
}

void MainPageHandler::goToEditEvent(){
	EventEditHandler *event = new EventEditHandler(mother,NULL);
}

void MainPageHandler::goToMessage(){
	//get the current addItem
	MessageHandler *msg = new MessageHandler(mother);
}


#include "MainPageHandler.moc"
