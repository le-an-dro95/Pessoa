#include <iostream>
#include "Pessoa.h"
#include <string>
const int MAX=10;

using std::cout;

int main()
{   
    string resp2, nome, genero;
    int idade;
    Pessoa gente[MAX];
    int i=0;
    do{
        string resp;    
        do{
            //system("cls");            
            i+=1;
            cout<<"Digite o Nome: ";
            cin>>nome;
            gente[i].setNome(nome);
            cout<<"Digite a Idade: ";
            cin>>idade;
            gente[i].setIdade(idade);
            cout<<"Digite o Genero: ";
            cin>>genero;
            gente[i].setGenero(genero);
            cout<<"Novo? s-Sim, n-Nao\n";
            cin>>resp;
        } while(resp=="s");
    int n=i;
    
    gente[i].pesquisarDados(n, gente);
   // system("cls");
    cout<<"\nAdicionar nova pessoa? s-sim, n-nao\n";
    cin>>resp2;
    
    } while(resp2 == "s");
}   
