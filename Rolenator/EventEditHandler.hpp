#ifndef EVENTEDITHANDLER_HPP
#define EVENTEDITHANDLER_HPP

#include <QMainWindow>
#include <QMessageBox>
#include "Event.hpp"
#include "EventEditWindow.hpp"
#include "ViewEventHandler.hpp"
#include "MainPageHandler.hpp"

class EventEditHandler : public QObject{
private:
	Q_OBJECT
	Ui_EventEditWindow eventEditWindow;
	QMainWindow *mother;
	Event *event;
	
	bool fromEvent;
	void _showError(QString text);
public:
	EventEditHandler(QMainWindow *mother, Event *event);
	virtual ~EventEditHandler();

public slots:
	void closeWindow();
	void checkBoxesYes(int state);
	void checkBoxesNo(int state);
	void save();
	void back();
};

#endif
