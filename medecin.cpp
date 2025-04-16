#include "Medecin.h"
#include <iostream>
using namespace std;

Medecin::Medecin() : Personne() {
    specialite = "aucune";
    salaire = 0.0;
}

Medecin::Medecin(string n, string p, int a, string s, double sal) : Personne(n, p, a) {
    specialite = s;
    salaire = sal;
}

void Medecin::affiche_info() {
    Personne::affiche_info();
    cout << "Specialite: " << specialite << ", Salaire: " << salaire << " fr" << endl;
}

// Getters
string Medecin::getSpecialite() {
    return specialite;
}

double Medecin::getSalaire() {
    return salaire;
}

// Setters
void Medecin::setSpecialite(string s) {
    specialite = s;
}

void Medecin::setSalaire(double sal) {
    salaire = sal;
}
