#ifndef DVD_H
#define DVD_H
#include <Media.h>

using namespace std;
class DVD : public Media
{
public:
     DVD(string realisateur="", string studio="", string casting[]= NULL, int nbrMin=0);
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

#endif // DVD_H
