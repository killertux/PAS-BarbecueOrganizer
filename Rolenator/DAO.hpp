#ifndef DAO_HPP
#define DAO_HPP

#include <QSqlDatabase>
#include <QSqlQuery>

class DAO {
private:
	QSqlDatabase *connection;
protected:
	void update(QString query);
	QSqlQuery retrieve(QString query);
public:
	DAO(QSqlDatabase *connection);
	~DAO();
};

#endif
