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

string PessoaJuridica::getCnpj()
{
    return this->cnpj;
}

void PessoaJuridica::setCnpj(string cnpj)
{
    this->cnpj = cnpj;
}
    

PessoaJuridica::~PessoaJuridica()
{
}

