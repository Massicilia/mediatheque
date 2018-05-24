//
// Created by massicilia on 17/05/18.
//
#include "media.h"
#include <string>

using namespace std;

Media::Media(int _id, string _etat, string _titre, string _genreprincipal, string _genresecondaire)
{
    this->id= getID();
    this->etat=_etat;
    this->titre=_titre;
    this->genreprincipal=_genreprincipal;
    this->genresecondaire=_genresecondaire;
}
Media::Media(){}

int Media::getID()
{
    return this->id;
}
string Media::getEtat()
{
    return this->etat;
}
string Media::getTitre()
{
    return this->titre;
}
string Media::getGenreprincipal()
{
    return this->genreprincipal;
}
string Media::getGenresecondaire()
{
    return this->genresecondaire;
}


void Media::setID(int _id){
    this->id=_id;
}

void Media::setEtat(string _etat){
    this->etat=_etat;
}

void Media::setTitre(string _titre){
    this->titre=_titre;
}

void Media::setGenreprincipal(string _genreprincipal){
    this->genreprincipal=_genreprincipal;
}

void Media::setGenresecondaire(string _genresecondaire){
    this->genresecondaire=_genresecondaire;
}
