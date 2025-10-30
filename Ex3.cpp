#include<iostream>
using namespace std;

class Livre {
    public:
        string titre ;
        double prix;
        Livre(){
            titre ="inconnue";
            prix=0.0;
        }
        Livre(string t,double p):titre(t),prix(p){}
        void afficher(){
            cout<< " "<<titre<<"  "<<prix<<" dh  "<<endl;
        }
};
int main() {
  int n;
  cout<<"donner le nombre de livre que vous vouler inserer :  "<<endl;
  cin >> n;
  cin.ignore();
  Livre* tab=new Livre[n];
  for(int i=0; i<n;i++)
    {
        string t;
        double p;
        cout<<"donner le titre   de livre numero :  "<< i+1 <<"  " <<endl;
        cin.ignore();

        getline(cin, t);
        cout<<"donner le prix  de livre numero :  "<< i <<" : " <<endl;
        cin>>p;
        tab[i] = Livre(t, p);
        

    }
    cout<<"les livres que vous avez sont : "<<endl;
    cin.ignore();

    for(int i = 0; i < n; i++){
        tab[i].afficher();
    }
    delete[] tab;
    return 0;

}