#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

class PessoaFisica
{
public:
    PessoaFisica();
    ~PessoaFisica();
    string getCpf();
    void setCpf(string);
    
    
private:
    string cpf;

};

#endif // PESSOAFISICA_H
