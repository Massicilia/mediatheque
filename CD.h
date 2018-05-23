//#ifndef dbCatalogue_H
#ifndef CD_H
#define CD_H
#include <Media.h>

using namespace std;
class CD : public Media
{
public:

     CD(string artistePrincipal="", string studio="", int nbrMin=0);
     CD(const CD&);
     string getArtistePrincipal();
     string getStudio();
     int getNbrMin();
protected:

    string _artistePrincipal;
    string _studio;
    int _nbrMin;
};

#endif // CD_H
