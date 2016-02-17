#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include "Data.h"
const int i=0;
using namespace std;

class Pessoa
{
public:    
    Pessoa();
    Pessoa(const Pessoa &p);   
    void menu1();
    void setNome(const string &nome);
    void setIdade(int idade);
    void setGenero(const string &genero);
    void setLivro(int qtd, string *livro);
    string getLivro();
    string getNome();
    int getIdade();
    string getGenero();
    void listaNomes(int n, Pessoa *gente);
    void pesquisarDados(int i, Pessoa *gente);
    void empLivros(int i, Pessoa *gente);
    void listarLivros(int qtd, string *livro);

    static void atualizarNumeroLivros();
    ~Pessoa();
    
private:
    string nome;
    int idade;
    string genero; 
    string livro;
    static int qtddelivros;
    int data;
    const Data DataNascimento;
    int i;
    
    
    static int qtddeLivros;
};

#endif // PESSOA_H
