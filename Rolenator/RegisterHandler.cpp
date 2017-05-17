#include "RegisterHandler.hpp"

RegisterHandler::RegisterHandler(QMainWindow* mother){
	this->mother = mother;
	this->registerWindow.setupUi(mother);
	this->registerWindow.retranslateUi(mother);
	
	mother->connect(this->registerWindow.actionSair,SIGNAL(triggered()),this,SLOT(closeWindow()));
	mother->connect(this->registerWindow.pushButtonBack,SIGNAL(clicked()),mother,SLOT(goToLogin()));
	mother->connect(this->registerWindow.pushButtonRegister,SIGNAL(clicked()),this,SLOT(registerUser()));
}

RegisterHandler::~RegisterHandler(){
}

void RegisterHandler::closeWindow(){
	mother->close();
}

void RegisterHandler::_showError(QString text){
	QMessageBox::warning( 
        mother, 
        tr("Rolenator"), 
        text );
}

void RegisterHandler::registerUser(){
	//All field are necessary
	if(this->registerWindow.lineEditEmail->text() == ""){
		this->_showError("É necessário preencher o campo do email!");
		return;
	}
	if(this->registerWindow.lineEditLogin->text() == ""){
		this->_showError("É necessário preencher o campo de login!");
		return;
	}
	if(this->registerWindow.lineEditName->text() == ""){
		this->_showError("É necessário preencher o campo do nome!");
		return;
	}
	if(this->registerWindow.lineEditPassword->text() == ""){
		this->_showError("É necessário preencher o campo da senha!");
		return;
	}
	//Let's check if the password was typed correctly
	if(this->registerWindow.lineEditPassword->text() != this->registerWindow.lineEditRePassword->text()){
		this->_showError("A senhas não conferem!");
		return;
	}
	//Let's check if the password size is at least 6 chars.
	if(this->registerWindow.lineEditPassword->text().size()<6){
		this->_showError("A senhas precisa conter pelo menos 6 caracteres!");
		return;
	}
	
	//Sees if user already register.
	if(true){
		this->_showError("Usuário já cadastrado no sistema!");
		return;
	} else {
		//Create the user
		//Go to the mainPage;
	}
}

#include "RegisterHandler.moc"

