#include "ViewEventHandler.hpp"

ViewEventHandler::ViewEventHandler(QMainWindow* mother, Event *event){
	this->mother = mother;
	this->viewEventWindow.setupUi(mother);
	this->viewEventWindow.retranslateUi(mother);
	this->event = event;
	
	mother->connect(this->viewEventWindow.actionSair,SIGNAL(triggered()),this,SLOT(closeWindow()));
	mother->connect(this->viewEventWindow.actionLog_out,SIGNAL(triggered()),mother,SLOT(goToLogin()));
	mother->connect(this->viewEventWindow.pushButtonModificar,SIGNAL(clicked()),this,SLOT(goToEdit()));
	mother->connect(this->viewEventWindow.pushButtonBack,SIGNAL(clicked()),this,SLOT(back()));
	
	bool isOwner = true;
	bool isConfirmed = false;
	
	if(!isOwner){
		this->viewEventWindow.pushButtonModificar->hide();
	}
	if(isConfirmed){
		this->viewEventWindow.pushButtonConfirmar->hide();
	}
	
	this->viewEventWindow.labelNomeEvento->setText(event->getName().c_str());
	this->viewEventWindow.labelDataHora->setText(event->getDate().c_str());
	this->viewEventWindow.labelLocal->setText(event->getLocal().c_str());
	this->viewEventWindow.textBrowserDescricao->setPlainText(event->getDescription().c_str());
	this->viewEventWindow.labelPreco->setText(event->getPrice().c_str());
	if(event->getFood())
		this->viewEventWindow.checkBoxComidaSim->setCheckState(Qt::Checked);
	else
		this->viewEventWindow.checkBoxComidaNao->setCheckState(Qt::Checked);
	if(event->getDrink())
		this->viewEventWindow.checkBoxBebidaSim->setCheckState(Qt::Checked);
	else
		this->viewEventWindow.checkBoxBebidaNao->setCheckState(Qt::Checked);
	
	this->viewEventWindow.listWidgetConfirmadas->addItem("Everton");
	this->viewEventWindow.listWidgetNaoConfirmadas->addItem("Bruno");
	this->viewEventWindow.listWidgetNaoConfirmadas->addItem("Tavano");
}

ViewEventHandler::~ViewEventHandler(){
}

void ViewEventHandler::closeWindow(){
	mother->close();
}

void ViewEventHandler::confirmEvent(){
}

void ViewEventHandler::goToEdit(){
	EventEditHandler *eventEdit = new EventEditHandler(mother,event);
}

void ViewEventHandler::back(){
	MainPageHandler *main = new MainPageHandler(mother);
}


#include "ViewEventHandler.moc"
