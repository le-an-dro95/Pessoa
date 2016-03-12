#include "Cliente.h"
#include <iostream>
#include <string>

using namespace std;

Cliente::Cliente()
{
    login = "NomeUsuario";
    senha = "0L@#";
}

Cliente::Cliente(string login, string senha)
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

void Cliente::setLogin()
{
    cout<<"Login: ";
    cin>>login;
}
void Cliente::setSenha()
{
    cout<<"Senha: ";
    cin>>senha;
}

string Cliente::getLogin()
{
    return login;
}

string Cliente::getSenha()
{
    return senha;
}
 
Cliente::~Cliente()
{
}