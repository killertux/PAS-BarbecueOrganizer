#ifndef MESSAGEHANDLER_HPP
#define MESSAGEHANDLER_HPP

#include <QMainWindow>
#include <QMessageBox>
#include <QTimer>
#include "MessageWindow.hpp"
#include "MainPageHandler.hpp"
#include "User.hpp"
#include "DAORegistry.hpp"

class MessageHandler : public QObject{
private:
	Q_OBJECT
	Ui_MessageWindow messageWindow;
	QMainWindow *mother;
	User *userFrom;
	User *userTo;
	QTimer *timer;
	
public:
	MessageHandler(QMainWindow *mother,User *userFrom, User *userTo);
	virtual ~MessageHandler();

public slots:
	void closeWindow();
	void send();
	void back();
	void update();
};

#endif
