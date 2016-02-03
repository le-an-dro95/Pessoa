#include "Pessoa.h"
#include <iostream>
#include <string>

using namespace std;

Pessoa::Pessoa()
{
    nome="";
    idade=0;
    genero="";
}

Pessoa::Pessoa(const string &nome, int idade, const string &genero)
{
    this->nome = nome; 
    this->idade = idade;
    this->genero = genero;   
}

Pessoa::~Pessoa()
{
}

void Pessoa::setNome(const string &nome)
{
    this->nome = nome;
  
}

void Pessoa::setIdade(int idade)
{
    this->idade = idade;
}

void Pessoa::setGenero(const string &genero)
{
    this->genero = genero;   
}

string Pessoa::getNome()
{
    return this->nome; 
}
int Pessoa::getIdade()
{
    return this->idade;
}
string Pessoa::getGenero()
{
    return this->genero;
}

void Pessoa::listaNomes(int n, Pessoa *gente){
cout<<"Lista de Nomes\n\n";
    int i;
    for(i=1;i<=n;i++){
        cout<<" "<<i<<"- "<<gente[i].getNome()<<"\n";
    }
}

void Pessoa::pesquisarDados(int n, Pessoa *gente){
    string resp;
    do
    {
      //  system("cls");
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
          //  system("cls");
            cout<<"Dados: \n";
            cout<<"Nome: "<<gente[i].getNome();
            cout<<"\nIdade: "<<gente[i].getIdade();
            cout<<"\nGenero: "<<gente[i].getGenero();
          
            cout<<"\nPesquisar novamente? s-sim, n-nao\n";
            cin>>resp;  
        }
    } while (resp == "s");
}