#include "PessoaFisica.h"
#include <string>
#include "Pessoa.h"


PessoaFisica::PessoaFisica(string cpf)
{
    this->cpf = cpf;
}

PessoaFisica::PessoaFisica(const PessoaFisica &novaFisica)
{
    this->cpf = novaFisica.cpf;
}

ostream & operator<<(ostream &out, const PessoaFisica &gente)
{
out <<"CPF: "<<gente.cpf<<"\n";
return out;
}

void PessoaFisica::imprimiDados()
{
    Pessoa::pesquisarDados();
    cout<<"CPF: "<<cpf<<"\n";
}

void PessoaFisica::setCpf(string cpf)
{
    this->cpf = cpf;
}
    
PessoaFisica::~PessoaFisica()
{
}