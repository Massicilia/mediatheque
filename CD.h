//#ifndef dbCatalogue_H
#ifndef CD_H
#define CD_H
#include <elementmedia.h>

using namespace std;
class CD : public ElementMedia
{
public:

     CD(string _artistePrincipal, string _studio, int _nbrMin);
     CD();
     string getArtistePrincipal(void);
     string getStudio(void);
     int getNbrMin(void);

     void setArtistePrincipal(string _artistePrincipal);
     void setStudio(string _studio);
     void setNbrMin(int _nbrMin);


protected:

    string artistePrincipal;
    string studio;
    int nbrMin;
};

#endif // CD_H
