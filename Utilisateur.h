#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <QString>
#include <QVariant>

using namespace std;


class Utilisateur{
    public:
        Utilisateur();
        Utilisateur(QString _id);
        Utilisateur(QString _id, QString _nom, QString _prenom, QString _tel, QString _addr, QString _dateNaissance, QString _type);
        QString getID();
        QString getNom();
        QString getPrenom();
        QString getTel();
        QString getAddr();
        QString getDateNaissance();
        QString * getListe();
        QString getType();
        void setID(QString _id);
        void setNom(QString _nom);
        void setPrenom(QString _prenom);
        void setTel(QString _tel);
        void setAddr(QString _addr);
        void setDateNaissance(QString _dateNaissance);
        void setType(QString _type);
        void toString();
        void addUser();
        void deleteUser();

        private :
            QString id;
            QString nom;
            QString prenom;
            QString tel;
            QString addr;
            QString dateNaissance;
            QString type;

};

#endif // UTILISATEUR_H
