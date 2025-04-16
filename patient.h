#ifndef PATIENT_H
#define PATIENT_H

#include "Personne.h"

class Patient : public Personne {
private:
    string maladie;
    int num_chambre;

public:
    Patient();
    Patient(string n, string p, int a, string m, int num);

    void affiche_info();

    // Getters
    string getMaladie();
    int getNumeroChambre();

    // Setters
    void setMaladie(string m);
    void setNumeroChambre(int num);
};

#endif
