#ifndef LOGINHANDLER_HPP
#define LOGINHANDLER_HPP

#include <QMainWindow>
#include <QMessageBox>
#include "LoginWindow.hpp"
#include "MainPageHandler.hpp"

class LoginHandler : public QObject{
private:
	Q_OBJECT
	Ui_LoginWindow loginWindow;
	QMainWindow *mother;	
	
	void _showError(QString text);
public:
	LoginHandler(QMainWindow *mother);
	virtual ~LoginHandler();

public slots:
	void closeWindow();
	void login();
};
#endif
