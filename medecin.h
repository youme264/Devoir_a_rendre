#ifndef MEDECIN_H
#define MEDECIN_H

#include "Personne.h"

class Medecin : public Personne {
private:
    string specialite;
    double salaire;

public:
    Medecin();
    Medecin(string n, string p, int a, string s, double sal);

    void affiche_info();

    // Getters
    string getSpecialite();
    double getSalaire();

    // Setters
    void setSpecialite(string s);
    void setSalaire(double sal);
};

#endif
