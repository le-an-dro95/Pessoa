#include "PessoaFisica.h"
#include <iostream>
#include <string>

using namespace std;

PessoaFisica::PessoaFisica()
{
    this->cpf=00000000000;
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

void PessoaFisica::imprimiDados()
{
    //Pessoa::setDados();
    cout<<"CPF: "<<cpf<<"\n";
}

void PessoaFisica::setCpf(int cpf)
{
    this->cpf = cpf;
}
    
PessoaFisica::~PessoaFisica()
{
}