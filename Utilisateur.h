#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <string>

using namespace std;


class Utilisateur{
    public:
        Utilisateur();
        Utilisateur(int _id, string _nom, string _prenom, string _tel, string _addr, string _dateNaissance, int _type);
        int getID();
        string getNom();
        string getPrenom();
        string getTel();
        string getAddr();
        string getDateNaissance();
        string * getListe();
        int getType();
        void setID(int _id);
        void setNom(string _nom);
        void setPrenom(string _prenom);
        void setTel(string _tel);
        void setAddr(string _addr);
        void setDateNaissance(string _dateNaissance);
        void setType(int _type);
        void toString();

        private :
            int id;
            string nom;
            string prenom;
            string tel;
            string addr;
            string dateNaissance;
            int type;

};

#endif // UTILISATEUR_H
