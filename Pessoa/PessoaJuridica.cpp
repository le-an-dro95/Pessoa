#include "PessoaJuridica.h"
#include <string>
using namespace std;

PessoaJuridica::PessoaJuridica(string cnpj)
{
    this->cnpj = cnpj;
}

PessoaJuridica::PessoaJuridica(const PessoaJuridica &novaJuridica)
{
    this->cnpj = novaJuridica.cnpj;
}

ostream & operator<<(ostream &out, const PessoaJuridica &gente)
{
out <<"CNPJ: "<<gente.cnpj<<"\n";
return out;
}


void PessoaJuridica::imprimiDados()
{
    Pessoa::pesquisarDados()
    cout<<"CNPJ: "<<cnpj<<"\n";
}

void PessoaJuridica::setCnpj(string cnpj)
{
    this->cnpj = cnpj;
}
    

PessoaJuridica::~PessoaJuridica()
{
}

