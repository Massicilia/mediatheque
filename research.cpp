#include "research.h"
#include "ui_research.h"
#include <QtSql/QSqlDatabase>
#include <QtCore/QCoreApplication>
#include <QDebug>
#include <QSqlQuery>
#include <Utilisateur.h>

research::research(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::research)
{
    ui->setupUi(this);

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/ESGI4JProjets/mediatheque/mediatheque.db");

    if (!db.open())
    {
        qDebug()<<"open database failed ---"<<db.lastError().text()<<"/n";
        QSqlQuery query;

    }
}

research::~research()
{
    delete ui;
}


void research::on_pushButton_selectUser_clicked()
{
    QString idUser = ui->rechercheTextEdit->text();
    Utilisateur user = Utilisateur(idUser);
    ui->textBrowser->setText("people(" + user.getNom() + ")  name:" + user.getPrenom() + "  age:" + user.getType());
    qDebug() <<"people("<<user.getNom()<<")  name:"<<user.getPrenom()<<"  age:"<<user.getType();
//    QSqlQuery query;
//    bool ok = query.exec("select * from Utilisateur");
//    if(!ok){
//        qDebug()<<"Select failed/n";
//    }
//    while (query.next())
//    {
//        qDebug()<<"people("<<query.value(0).toInt()<<")  name:"<<query.value(1).toString()<<"  age:"<<query.value(2).toInt();
//    }
}
