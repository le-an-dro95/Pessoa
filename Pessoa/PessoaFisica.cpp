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

PessoaFisica::PessoaFisica(const PessoaFisica &outra):Pessoa(static_cast<Pessoa> (outra))
{
    cpf = outra.cpf;
}

ostream &operator<<(ostream &out, const PessoaFisica &gente)
{
out << static_cast <Pessoa> (gente)
<< "CPF: "<<gente.cpf<<"\n";
return out;
}

bool PessoaFisica::operator==(const PessoaFisica &gente) const
{
    if((static_cast<Pessoa> (*this) == static_cast <Pessoa>(gente)) && (cpf == gente.cpf))
        return true;
    return false;
}

const PessoaFisica & PessoaFisica::operator=(const PessoaFisica &gente)
{
    static_cast <Pessoa&> (*this) = static_cast <Pessoa> (gente);
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