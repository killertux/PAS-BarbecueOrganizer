#ifndef MAINPAGEHANDLER_HPP
#define MAINPAGEHANDLER_HPP

#include <QMainWindow>
#include <QMessageBox>
#include "MainPageWindow.hpp"
#include "InviteHandler.hpp"
#include "Event.hpp"
#include "ViewEventHandler.hpp"
#include "EventEditHandler.hpp"
#include "MessageHandler.hpp"

class MainPageHandler : public QObject{
private:
	Q_OBJECT
	Ui_MainPageWindow mainPageWindow;
	QMainWindow *mother;
	Event **events;
	
public:
	MainPageHandler(QMainWindow *mother);
	virtual ~MainPageHandler();

public slots:
	void closeWindow();
	void goToInvite();
	void goToViewEvent();
	void goToEditEvent();
	void goToMessage();
};

#endif

