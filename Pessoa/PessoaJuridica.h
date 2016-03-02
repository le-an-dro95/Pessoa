#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H
#include <string>
using namespace std;

class PessoaJuridica
{
public:
    PessoaJuridica(string);
    PessoaJuridica(const PessoaJuridica &novaJuridica);
    ~PessoaJuridica();
    string getCnpj();
    void setCnpj(string);

private:
    string cnpj;
};

#endif // PESSOAJURIDICA_H
