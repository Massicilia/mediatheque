#include "Utilisateur.h"
#include <iostream>
#include <string>

using namespace std;

Artiste::Artiste(){}
Artiste::Artiste(int _id, string _nom, string _prenom, string _nation, string _dateNaissance, int _status, int _type){
    this->id = _id;
    this->nom = _nom;
    this->prenom = _prenom;
    this->nation = _nation;
    this->dateNaissance = _dateNaissance;
    this->status = _status;
    this->type = _type;
}

int Artiste::getID(){
    return this->id;
}
string Artiste::getNom(){
    return this->nom;
}
string Artiste::getPrenom(){
    return this->prenom;
}
string Artiste::getDateNaissance(){
    return this->dateNaissance;
}
string * Artiste::getListe(){
    return NULL;
}
string Artiste::getNation(){
    return this->nation;
}
int Artiste::getStatus(){
    return this->status;
}
int Artiste::getType(){
    return this->type;
}

void Artiste::setID(int _id){
    this->id=_id;
}
void Artiste::setNom(string _nom){
    this->nom=_nom;
}
void Artiste::setPrenom(string _prenom){
    this->prenom=_prenom;
}
void Artiste::setDateNaissance(string _dateNaissance){
    this->dateNaissance=_dateNaissance;
}
void Artiste::setNation(string _nation){
    this->nation=_nation;
}
void Artiste::setStatus(int _status){
    this->status=_status;
}
void Artiste::setType(int _type){
    this->type=_type;
}
void Artiste::toString(){
    cout << "ID: " << this->id << ", Nom: " << this->nom << ", Prenom: " << this->prenom << ", Nationnalit��: " << this->nation << ", Date de Naissance: " << this->dateNaissance << ", status: " << this->status << ", Type: " << this->type << endl;
}
