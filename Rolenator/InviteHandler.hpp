#ifndef INVITEHANDLER_HPP
#define INVITEHANDLER_HPP

#include <QMainWindow>
#include <QMessageBox>
#include "InviteWindow.hpp"

class InviteHandler : public QObject{
private:
	Q_OBJECT
	Ui_InviteWindow inviteWindow;
	QMainWindow *mother;
	QString events[2];
	int pointer,n;
public:
	InviteHandler(QMainWindow *mother);
	virtual ~InviteHandler();

public slots:
	void accept();
	void decline();
};

#endif

