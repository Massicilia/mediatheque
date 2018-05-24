#ifndef ELEMENTMEDIA_H
#define ELEMENTMEDIA_H
#include <string>
using namespace std;
class ElementMedia
{

public:
    ElementMedia(int id, string _etat, string _titre, string _genreprincipal, string _genresecondaire);
    ElementMedia();
    int getID(void);
    string getEtat(void);
    string getTitre(void);
    string getGenreprincipal(void);
    string getGenresecondaire(void);

    void setID(int _id);
    void setEtat(string _etat);
    void setTitre(string _titre);
    void setGenreprincipal(string _genreprincipal);
    void setGenresecondaire(string _genresecondaire);

protected:

    int id;
    string etat;
    string titre;
    string genreprincipal;
    string genresecondaire;
};

#endif // ELEMENTMEDIA_H
