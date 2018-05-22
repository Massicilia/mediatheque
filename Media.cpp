//
// Created by massicilia on 17/05/18.
//
#include <string>
#include "Media.h"

using namespace std;

Media::Media(string code,string etat, string titre, string genreprincipal, string genresecondaire)
{
    code= getCode();
    etat=_etat;
    titre=_titre;
    genreprincipal=_genreprincipal;
    genresecondaire=_genresecondaire;
}
Media::Media(const Media&){}


string Media::getCode()
{
    return _titre;
}
string Media::getEtat()
{
    return _etat;
}
string Media::getTitre()
{
    return _titre;
}
string Media::getGenreprincipal()
{
    return _genreprincipal;
}
string Media::getGenresecondaire()
{
    return _genresecondaire;
}
