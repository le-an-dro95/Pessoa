#ifndef PESSOA_H
#define PESSOA_H
#include <string>
using namespace std;

class Pessoa
{
public:    
    Pessoa();
    Pessoa(const Pessoa &p);
    void setNome(const string &nome);
    void setIdade(int idade);
    void setGenero(const string &genero);
    string getNome();
    int getIdade();
    string getGenero();
    void listaNomes(int n, Pessoa *gente);
    void pesquisarDados(int n, Pessoa *gente);

    ~Pessoa();
    
private:
    string nome;
    int idade;
    string genero; 
    
    static int qtddeLivros;
};

#endif // PESSOA_H
