#include 	"MessageHandler.hpp"

MessageHandler::MessageHandler(QMainWindow *mother,User *userFrom, User *userTo){
	this->mother = mother;
	this->userFrom = userFrom;
	this->userTo = userTo;
	this->messageWindow.setupUi(mother);
	this->messageWindow.retranslateUi(mother);
	
	mother->connect(this->messageWindow.actionSair,SIGNAL(triggered()),this,SLOT(closeWindow()));
	mother->connect(this->messageWindow.actionLog_Out,SIGNAL(triggered()),mother,SLOT(goToLogin()));
	mother->connect(this->messageWindow.pushButtonEnviar,SIGNAL(clicked()),this,SLOT(send()));
	mother->connect(this->messageWindow.pushButtonVoltar,SIGNAL(clicked()),this,SLOT(back()));
	this->messageWindow.labelConversaUser->setText("Bruno");
}

MessageHandler::~MessageHandler()
{
}

void MessageHandler::back()
{
	MainPageHandler *main = new MainPageHandler(mother, userFrom);
}

void MessageHandler::closeWindow(){
	mother->close();
}

void MessageHandler::send(){
	QString msg = "Enviado :" + this->messageWindow.lineEditMensagem->text();
	this->messageWindow.textBrowserConversaLog->append(msg);
	//Do send stuff
}

#include "MessageHandler.moc"
