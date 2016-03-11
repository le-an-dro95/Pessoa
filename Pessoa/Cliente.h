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
    Cliente(string, int);
    Cliente(const Cliente &);
    ~Cliente();
    void getLogin();
    void getSenha();
    string returnLogin();
    int returnSenha();
    
    bool operator==(const Cliente &) const;
    const Cliente &operator=(const Cliente &);
    
private:

string login;
int senha;

};

#endif // CLIENTE_H