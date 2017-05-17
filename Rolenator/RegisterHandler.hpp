#ifndef REGISTERHANDLER_HPP
#define REGISTERHANDLER_HPP

#include <QMainWindow>
#include <QMessageBox>
#include "RegisterWindow.hpp"

class RegisterHandler : public QObject{
private:
	Q_OBJECT
	Ui_RegisterWindow registerWindow;
	QMainWindow *mother;	
	
	void _showError(QString text);
public:
	RegisterHandler(QMainWindow *mother);
	virtual ~RegisterHandler();

public slots:
	void closeWindow();
	void registerUser();
};
#endif

