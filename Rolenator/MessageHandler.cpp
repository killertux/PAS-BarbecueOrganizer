#include 	"MessageHandler.hpp"

MessageHandler::MessageHandler(QMainWindow *mother,User *userFrom, User *userTo){
	this->mother = mother;
	this->userFrom = userFrom;
	this->userTo = userTo;
	this->messageWindow.setupUi(mother);
	this->messageWindow.retranslateUi(mother);
	this->timer = new QTimer;
	this->timer->setInterval(1000);
	this->timer->setSingleShot(false);
	
	mother->connect(this->messageWindow.actionSair,SIGNAL(triggered()),this,SLOT(closeWindow()));
	mother->connect(this->messageWindow.actionLog_Out,SIGNAL(triggered()),mother,SLOT(goToLogin()));
	mother->connect(this->messageWindow.pushButtonEnviar,SIGNAL(clicked()),this,SLOT(send()));
	mother->connect(this->messageWindow.pushButtonVoltar,SIGNAL(clicked()),this,SLOT(back()));
	mother->connect(this->timer,SIGNAL(timeout()),this,SLOT(update()));
	this->messageWindow.labelConversaUser->setText(this->userTo->getName());
	
	this->update();
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
	MessageDAO *messageDAO = DAORegistry::getMessageDAO();
	QString msg = "Enviado :" + this->messageWindow.lineEditMensagem->text();
	this->messageWindow.textBrowserConversaLog->append(msg);
	
	Message message;
	message.setFrom(this->userFrom->getLogin());
	message.setTo(this->userTo->getLogin());
	message.setMessage(this->messageWindow.lineEditMensagem->text());
	message.setRead(false);
	messageDAO->insertMessage(&message);
	this->messageWindow.lineEditMensagem->clear();
}

void MessageHandler::update(){
	this->timer->stop();
	MessageDAO *messageDAO = DAORegistry::getMessageDAO();
	Message **messages = NULL;
	int nMessages = messageDAO->getUnreadMessages(messages,this->userTo->getLogin(),this->userFrom->getLogin());
	
	for(int i=0;i<nMessages;i++){
		messageDAO->setMessageAsRead(messages[i]->getId());
		this->messageWindow.textBrowserConversaLog->append("Recebido :" + messages[i]->getMessage());
	}
	
	this->timer->start();
}


#include "MessageHandler.moc"
