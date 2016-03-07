#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H
#include <string>
#include "Pessoa.h"

using namespace std;

class PessoaJuridica : public Pessoa
{
    friend ostream &operator<<(ostream &, const PessoaJuridica &);
public:
    PessoaJuridica(string);
    PessoaJuridica(const PessoaJuridica &);
    ~PessoaJuridica();
    string getCnpj();
    void imprimiDados();
    void setCnpj(string);

private:
    string cnpj;
};

#endif // PESSOAJURIDICA_H
