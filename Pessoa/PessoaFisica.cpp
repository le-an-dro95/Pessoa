#include "PessoaFisica.h"
#include <string>

PessoaFisica::PessoaFisica(string cpf)
{
    this->cpf = cpf;
}

PessoaFisica::PessoaFisica(const PessoaFisica &novaFisica)
{
    this->cpf = novaFisica.cpf;
}

string PessoaFisica::getCpf()
{
    return this->cpf;
}

void PessoaFisica::setCpf(string cpf)
{
    this->cpf = cpf;
}
    
PessoaFisica::~PessoaFisica()
{
}