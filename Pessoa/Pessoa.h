#ifndef PESSOA_H
#define PESSOA_H
#include <string>
//#include "Data.h"
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
    string getNome();
    int getIdade();
    string getGenero();
    void listaNomes(int n, Pessoa *gente);
    void pesquisarDados(int i, Pessoa *gente);
    void listarLivros(int i, Pessoa *gente);
    void setLivro1(string livro1);
    void setLivro2(string livro2);
    void setLivro3(string livro3);
    string getLivro1();
    string getLivro2();
    string getLivro3();
    

    static void atualizarNumeroLivros();
    ~Pessoa();
    
private:
    string nome;
    int idade;
    string genero; 
    string livro1;
    string livro2;
    string livro3;
    static int qtddelivros;
    int data;
    //const Data DataNascimento;
    int i;
    
    
    static int qtddeLivros;
};

#endif // PESSOA_H
#ifndef PESSOA_H
#define PESSOA_H
#include <string>
//#include "Data.h"
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
    string getNome();
    int getIdade();
    string getGenero();
    void listaNomes(int n, Pessoa *gente);
    void pesquisarDados(int i, Pessoa *gente);
    void listarLivros(int i, Pessoa *gente);
    void setLivro1(string livro1);
    void setLivro2(string livro2);
    void setLivro3(string livro3);
    string getLivro1();
    string getLivro2();
    string getLivro3();
    

    static void atualizarNumeroLivros();
    ~Pessoa();
    
private:
    string nome;
    int idade;
    string genero; 
    string livro1;
    string livro2;
    string livro3;
    static int qtddelivros;
    int data;
    //const Data DataNascimento;
    int i;
    
    
    static int qtddeLivros;
};

#endif // PESSOA_H
