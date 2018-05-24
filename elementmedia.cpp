#include "elementmedia.h"
#include <string>

using namespace std;

ElementMedia::ElementMedia(int _id, string _etat, string _titre, string _genreprincipal, string _genresecondaire)
{
    this->id= _id;
    this->etat=_etat;
    this->titre=_titre;
    this->genreprincipal=_genreprincipal;
    this->genresecondaire=_genresecondaire;
}
ElementMedia::ElementMedia(){}

int ElementMedia::getID()
{
    return this->id;
}
string ElementMedia::getEtat()
{
    return this->etat;
}
string ElementMedia::getTitre()
{
    return this->titre;
}
string ElementMedia::getGenreprincipal()
{
    return this->genreprincipal;
}
string ElementMedia::getGenresecondaire()
{
    return this->genresecondaire;
}


void ElementMedia::setID(int _id){
    this->id=_id;
}

void ElementMedia::setEtat(string _etat){
    this->etat=_etat;
}

void ElementMedia::setTitre(string _titre){
    this->titre=_titre;
}

void ElementMedia::setGenreprincipal(string _genreprincipal){
    this->genreprincipal=_genreprincipal;
}

void ElementMedia::setGenresecondaire(string _genresecondaire){
    this->genresecondaire=_genresecondaire;
}

