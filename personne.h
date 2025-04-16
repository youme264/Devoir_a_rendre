#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>
using namespace std;

class Personne {
private:
    string nom;
    string prenom;
    int age;

public:
    Personne();
    Personne(string n, string p, int a);

    void se_presenter();
    void affiche_info();

    // Getters
    string getNom();
    string getPrenom();
    int getAge();

    // Setters
    void setNom(string n);
    void setPrenom(string p);
    void setAge(int a);
};

#endif
