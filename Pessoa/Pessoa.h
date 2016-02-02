#ifndef PESSOA_H
#define PESSOA_H
#include <string>
using namespace std;

class Pessoa
{
public:
    Pessoa(string,int,string);
    void setNome(string nome);
    void setIdade(int idade);
    void setGenero(string genero);
    string getNome();
    int getIdade();
    string getGenero();
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
