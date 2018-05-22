#ifndef LIVRE_H
#define LIVRE_H
#include Media.h


using namespace std;
class Livre : public Media
{
public:
    Livre(string auteur="", string editeur="", string nbrPages="");
    Livre(const Livre&);
    string getAuteur();
    string getEditeur();
    int getNbrPages();
protected:

    string _auteur;
    string _editeur;
    int _nbrPages;
};
#endif // LIVRE_H
