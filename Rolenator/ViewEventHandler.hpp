#ifndef VIEWEVENTHANDLER_HPP
#define VIEWEVENTHANDLER_HPP

#include <QMainWindow>
#include <QMessageBox>
#include "ViewEventWindow.hpp"
#include "EventEditHandler.hpp"
#include "Event.hpp"
#include "MainPageHandler.hpp"
#include "User.hpp"
#include "DAORegistry.hpp"

class ViewEventHandler : public QObject{
private:
	Q_OBJECT
	Ui_ViewEventWindow viewEventWindow;
	QMainWindow *mother;
	Event *event;
	User *user;
	
	void processInvited();
	
public:
	ViewEventHandler(QMainWindow *mother, Event *event, User *user);
	virtual ~ViewEventHandler();

public slots:
	void closeWindow();
	void confirmEvent();
	void goToEdit();
	void back();
};
#endif


