#ifndef Rolenator_H
#define Rolenator_H

#include <QMainWindow>
#include <QTextCodec>
#include <iostream>
#include "LoginHandler.hpp"
#include "RegisterHandler.hpp"
#include "EventEditHandler.hpp"
#include "InviteHandler.hpp"
#include "ViewEventHandler.hpp"
#include "MessageHandler.hpp"
#include <QSqlDatabase>
#include "DAORegistry.hpp"
#include "Event.hpp"

class Rolenator : public QMainWindow{
    Q_OBJECT
    LoginHandler *loginHandler;
	RegisterHandler *registerHandler;
	EventEditHandler *eventEditHandler;
	InviteHandler *inviteHandler;
	ViewEventHandler *viewEventHandler;
	MessageHandler *messageHandler;
	QSqlDatabase db;

public:
    Rolenator();
    virtual ~Rolenator();
	
	void goToEdit(Event *event);
public slots:
	void goToRegister();
	void goToLogin();
};

#endif // Rolenator_H
