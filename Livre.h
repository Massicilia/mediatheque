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
