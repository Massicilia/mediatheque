#ifndef ARTISTE_H_INCLUDED
#define ARTISTE_H_INCLUDED
#include <string>

using namespace std;

class Artiste{
    public:
        Artiste();
        Artiste(int _id, string _nom, string _prenom, string _dateNaissance, string _nation, int _status, int _type);

        int getID();
        string getNom();
        string getPrenom();
        string getDateNaissance();
        string * getListe();
        string getNation();
        int getStatus();
        int getType();

        void setID(int _id);
        void setNom(string _nom);
        void setPrenom(string _prenom);
        void setDateNaissance(string _dateNaissance);
        void setNation(string _nation);
        void setStatus(int _status);
        void setType(int _type);
        void toString();

    private :
        int id;
        string nom;
        string prenom;
        string nation;
        string dateNaissance;
        int status;
        int type;
};


#endif // ARTISTE_H_INCLUDED
