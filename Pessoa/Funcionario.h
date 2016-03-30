#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>
#include "PessoaFisica.h"

using namespace std;

class Funcionario: public PessoaFisica
{
    friend ostream &operator<<(ostream &, const Funcionario &);
public:
    Funcionario();
    Funcionario(string, string);
    Funcionario(const Funcionario &);
    ~Funcionario();
    
    string getLogin();
    string getSenha();
    bool liberaAcesso();
    virtual void autenticar();
    virtual void apresentarMenu();
    
    bool operator==(const Funcionario &) const;
    const Funcionario &operator=(const Funcionario &);
    
private:

string idFuncionario;
string senha;
string senhaMestra;
};

#endif // FUNCIONARIO_H