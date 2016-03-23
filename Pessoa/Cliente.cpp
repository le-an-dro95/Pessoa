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

Cliente::Cliente(const Cliente &outro):PessoaFisica(outro)
{
    login = outro.login;
    senha = outro.senha;
}

ostream &operator<<(ostream &out, const Cliente &gente)
{
    out<<"Login: "<<gente.login;
    return out;
}

const Cliente & Cliente::operator=(const Cliente &gente)
{
    PessoaFisica::operator =(gente);
    login = gente.login;
    senha = gente.senha;
    
    return *this;
}

bool Cliente::operator==(const Cliente &gente) const
{
    if(PessoaFisica::operator==(gente) && (login == gente.login) && (senha == gente.senha))
        return true;
    return false;
}

void Cliente::autenticacao()
{
    cout<<"Login: ";
    cin>>login;
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

void Cliente::apresentarMenu()
{
    cout<<"     :: MENU ::\n\n";
    cout<<"1 - Visualizar dados\n";
    cout<<"2 - Emprestar Livro\n";
    cout<<"3 - Devolver Livro\n";
    cout<<"4 - Lista de livros emprestado pelo usuario\n";
    cout<<"5 - Menu Principal\n";
    cout<<"\n";
}

Cliente::~Cliente()
{
}