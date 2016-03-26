#include "PessoaFisica.h"
#include <iostream>
#include <string>

using namespace std;

PessoaFisica::PessoaFisica()
{
    this->cpf="000.000.000-00";
}

PessoaFisica::PessoaFisica(int cpf)
{
    this->cpf = cpf;
}

PessoaFisica::PessoaFisica(const PessoaFisica &outra):Pessoa(outra)
{
    cpf = outra.cpf;
}

ostream &operator<<(ostream &out, const PessoaFisica &gente)
{
out << "CPF: "<<gente.cpf<<"\n";
return out;
}

bool PessoaFisica::operator==(const PessoaFisica &gente) const
{
    if(cpf == gente.cpf)
        return true;
    return false;
}

const PessoaFisica & PessoaFisica::operator=(const PessoaFisica &gente)
{
    cpf = gente.cpf;
    return *this;
}
    
string PessoaFisica::getCpf()
{
    return cpf;
}

void PessoaFisica::setCpf()
{
    cout<<"CPF: ";
    cin>>cpf;
}

PessoaFisica::~PessoaFisica()
{
}