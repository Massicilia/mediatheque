#include "Utilisateur.h"
#include <iostream>
#include <string>

using namespace std;

Utilisateur::Utilisateur(){}
Utilisateur::Utilisateur(int _id, string _nom, string _prenom, string _tel, string _addr, string _dateNaissance, int _type){
    this->id = _id;
    this->nom = _nom;
    this->prenom = _prenom;
    this->tel = _tel;
    this->addr = _addr;
    this->dateNaissance = _dateNaissance;
    this->type = _type;
}

int Utilisateur::getID(){
    return this->id;
}
string Utilisateur::getNom(){
    return this->nom;
}
string Utilisateur::getPrenom(){
    return this->prenom;
}
string Utilisateur::getTel(){
    return this->tel;
}
string Utilisateur::getAddr(){
    return this->addr;
}
string Utilisateur::getDateNaissance(){
    return this->dateNaissance;
}
string * Utilisateur::getListe(){
    return NULL;
}
int Utilisateur::getType(){
    return this->type;
}

void Utilisateur::setID(int _id){
    this->id = _id;
}
void Utilisateur::setNom(string _nom){
    this->nom = _nom;
}
void Utilisateur::setPrenom(string _prenom){
    this->prenom = _prenom;
}
void Utilisateur::setTel(string _tel){
    this->tel = _tel;
}
void Utilisateur::setAddr(string _addr){
    this->addr = _addr;
}
void Utilisateur::setDateNaissance(string _dateNaissance){
    this->dateNaissance = _dateNaissance;
}
void Utilisateur::setType(int _type){
    this->type = _type;
}
void Utilisateur::toString(){
    cout << "ID: " << this->id << ", Nom: " << this->nom << ", Prenom: " << this->prenom << ", Tel: " << this->tel << ", Addresse: " << this->addr << ", Date de Naissance: " << this->dateNaissance << ", Type: " << this->type << endl;
}
