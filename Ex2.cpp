#include<iostream>
using namespace std;

class Personne{
    public:
    string nom;
    int age;
    Personne(string n,int a):nom(n),age(a){}
    void affiche(){
        cout<<"Bonjour "<<nom<<" votre age est :  "<<age<<endl;
    }

};
int main(){
Personne* etudiante =new Personne("salma",21);
Personne* employe=new Personne("fati",21);
etudiante->affiche();
employe->affiche();
delete etudiante;
delete employe;

}