#ifndef PESSOA_H
#define PESSOA_H
#include <string>
using namespace std;

class Pessoa
{
public:
    void adcNome();
    void adcIdade();
    void adcGenero();
    void infNome();
    void infIdade();
    void infGenero();
    void listaNomes(int n, Pessoa *gente);
    void pesquisarDados(int n, Pessoa *gente);
    Pessoa();
    ~Pessoa();
    
private:
    string nome;
    int idade;
    string genero; 
    
};

#endif // PESSOA_H
