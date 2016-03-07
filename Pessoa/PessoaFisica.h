#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H
#include <string>
#include "Pessoa.h";

using namespace std;

class PessoaFisica : public Pessoa
{
public:
    PessoaFisica(string);
    PessoaFisica(const PessoaFisica &novaFisica);
    ~PessoaFisica();
    string getCpf();
    void setCpf(string);
    
    
private:
    string cpf;

};

#endif // PESSOAFISICA_H
