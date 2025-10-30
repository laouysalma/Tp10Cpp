#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"donner la taille n du tableau"<<endl;
    cin>>n;

    int* tab=new int[n];
    for(int i=0; i<n;i++)
    {
        cout<<"donner la valeur de  l'element "<< i <<" : " <<endl;
        cin >> tab[i];
    }
     cout<<"les element du tableau sont : "<<endl;

   for (int i = 0; i < n; i++)
    {
      cout<<tab[i]<<"   ";
    }
        delete[] tab;
        return 0;


}