#ifndef MESSAGEHANDLER_HPP
#define MESSAGEHANDLER_HPP

#include <QMainWindow>
#include <QMessageBox>
#include "MessageWindow.hpp"
#include "MainPageHandler.hpp"

class MessageHandler : public QObject{
private:
	Q_OBJECT
	Ui_MessageWindow messageWindow;
	QMainWindow *mother;
	
public:
	MessageHandler(QMainWindow *mother);
	virtual ~MessageHandler();

public slots:
	void closeWindow();
	void send();
	void back();
};

#endif
