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
	UserDAO *userDAO = DAORegistry::getUserDAO();
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
	
	//Checks if email is avalible
	if(!userDAO->checkAvalibleEmail(registerWindow.lineEditEmail->text())){
		this->_showError("Email já cadastrado!");
		return;
	}
	
	//Sees if user already register.
	User *gUser= userDAO->getUser(this->registerWindow.lineEditLogin->text());
	if(gUser != NULL){
		this->_showError("Usuário já cadastrado no sistema!");
		delete gUser;
		return;
	} else {
		//Create the user
		User *user = new User(this->registerWindow.lineEditName->text(),this->registerWindow.lineEditLogin->text(),this->registerWindow.lineEditEmail->text(),this->registerWindow.lineEditPassword->text());
		userDAO->insertUser(user);
		//Go to the mainPage;
		MainPageHandler *main = new MainPageHandler(mother,user);
	}
}

#include "RegisterHandler.moc"

