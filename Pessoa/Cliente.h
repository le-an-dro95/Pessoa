#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include "PessoaFisica.h"

using namespace std;

class Cliente: public PessoaFisica
{
    friend ostream &operator<<(ostream &, const Cliente &);
public:
    Cliente();
    Cliente(string, string);
    Cliente(const Cliente &);
    ~Cliente();
    string getLogin();
    virtual string getSenha();
    
    virtual void autenticacao();
    virtual void apresentarMenu();
    bool liberaAcesso(string, int);
    
    bool operator==(const Cliente &) const;
    const Cliente &operator=(const Cliente &);
    
private:

string login;
string senha;

};

#endif // CLIENTE_H