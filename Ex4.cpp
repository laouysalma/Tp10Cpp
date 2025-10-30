#include <iostream>
using namespace std;

class Contact {
private:
    string nom;
    string telephone;
    string email;

public:
    Contact(string n, string t, string e) : nom(n), telephone(t), email(e) {}

    string getNom() { return nom; }

    void afficher() {
        cout << "Nom : " << nom<< " Téléphone : " << telephone<< "  Email : " << email << endl;
    }
};

int main() {
    int n;
    cout << "Donner le nombre de contacts que vous voulez ajouter : ";
    cin >> n;
    cin.ignore(); 

    Contact** carnet = new Contact*[n];

    for (int i = 0; i < n; i++) {
        string nom, tel, mail;

        cout << "Entrer le nom du contact " << i + 1 << " : ";
        getline(cin, nom);

        cout << "Entrer le numero de téléphone du contact " << i + 1 << " : ";
        getline(cin, tel);

        cout << "Entrer l'email du contact " << i + 1 << " : ";
        getline(cin, mail);

        carnet[i] = new Contact(nom, tel, mail);
    }

    cout << " Liste des contacts : " << endl;
    for (int i = 0; i < n; i++) {
        carnet[i]->afficher();
    }

    string nomSupp;
    cout << "saisir le nom du contact que tu veux  supprimer : ";
    getline(cin, nomSupp);

    bool trouve = false;
    for (int i = 0; i < n; i++) {
        if (carnet[i] != nullptr && carnet[i]->getNom() == nomSupp) {
            delete carnet[i];
            carnet[i] = nullptr;
            trouve = true;
            cout << " Contact " << nomSupp << "est  supprimé ";
            break;
        }
    }
    if (!trouve)
        cout << " pas de  contactavec ce nom " << nomSupp <<endl;

    cout << "les contacts restants : " << endl;
    for (int i = 0; i < n; i++) {
        if (carnet[i] != nullptr)
            carnet[i]->afficher();
    }

    for (int i = 0; i < n; i++) {
        delete carnet[i]; 
    }
    delete[] carnet; 

    return 0;
}
