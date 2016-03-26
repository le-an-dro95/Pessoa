#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H
#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

class PessoaFisica : public Pessoa
{
    friend ostream &operator<<(ostream &, const PessoaFisica &);
public:
    PessoaFisica();
    PessoaFisica(int);
    PessoaFisica(const PessoaFisica &);
    ~PessoaFisica();
    string getCpf();
    void setCpf();
    virtual void autenticacao()=0;
    virtual void apresentarMenu()=0;
    virtual string getSenha()=0;

    bool operator==(const PessoaFisica &) const;
    const PessoaFisica &operator=(const PessoaFisica &);
     
private:
    string cpf; 
};

#endif // PESSOAFISICA_H