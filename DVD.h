#ifndef CD_H
#define CD_H
#include Media.h

using namespace std;
class CD : public Media
{


public:

     DVD(string realisateur="", string studio="", string casting[]= [], int nbrMin="");
     DVD(const DVD&);
     string getRealisateur();
     string getStudio();
     string getCasting();
     int getNbrMin();
protected:

    string _realisateur;
    string _studio;
    string casting[];
    int _nbrMin;
};
