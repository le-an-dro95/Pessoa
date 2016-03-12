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

    bool operator==(const PessoaFisica &) const;
    const PessoaFisica &operator=(const PessoaFisica &);
    
    
private:
    string cpf;
    
};

#endif // PESSOAFISICA_H
