#include "Patient.h"
#include <iostream>
using namespace std;

Patient::Patient() : Personne() {
    maladie = "inconnue";
    num_chambre = 0;
}

Patient::Patient(string n, string p, int a, string m, int num) : Personne(n, p, a) {
    maladie = m;
    num_chambre = num;
}

void Patient::affiche_info() {
    Personne::affiche_info();
    cout << "Maladie: " << maladie << ", Chambre: " << num_chambre << endl;
}

// Getters
string Patient::getMaladie() {
    return maladie;
}

int Patient::getNumeroChambre() {
    return num_chambre;
}

// Setters
void Patient::setMaladie(string m) {
    maladie = m;
}

void Patient::setNumeroChambre(int num) {
    num_chambre = num;
}
