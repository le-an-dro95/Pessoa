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
    void imprimiDados();
    void setCpf(int);

    bool operator==(const PessoaFisica &) const;
    const PessoaFisica &operator=(const PessoaFisica &);
    
    
private:
    int cpf;
    
};

#endif // PESSOAFISICA_H
