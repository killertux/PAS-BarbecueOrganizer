#ifndef MAINPAGEHANDLER_HPP
#define MAINPAGEHANDLER_HPP

#include <QMainWindow>
#include <QMessageBox>
#include <QVariant>

#include "MainPageWindow.hpp"
#include "InviteHandler.hpp"
#include "Event.hpp"
#include "ViewEventHandler.hpp"
#include "EventEditHandler.hpp"
#include "MessageHandler.hpp"
#include "User.hpp"
#include "DAORegistry.hpp"

class MainPageHandler : public QObject{
private:
	Q_OBJECT
	Ui_MainPageWindow mainPageWindow;
	QMainWindow *mother;
	Event **events;
	User *user;
	User **users;
	Invite **invites;
	int nInvites;
	int nUsers;
	
public:
	MainPageHandler(QMainWindow *mother, User *user);
	virtual ~MainPageHandler();

public slots:
	void closeWindow();
	void goToInvite();
	void goToViewEvent();
	void goToEditEvent();
	void goToMessage();
	void updateInvite();
	void updateEvents();
};

#endif

