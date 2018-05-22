#include "CD.h"
#include <string>

using namespace std;



    CD::CD(string artistePrincipal, string studio, int nbrMin)
    {
        artistePrincipal=_artistePrincipal;
        studio=_studio;
        nbrMin=_nbrMin;
    }
    CD::CD(const CD&){}


    string CD::getArtistePrincipal()
    {
        return _artistePrincipal;
    }

    string CD::getStudio()
    {
        return _studio;
    }

    int CD::getNbrMin()
    {
        return _nbrMin;
    }
