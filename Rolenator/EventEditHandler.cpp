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
	
	if(event!=NULL){
		this->fromEvent =true;
		this->eventEditWindow.lineEditNomeEvento->setText(event->getName().c_str());
		this->eventEditWindow.lineEditLocal->setText(event->getLocal().c_str());
		this->eventEditWindow.textEditDescricao->setPlainText(event->getDescription().c_str());
		this->eventEditWindow.doubleSpinBoxPreco->setValue(this->eventEditWindow.doubleSpinBoxPreco->valueFromText(event->getPrice().c_str()));
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
}

void EventEditHandler::closeWindow(){
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
	//Go to the view event
	if(this->fromEvent){
		ViewEventHandler *viewEvent = new ViewEventHandler(mother, event,user);
	} else
		MainPageHandler *main = new MainPageHandler(mother,user);
}

void EventEditHandler::back(){
	if(this->fromEvent){
		ViewEventHandler *viewEvent = new ViewEventHandler(mother, event,user);
	} else
		MainPageHandler *main = new MainPageHandler(mother,user);
}


#include "EventEditHandler.moc"
