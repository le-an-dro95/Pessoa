#include "Usuario.h"

Usuario::Usuario(string login, int senha)
{
    this->login=login;
    this->senha=senha;
}

void Usuario::getLogin()
{
    cout<<"Login: ";
    cin>>login;
}
void Usuario::getSenha(int senha)
{
    cout<<"Senha: ";
    cin>>senha;
}

void Usuario::returnLogin()
{
    return login;
}

void Usuario::returnSenha()
{
    return senha;
}
    
    
Usuario::~Usuario()
{
}