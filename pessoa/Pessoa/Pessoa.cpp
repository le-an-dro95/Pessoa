#include "Pessoa.h"

#include <iostream>
using std::cout;

Pessoa::crescer()
{
    altura=0.0;
}

Pessoa::envelhecer()
{
    idade=0;
}

Pessoa::almentarFelicidade()
{
    niveldefelicidade=0;
}
void Pessoa::crescer(){
    cout << "Altura: " <<altura<< '\n';
}



