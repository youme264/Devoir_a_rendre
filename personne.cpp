#include "Personne.h"
#include <iostream>
using namespace std;

Personne::Personne() {
    nom = "inconnu";
    prenom = "inconnu";
    age = 0;
}

Personne::Personne(string n, string p, int a) {
    nom = n;
    prenom = p;
    age = a;
}

void Personne::se_presenter() {
    cout << "Je suis " << nom << " " << prenom << ", j ai " << age << " ans." << endl;
}

void Personne::affiche_info() {
    cout << "Nom: " << nom << ", Prenom: " << prenom << ", Age: " << age << endl;
}

// Getters
string Personne::getNom() {
    return nom;
}

string Personne::getPrenom() {
    return prenom;
}

int Personne::getAge() {
    return age;
}

// Setters
void Personne::setNom(string n) {
    nom = n;
}

void Personne::setPrenom(string p) {
    prenom = p;
}

void Personne::setAge(int a) {
    age = a;
}
