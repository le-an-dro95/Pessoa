#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include "Data.h"
#include "Endereco.h"

const int i=0;
using namespace std;
using std::ostream;

class Pessoa
{
    friend ostream & operator<<(ostream&, const Pessoa &);
public:    
    Pessoa();
    Pessoa(const Pessoa &p);   
    int maisPessoas();
    void menu1(Pessoa *gente);
    void setNome(const string &nome);
    void setIdade(int idade);
    void setGenero(const string &genero);
    string getNome();
    int getIdade();
    string getGenero();
    void listaNomes(int n, Pessoa *gente);
    void pesquisarDados(int indexPessoa, Pessoa *gente);
    void listarLivros(int indexPessoa, Pessoa *gente);
    void setLivro1(string livro1);
    void setLivro2(string livro2);
    void setLivro3(string livro3);
    string getLivro1();
    string getLivro2();
    string getLivro3();
    int getQtdPessoas();
    int getMaxEmprestimo();
    void setDataNascimento();
    void setDadosEndereco();
    static void atualizarNumeroLivros();
    //void novaPessoa(int indexPessoa, Pessoa *gente);
    bool operator==(const Pessoa &) const;
    const Pessoa &operator=(const Pessoa &);
    //ostream & operator<<(ostream & o, const Data & d);
    
    ~Pessoa();
    
private:
    string nome;
    int idade;
    string genero; 
    string livro1;
    string livro2;
    string livro3;
    static int qtdPessoas;
    const static int maxEmprestimo;
    Data dataNascimento;
    int indexPessoa;
    Endereco dadosEndereco;
    
    static int qtddeLivros;
};

#endif // PESSOA_H
