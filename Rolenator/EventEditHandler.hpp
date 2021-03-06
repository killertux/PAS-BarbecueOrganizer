#ifndef EVENTEDITHANDLER_HPP
#define EVENTEDITHANDLER_HPP

#include <QMainWindow>
#include <QMessageBox>
#include <QVariant>
#include "Event.hpp"
#include "DAORegistry.hpp"
#include "EventEditWindow.hpp"
#include "ViewEventHandler.hpp"
#include "MainPageHandler.hpp"
#include "User.hpp"

class EventEditHandler : public QObject{
private:
	Q_OBJECT
	Ui_EventEditWindow eventEditWindow;
	QMainWindow *mother;
	Event *event;
	User *user;
	
	void getPossibleInvite();
	bool fromEvent;
	void _showError(QString text);
public:
	EventEditHandler(QMainWindow *mother, Event *event, User *user);
	virtual ~EventEditHandler();

public slots:
	void closeWindow();
	void checkBoxesYes(int state);
	void checkBoxesNo(int state);
	void invite();
	void save();
	void back();
};

#endif
