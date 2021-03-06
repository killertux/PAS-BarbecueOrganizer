#include "LoginHandler.hpp"

LoginHandler::LoginHandler(QMainWindow* mother){
	this->mother = mother;
	this->loginWindow.setupUi(mother);
	this->loginWindow.retranslateUi(mother);
	
	mother->connect(this->loginWindow.actionSair,SIGNAL(triggered()),this,SLOT(closeWindow()));
	mother->connect(this->loginWindow.pushButtonRegister,SIGNAL(clicked()),mother,SLOT(goToRegister()));
	mother->connect(this->loginWindow.pushButtonLogin,SIGNAL(clicked()),this,SLOT(login()));
}

LoginHandler::~LoginHandler(){

}

void LoginHandler::closeWindow()
{
	mother->close();
}

void LoginHandler::login(){
	UserDAO *userDAO = DAORegistry::getUserDAO();
	//Let's check if the user have typed anything!
	if(this->loginWindow.lineEditLogin->text() == ""){
		this->_showError("Você precisa digitar um login válido!");
		return;
	}
	if(this->loginWindow.lineEditPassword->text() == ""){
		this->_showError("Você precisa digitar uma senha válida!");
		return;
	}
	
	User *user = userDAO->getUser(this->loginWindow.lineEditLogin->text());
	//See if user exists
	if(user != NULL && this->loginWindow.lineEditPassword->text() == user->getPassword()){
		MainPageHandler *main = new MainPageHandler(mother,user);
	} else {
		this->_showError("Dados de usuário inválidos!");
		return;
	}
}

void LoginHandler::_showError(QString text){
	QMessageBox::warning( 
        mother, 
        tr("Rolenator"), 
        text );
}



#include "LoginHandler.moc"
