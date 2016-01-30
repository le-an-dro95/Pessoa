#include <iostream>
#include "Pessoa.h"
#include <string>
const int MAX=10;

using std::cout;

int main()
{   
    string resp2;
    Pessoa gente[MAX];
    int i=0;
    do{
        string resp;    
        do{
            system("cls");            
            i+=1;
            gente[i].adcNome();
            gente[i].adcIdade();
            gente[i].adcGenero();
            cout<<"Novo? s-Sim, n-Nao\n";
            cin>>resp;
        } while(resp=="s");
    int n=i;
    
    gente[i].pesquisarDados(n, gente);
    system("cls");
    cout<<"\nAdicionar nova pessoa? s-sim, n-nao\n";
    cin>>resp2;
    
    } while(resp2 == "s");
}   
