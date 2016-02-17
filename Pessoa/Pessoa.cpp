#include "Pessoa.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <data.h>


using namespace std;

int Pessoa::qtddeLivros = 3;

Pessoa::Pessoa()
{
    nome="";
    idade=0;
    genero="";
    livro="";
}

Pessoa::Pessoa(const Pessoa &p)
{
    this->nome = p.nome; 
    this->idade = p.idade;
    this->genero = p.genero;
    this->livro = p.livro;
}

Pessoa::~Pessoa()
{
}

void Pessoa::atualizarNumeroLivros()
{
    int qtdLivrosBib;
    cout<<"Digite a quantidade de livros: ";
    cint>>qtdLivrosBib;
}

void Pessoa::menu1()
{   
    system("cls");
    cout<<"::Menu::\n";
    cout<<"1-Novo Cadastro\n";
    cout<<"2-Ja cadastrado\n";
    cout<<"3-Alterar quantidade de livros da biblioteca: ";
}

void Pessoa::setNome(const string &nome)
{
    this->nome = nome;
}

void Pessoa::setIdade(int idade)
{
    this->idade = idade;
}

void Pessoa::setGenero(const string &genero)
{
    this->genero = genero;   
}


string Pessoa::getNome()
{
    return this->nome; 
}
int Pessoa::getIdade()
{
    return this->idade;
}
string Pessoa::getGenero()
{
    return this->genero;
}

void Pessoa::listaNomes(int n, Pessoa *gente){
    system("cls");
    cout<<"Lista de Nomes\n\n";
    int i;
    for(i=1;i<=n;i++){
        cout<<" "<<i<<"- "<<gente[i].getNome()<<"\n";
    }
}

void Pessoa::pesquisarDados(int i, Pessoa *gente)
{   
    system("cls");
    cout<<"Dados: \n";
    cout<<"Nome: "<<gente[i].getNome();
    cout<<"\nIdade: "<<gente[i].getIdade();
    cout<<"\nGenero: "<<gente[i].getGenero();
    getch();
}

void Pessoa::empLivros(int i, Pessoa *gente)
{
    string resp;
    int qtd=0;   
    string nomeLivro[3];
    cout<<"Usuario Numero: "<<i<<"\n";
    do{
    if (qtd>qtddeLivros) cout<<"Erro: Numero maximo de livros atingido";
    else{
    qtd+=1;
    cout<<"Digite o nome do Livro: ";
    cin>>nomeLivro[qtd];
    cout<<"Emprestar outro livro? s-sim";
    cin>>resp;
    } 
    system("cls");
    int j;
    for (j=1;j<qtd+1;j++){
        cout<<""<<j<<"-"<<nomeLivro[j]<<"\n";
    }
    }while(resp=="s");
}

void Pessoa::listarLivros(int qtd, string *livro)
{   
    cout<<"Livros ja emprestados pelo usuario\n";
    for(j=1;j<qtd+1;j++){
        cout<<""<<j<<"-"<<nomeLivro[j]<<"\n";
    }
    getch();
}
vois Pessoa::devLivro(int i, Pessoa *gente)
{
    listarLivros(qtd, livro);
    
}

void Pessoa::setLivro(int qtd, string *livro)
{   
    this->livro=*livro;
}

string Pessoa::getLivro()
{
    return this->livro;
}

