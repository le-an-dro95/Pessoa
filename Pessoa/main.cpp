#include <iostream>
using std::cout;

#include "Pessoa.h"

int main()
{
    Pessoa gente;
        
    gente.adcNome();
    gente.adcIdade();
    gente.adcGenero();
    system("cls");
    cout<<"Dados: \n\n";
    gente.infNome();
    gente.infIdade();
    gente.infGenero();
    return 0;
}
