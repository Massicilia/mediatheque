#include "Livre.h"
#include <string>

using namespace std;

Livre::Livre(string _auteur, string _editeur, int _nbrPages)
{
    this->auteur=_auteur;
    this->editeur=_editeur;
    this->nbrPages=_nbrPages;
}
Livre::Livre(){}


string Livre::getAuteur()
{
    return this->auteur;
}
string Livre::getEditeur()
{
    return this->editeur;
}
int Livre::getNbrPages()
{
    return this->nbrPages;
}


void Livre::setAuteur(string _auteur){
    this->auteur=_auteur;
}

void Livre::setEditeur(string _editeur){
    this->editeur=_editeur;
}

void Livre::setNbrPages(int _nbrPages){
    this->nbrPages=_nbrPages;
}
