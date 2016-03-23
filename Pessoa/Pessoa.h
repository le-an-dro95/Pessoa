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
    Pessoa(const Pessoa &); 
    ~Pessoa();
    void menu(Pessoa *);
    void setNome(const string &);
    void setIdade(int);
    void setGenero(const string &);
    void setDataNascimento();
    void setDadosEndereco();
    void setDados();
    string getNome();
    int getIdade();
    string getGenero();   
    int getQtdPessoas();
    int getMaxEmprestimo();
    void listaNomes(int n, Pessoa *);
    void adcionarLivro(const string &);
    void remLivro();
    void listarLivros();  
    virtual void apresentarMenu()=0;

    static void atualizarNumeroLivros();//-->

    bool operator==(const Pessoa &) const;
    const Pessoa &operator=(const Pessoa &);
    
private:    

    string nome;
    int idade;
    string genero; 

    Data dataNascimento;
    Endereco dadosEndereco;
    
    int indexPessoa;
    static int qtdPessoas;
    const static int maxEmprestimo;
    static int qtddeLivros; 
    
    string *livroNomes; 
    
};

#endif // PESSOA_H