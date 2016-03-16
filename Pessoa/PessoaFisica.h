#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H
#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

class PessoaFisica : public Pessoa
{
public:
    PessoaFisica();
    ~PessoaFisica();
    virtual string getCpf()=0;
    virtual void setCpf()=0;

    bool operator==(const PessoaFisica &) const;
    const PessoaFisica &operator=(const PessoaFisica &);
    
    
private:
    string cpf;
    
};

#endif // PESSOAFISICA_H
