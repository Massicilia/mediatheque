#ifndef DVD_H
#define DVD_H
#include <elementmedia.h>

using namespace std;
class DVD : public ElementMedia
{
public:
     DVD(string _realisateur, string _studio, string _casting, int _nbrMin);
     DVD();
     string getRealisateur(void);
     string getStudio(void);
     string getCasting(void);
     int getNbrMin(void);

     void setRealisateur(string _realisateur);
     void setStudio(string _studio);
     void setCasting(string _casting);
     void setNbrMin(int _nbrMin);
protected:

    string realisateur;
    string studio;
    string casting;
    int nbrMin;
};

#endif // DVD_H
