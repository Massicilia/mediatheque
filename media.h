//
// Created by massicilia on 17/05/18.
//
#include <string>
#ifndef MEDIATHEQUE_MEDIA_H
#define MEDIATHEQUE_MEDIA_H


using namespace std;

class Media {

public:
    Media(int id, string etat="", string titre="", string genreprincipal="", string genresecondaire="");
    Media();
    int getID(void);
    string getEtat(void);
    string getTitre(void);
    string getGenreprincipal(void);
    string getGenresecondaire(void);

    void getID(string _id);
    void getEtat(string _etat);
    void getTitre(string _titre);
    void getGenreprincipal(string _genreprincipal);
    void getGenresecondaire(string _genresecondaire);

protected:

    string _id;
    string _etat;
    string _titre;
    string _genreprincipal;
    string _genresecondaire;
};


#endif //MEDIATHEQUE_MEDIA_H
