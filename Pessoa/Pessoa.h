/*
       * terminar a herança, fazer augo com os metodos dela...
       * 
       * ate 10h da segunda-feira; entregar tudo..
*/


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
    void menu1(Pessoa *);
    void setNome(const string &);
    void setIdade(int);
    void setGenero(const string &);
    void setDataNascimento();
    void setDadosEndereco();
    void setDados(int, Pessoa *);
    string getNome();
    int getIdade();
    string getGenero();   
    int getQtdPessoas();
    int indexPessoa;
    int getMaxEmprestimo();
    void listaNomes(int, Pessoa *);
    void adcionarLivro(const string &);
    void remLivro();
    void listarLivros();   

    static void atualizarNumeroLivros();//-->

    bool operator==(const Pessoa &) const;
    const Pessoa &operator=(const Pessoa &);
    
private:    

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