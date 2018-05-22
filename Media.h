//
// Created by massicilia on 17/05/18.
//
#include <string>
#ifndef MEDIATHEQUE_MEDIA_H
#define MEDIATHEQUE_MEDIA_H


using namespace std;

class Media {

public:
    Media(string code="", string etat="", string titre="", string genreprincipal="", string genresecondaire="");
    Media(const Media&);
    string getCode(void);
    string getEtat(void);
    string getTitre(void);
    string getGenreprincipal(void);
    string getGenresecondaire(void);

protected:

    string _code;
    string _etat;
    string _titre;
    string _genreprincipal;
    string _genresecondaire;
};


#endif //MEDIATHEQUE_MEDIA_H
