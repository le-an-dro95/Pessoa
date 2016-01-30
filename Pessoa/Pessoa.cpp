#include "Pessoa.h"
#include <iostream>

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

