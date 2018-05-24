<<<<<<< HEAD
//#ifndef LIVRE_H
//#define LIVRE_H
////#include <Media.h>


//using namespace std;
//class Livre
//        //: public Media
//{
//public:
//    Livre(string auteur="", string editeur="", int nbrPages=0);
//    Livre();
//    string getAuteur();
//    string getEditeur();
//    int getNbrPages();

//    setAuteur(string _auteur);
//    setEditeur(string _editeur);
//    setNbrPages(int _nbrPages);
//protected:

//    string _auteur;
//    string _editeur;
//    int _nbrPages;
//};
//#endif // LIVRE_H
=======
#ifndef LIVRE_H
#define LIVRE_H
#include <elementmedia.h>


using namespace std;
class Livre : public ElementMedia
{
public:
    Livre(string _auteur, string _editeur, int _nbrPages);
    Livre();
    string getAuteur(void);
    string getEditeur(void);
    int getNbrPages(void);

    void setAuteur(string _auteur);
    void setEditeur(string _editeur);
    void setNbrPages(int _nbrPages);
protected:

    string auteur;
    string editeur;
    int nbrPages;
};
#endif // LIVRE_H
>>>>>>> 6dbe5370599c47ecd026acc17ecb3bfa51009012
