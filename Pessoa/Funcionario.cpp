#include "Funcionario.h"
#include <iostream>
#include <string>

using namespace std;

Funcionario::Funcionario()
{
    idFuncionario = "NomeUsuario";
    senha = "0L@#";
}

Funcionario::Funcionario(string idFuncionario, string senha)
{
    this->idFuncionario=idFuncionario;
    this->senha=senha;
}

Funcionario::Funcionario(const Funcionario &outro):PessoaFisica(outro)
{
    idFuncionario = outro.idFuncionario;
    senha = outro.senha;
}

ostream &operator<<(ostream &out, const Funcionario &gente)
{
    out <<"Login: "<<gente.idFuncionario;
    return out;
}

const Funcionario & Funcionario::operator=(const Funcionario &gente)
{
    PessoaFisica::operator =(gente);
    idFuncionario = gente.idFuncionario;
    senha = gente.senha;
    
    return *this;
}

bool Funcionario::operator==(const Funcionario &gente) const
{
    if(PessoaFisica::operator ==(gente) && (idFuncionario == gente.idFuncionario) && (senha == gente.senha))
        return true;
    return false;
}

void Funcionario::autenticacao()
{
    cout<<"ID Funcionario: ";
    cin>>idFuncionario;
    cout<<"Senha: ";
    cin>>senha;
}

bool Funcionario::liberaAcesso()
{
    if (idFuncionario == "123" && senha=="123")
        return true;
}

string Funcionario::getLogin()
{
    return idFuncionario;
}

string Funcionario::getSenha()
{
    return senha;
}

void Funcionario::apresentarMenu()
{
    system("cls");
    cout<<":: MENU ::\n\n";
    cout<<"1 - Cadastrar Usuario\n";
    cout<<"2 - Consultar Usuarios\n";
    cout<<"3 - Cadastrar Livro\n";
    cout<<"4 - Cadastrar Funcionario\n";
    cout<<"5 - SAIR\n";
}

Funcionario::~Funcionario()
{
}

