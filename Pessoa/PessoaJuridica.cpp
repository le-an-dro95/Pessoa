#include "PessoaJuridica.h"
#include "Pessoa.h"
#include <iostream>
#include <string>

using namespace std;

PessoaJuridica::PessoaJuridica()
{
    this->cnpj=00000000000;
}


PessoaJuridica::PessoaJuridica(int cnpj)
{
    this->cnpj = cnpj;
}


PessoaJuridica::PessoaJuridica(const PessoaJuridica &outra)
{
    this->cnpj = outra.cnpj;
}

ostream &operator<<(ostream &out, const PessoaJuridica &gente)
{
out << "CNPJ: "<<gente.cnpj<<"\n";
return out;
}

bool PessoaJuridica::operator==(const PessoaJuridica &gente) const
{
    if (cnpj == gente.cnpj)
        return true;
    return false;
}

const PessoaJuridica & PessoaJuridica::operator=(const PessoaJuridica &gente)
{
    cnpj = gente.cnpj;
    
    return *this;
}

/*


void PessoaJuridica::imprimiDados()
{
    //Pessoa::pesquisarDados();
    cout<<"CNPJ: "<<cnpj<<"\n";
}

void PessoaJuridica::setCnpj(string cnpj)
{
    this->cnpj = cnpj;
}
    */

PessoaJuridica::~PessoaJuridica()
{
}




    