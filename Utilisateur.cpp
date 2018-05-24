#include "Utilisateur.h"
#include <iostream>
#include <string>
#include <QSqlQuery>
#include <QDebug>
#include <QString>

using namespace std;

Utilisateur::Utilisateur(){}
Utilisateur::Utilisateur(QString _id){
    this->id = _id;
    QSqlQuery query;
    bool ok = query.exec("select * from Utilisateur where idUser = " + _id);
    if(!ok){
        qDebug()<<"Select failed/n";
    }
while(query.next()){
    this->nom = query.value(1).toString();
    this->prenom = query.value(2).toString();
    this->tel = query.value(3).toString();
    this->addr = query.value(4).toString();
    this->dateNaissance = query.value(5).toString();
    this->type = query.value(6).toString();
}
}
Utilisateur::Utilisateur(QString _id, QString _nom, QString _prenom, QString _tel, QString _addr, QString _dateNaissance, QString _type){
    this->id = _id;
    this->nom = _nom;
    this->prenom = _prenom;
    this->tel = _tel;
    this->addr = _addr;
    this->dateNaissance = _dateNaissance;
    this->type = _type;
}

QString Utilisateur::getID(){
    return this->id;
}
QString Utilisateur::getNom(){
    return this->nom;
}
QString Utilisateur::getPrenom(){
    return this->prenom;
}
QString Utilisateur::getTel(){
    return this->tel;
}
QString Utilisateur::getAddr(){
    return this->addr;
}
QString Utilisateur::getDateNaissance(){
    return this->dateNaissance;
}
QString * Utilisateur::getListe(){
    return NULL;
}
QString Utilisateur::getType(){
    return this->type;
}

void Utilisateur::setID(QString _id){
    this->id = _id;
}
void Utilisateur::setNom(QString _nom){
    this->nom = _nom;
}
void Utilisateur::setPrenom(QString _prenom){
    this->prenom = _prenom;
}
void Utilisateur::setTel(QString _tel){
    this->tel = _tel;
}
void Utilisateur::setAddr(QString _addr){
    this->addr = _addr;
}
void Utilisateur::setDateNaissance(QString _dateNaissance){
    this->dateNaissance = _dateNaissance;
}
void Utilisateur::setType(QString _type){
    this->type = _type;
}
void Utilisateur::toString(){
    qDebug() << "ID: " << this->id << ", Nom: " << this->nom << ", Prenom: " << this->prenom << ", Tel: " << this->tel << ", Addresse: " << this->addr << ", Date de Naissance: " << this->dateNaissance << ", Type: " << this->type << endl;
}
