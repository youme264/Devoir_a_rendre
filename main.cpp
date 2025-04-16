#include <iostream>
#include "Medecin.h"
#include "Patient.h"
using namespace std;

int main() {

    Medecin m("Lam", "Youme", 20, "Gynecologue", 98764545752);
    m.se_presenter();
    m.affiche_info();


    m.setSpecialite("Generaliste");
    m.setSalaire(98765345768);
    cout << "\nLes nouvelles informations du medecin:" << endl;
    cout << "Specialite: " << m.getSpecialite() << ", Salaire: " << m.getSalaire() << " fr" << endl;

    cout << "\n--------------------------------\n";


    Patient p("Toure", "Ahmdy", 30, "Maux de Tete", 105);
    p.se_presenter();
    p.affiche_info();


    p.setMaladie("Rhume");
    p.setNumeroChambre(101);
    cout << "\nLes niuvelles informations du patient:" << endl;
    cout << "Maladie: " << p.getMaladie() << ", Chambre: " << p.getNumeroChambre() << endl;

    return 0;
}
