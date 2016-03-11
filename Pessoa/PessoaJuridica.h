#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H
#include <string>
#include "Pessoa.h"

using namespace std;

class PessoaJuridica: public Pessoa
{
    friend ostream &operator<<(ostream &, const PessoaJuridica &);
public:
    PessoaJuridica();
    PessoaJuridica(int);
    PessoaJuridica(const PessoaJuridica &);
    ~PessoaJuridica();
    int getCnpj();
    void imprimiDados();
    void setCnpj(int);
    
    
    bool operator==(const PessoaJuridica &) const;
    const PessoaJuridica &operator=(const PessoaJuridica &);

private:
    int cnpj;
};

#endif // PESSOAJURIDICA_H
