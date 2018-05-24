#include "DVD.h"
#include <string>

using namespace std;



    DVD::DVD(string _realisateur, string _studio, string _casting[], int _nbrMin)
    {
        this->realisateur=_realisateur;
        this->studio=_studio;
        this->casting[]= _casting[];
        this->nbrMin=_nbrMin;
    }
    DVD::DVD(const DVD&){}


    string DVD::getRealisateur()
    {
        return this->realisateur;
    }

    string DVD::getStudio()
    {
        return this->studio;
    }
    /*string DVD::getCasting()
    {
       return this->casting;
    }*/

    int DVD::getNbrMin()
    {
        return this->nbrMin;
    }


    void DVD::setRealisateur(string _realisateur){
        this->realisateur=_realisateur;
    }

    void DVD::setStudio(string _studio){
        this->studio=_studio;
    }

    /*void DVD::setCasting(string _casting){
        this->casting=_casting;
    }*/

    void DVD::setNbrMin(int _nbrMin){
        this->nbrMin=_nbrMin;
    }
