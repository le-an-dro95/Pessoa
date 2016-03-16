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
    void setLogin();
    void setSenha();
    string getLogin();
    string getSenha();
    bool liberaAcesso(string, int);
    virtual string getCpf();
    virtual void setCpf();
    
    bool operator==(const Cliente &) const;
    const Cliente &operator=(const Cliente &);
    
private:

string login;
string senha;

};

#endif // CLIENTE_H