<<<<<<< HEAD
//#ifndef DVD_H
//#define DVD_H
////#include <Media.h>

//using namespace std;
//class DVD
//        //: public Media
//{
//public:
//     DVD(string realisateur="", string studio="", string casting[]= NULL, int nbrMin=0);
//     DVD();
//     string getRealisateur();
//     string getStudio();
//     string getCasting();
//     int getNbrMin();

//     setRealisateur(string _realisateur);
//     setStudio(string _studio);
//     setCasting(string _casting);
//     setNbrMin(int _nbrMin);
//protected:

//    string _realisateur;
//    string _studio;
//    string casting[];
//    int _nbrMin;
//};
=======
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
>>>>>>> 6dbe5370599c47ecd026acc17ecb3bfa51009012

//#endif // DVD_H
