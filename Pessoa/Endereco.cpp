#include "Endereco.h"
#include <string>
#include <iostream>

using namespace std;

Endereco::Endereco()
{
}
Endereco::~Endereco()
{
}
void Endereco::setEndereco(string rua, int n, string bairro, string cidade, string estado)
{
    this->rua = rua;
    this->n = n;
    this->bairro = bairro;
    this->cidade = cidade;
    this->estado = estado;
}
void Endereco::getEndereco()
{
    cout<<"\nEndereco: \n";
    cout<<"Rua: "<<rua<<" n: "<<n<<"\n";
    cout<<"Bairro: "<<bairro<<"\n";
    cout<<"Cidade: "<<cidade<<"\n";
    cout<<"Estado: "<<estado<<"\n";
}
