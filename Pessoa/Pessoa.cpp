#include "Pessoa.h"
#include <iostream>
#include <string>

using namespace std;

Pessoa::Pessoa()
{
}

Pessoa::~Pessoa()
{
}

void Pessoa::adcNome()
{
    cout<<"Digite Nome: ";
    cin>>nome;
}

void Pessoa::adcIdade()
{
    cout<<"Digite Idade: ";
    cin>>idade;
}

void Pessoa::adcGenero()
{
    cout<<"Digite o Genero: ";
    cin>>genero;    
}

void Pessoa::infNome()
{
    cout<<"Nome: "<<nome<<"\n";  
}
void Pessoa::infIdade()
{
    cout<<"Idade: "<<idade<<"\n";      
}
void Pessoa::infGenero()
{
    cout<<"Genero: "<<genero<<"\n";
}

void Pessoa::listaNomes(int n, Pessoa *gente){
cout<<"Lista de Nomes\n\n";
    int i;
    for(i=1;i<=n;i++){
        cout<<" "<<i<<"-";
        gente[i].infNome();
    }
}

void Pessoa::pesquisarDados(int n, Pessoa *gente){
    string resp;
    do
    {
        system("cls");
        int i;
        gente[i].listaNomes(n, gente); 
        cout<<"\nDigite o numero da pessoa que deseja visualizar os dados: ";
    
        int pesq;
        cin>>pesq;
        i=0;
        if(pesq<1 || pesq>n) resp="s";
        else{
            while (pesq != i)
            {
                i+=1;
            }
            system("cls");
            cout<<"Dados: \n";
            gente[i].infNome();
            gente[i].infIdade();
            gente[i].infGenero();
          
            cout<<"\nPesquisar novamente? s-sim, n-nao\n";
            cin>>resp;  
        }
    } while (resp == "s");
}