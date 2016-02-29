#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

class PessoaJuridica
{
public:
    PessoaJuridica();
    ~PessoaJuridica();
    string getCnpj();
    void setCnpj(string);

private:
    string cnpj;
};