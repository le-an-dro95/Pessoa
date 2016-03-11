#include "Cliente.h"
#include <iostream>

using namespace std;

Cliente::Cliente()
{
    login = "NomeUsuario";
    senha = 000;
}

Cliente::Cliente(string login, int senha)
{
    this->login=login;
    this->senha=senha;
}

Cliente::Cliente(const Cliente &outro):PessoaFisica(static_cast<PessoaFisica> (outro))
{
    login = outro.login;
    senha = outro.senha;
}

ostream &operator<<(ostream &out, const Cliente &gente)
{
    out << static_cast< PessoaFisica > (gente)
    <<"Login: "<<gente.login;
    
    return out;
}

const Cliente & Cliente::operator=(const Cliente &gente)
{
    static_cast <PessoaFisica&> (*this) = static_cast <PessoaFisica> (gente);
    login = gente.login;
    senha = gente.senha;
    
    return *this;
}

bool Cliente::operator==(const Cliente &gente) const
{
    if(static_cast<PessoaFisica> (*this) == static_cast <PessoaFisica>(gente) && (login == gente.login) && (senha == gente.senha))
        return true;
    return false;
}

void Cliente::getLogin()
{
    cout<<"Login: ";
    cin>>login;
}
void Cliente::getSenha()
{
    cout<<"Senha: ";
    cin>>senha;
}

string Cliente::returnLogin()
{
    return login;
}

int Cliente::returnSenha()
{
    return senha;
}
    
    
Cliente::~Cliente()
{
}