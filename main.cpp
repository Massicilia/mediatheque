//#include "research.h"
//#include <QApplication>
//#include <QDialog>
//#include <QSqlQuery>
//#include <QSqlQueryModel>
//#include <QSqlError>
//#include <QDebug>
//#include <QMessageBox>
//#include <QTableView>
//#include <QtSql/QSqlDatabase>

//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);
//    research w;
//    w.show();

//    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
//    db.setHostName("127.0.0.1");
//    db.setDatabaseName("test");
//    db.setUserName("root");
//    db.setPassword("");
//    bool ok = db.open();


//    SqlQueryModel *model = new QSqlQueryModel;
//    model->setQuery("SELECT name, salary FROM employee");
//    model->setHeaderData(0, Qt::Horizontal, tr("Name"));
//    model->setHeaderData(1, Qt::Horizontal, tr("Salary"));
//    QTableView *view = new QTableView;
//    view->setModel(model);
//    view->show();


//    return a.exec();

//}

#include <QtCore/QCoreApplication>
#include <QtSql>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
//    db.setDatabaseName("/tmp/my.db");
//    db.setHostName("127.0.0.1");
//    db.setDatabaseName("test");
//    db.setUserName("root");
//    db.setPassword("");

    if (!db.open())
    {
        qDebug()<<"open database failed ---"<<db.lastError().text()<<"/n";
        return -1;
    }
    QSqlQuery query;
    bool ok = query.exec("CREATE TABLE IF NOT EXISTS  people (id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                       "name VARCHAR(20) NOT NULL,"
                                       "age INTEGER NULL)");
    if (ok)
    {
        qDebug()<<"ceate table partition success/n";
    }
    else
    {
        qDebug()<<"ceate table partition failed/n";
    }
    for (int i = 0; i< 3; ++i)
    {
        query.prepare("INSERT INTO people (id, name, age) VALUES (:id, :name, :age)");
        query.bindValue(":name", QString("smith_%1").arg(i+1));
        query.bindValue(":age", 20+i*5);
        query.exec();
    }

//    QSqlQuery query;
    query.exec("SELECT id, name, age FROM people");
    while (query.next())
    {
        qDebug()<<"people("<<query.value(0).toInt()<<")  name:"<<query.value(1).toString()<<"  age:"<<query.value(2).toInt();
    }
    return a.exec();
}

