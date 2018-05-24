<<<<<<< HEAD
////#ifndef dbCatalogue_H
//#ifndef CD_H
//#define CD_H
////#include <Media.h>

//using namespace std;
//class CD
//        //: public Media
//{
//public:

//     CD(string artistePrincipal="", string studio="", int nbrMin=0);
//     CD();
//     string getArtistePrincipal();
//     string getStudio();
//     int getNbrMin();

//     setArtistePrincipal(string _artistePrincipal);
//     setStudio(string _studio);
//     setNbrMin(int _nbrMin);
=======
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
>>>>>>> 6dbe5370599c47ecd026acc17ecb3bfa51009012


//protected:

<<<<<<< HEAD
//    string _artistePrincipal;
//    string _studio;
//    int _nbrMin;
//};
=======
    string artistePrincipal;
    string studio;
    int nbrMin;
};
>>>>>>> 6dbe5370599c47ecd026acc17ecb3bfa51009012

//#endif // CD_H
