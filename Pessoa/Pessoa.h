#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include "Data.h"
#include "Endereco.h"

using namespace std;

class Pessoa
{
    friend ostream & operator<<(ostream&, const Pessoa &);
public:    
    Pessoa();
    Pessoa(const Pessoa &p); 
    ~Pessoa();
    void menu1(Pessoa *gente);
    void setNome(const string &nome);
    void setIdade(int idade);
    void setGenero(const string &genero);
    void setDataNascimento();
    void setDadosEndereco();
    void setDados(int indexPessoa, Pessoa *gente);
    string getNome();
    int getIdade();
    string getGenero();   
    int getQtdPessoas();
    int getMaxEmprestimo();
    void listaNomes(int n, Pessoa *gente);
    void adcionarLivro(const string &);
    void remLivro();
    void listarLivros();   

    static void atualizarNumeroLivros();//-->

    bool operator==(const Pessoa &) const;
    const Pessoa &operator=(const Pessoa &);
    
private:    
    int indexPessoa;
    string nome;
    int idade;
    string genero; 

    Data dataNascimento;
    Endereco dadosEndereco;
    
    static int qtdPessoas;
    const static int maxEmprestimo;
    static int qtddeLivros; 
    
    string *livroNomes;  
};

#endif // PESSOA_H