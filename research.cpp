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
    ui->textBrowser->setText("Utilisateur( id: " + user.getID() + ", Nom: " + user.getNom() + ", Prénom:" + user.getPrenom() +
                             ", Tel: " + user.getTel()+", Addresse: "+
                             user.getAddr()+", date de naissance: " +
                             user.getDateNaissance() + ", type: " +
                             user.getType()+" )");
}

void research::on_pushButton_Add_clicked()
{
    Utilisateur user = Utilisateur();
    user.setNom(ui->rechercheTextEdit_nom->text());
    user.setPrenom(ui->rechercheTextEdit_prenom->text());
    user.setTel(ui->rechercheTextEdit_tel->text());
    user.setAddr(ui->rechercheTextEdit_addr->text());
    user.setDateNaissance(ui->rechercheTextEdit_date->text());
    user.setType(ui->rechercheTextEdit_type->text());

    user.addUser();
}

void research::on_pushButton_Delete_clicked()
{
    Utilisateur user = Utilisateur();
    user.setID(ui->rechercheTextEdit->text());
    user.deleteUser();
}
