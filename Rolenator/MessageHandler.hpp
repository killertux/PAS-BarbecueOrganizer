#ifndef MESSAGEHANDLER_HPP
#define MESSAGEHANDLER_HPP

#include <QMainWindow>
#include <QMessageBox>
#include "MessageWindow.hpp"
#include "MainPageHandler.hpp"
#include "User.hpp"

class MessageHandler : public QObject{
private:
	Q_OBJECT
	Ui_MessageWindow messageWindow;
	QMainWindow *mother;
	User *userFrom;
	User *userTo;
	
public:
	MessageHandler(QMainWindow *mother,User *userFrom, User *userTo);
	virtual ~MessageHandler();

public slots:
	void closeWindow();
	void send();
	void back();
};

#endif
