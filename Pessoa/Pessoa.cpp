#include "Pessoa.h"
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int Pessoa::qtddeLivros = 3;

Pessoa::Pessoa()
{
    nome="";
    idade=0;
    genero="";
    livro1="";
    livro2="";
    livro3="";
}

Pessoa::Pessoa(const Pessoa &p)
{
    this->nome = p.nome; 
    this->idade = p.idade;
    this->genero = p.genero;
    this->livro1 = p.livro1;
    this->livro2 = p.livro2;
    this->livro3 = p.livro3;
}

Pessoa::~Pessoa()
{
}

void Pessoa::menu1()
{   
    system("cls");
    cout<<"::Menu::\n";
    cout<<"1-Novo Cadastro\n";
    cout<<"2-Ja cadastrado\n";
    cout<<"3-SAIR";
    cout<<" \n";
    
    //cout<<"3-Alterar quantidade de livros da biblioteca: ";
}

/*void Pessoa::atualizarNumeroLivros()
{
    int qtdLivrosBib;
    cout<<"Digite a quantidade de livros: ";
    cin>>qtdLivrosBib;
}*/



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

void Pessoa::setLivro1(string livro1)
{
    this->livro1 = livro1;
}

void Pessoa::setLivro2(string livro2)
{
    this->livro2 = livro2;
}

void Pessoa::setLivro3(string livro3)
{
    this->livro3 = livro3;
}

string Pessoa::getLivro1()
{
    return this->livro1; 
}

string Pessoa::getLivro2()
{
    return this->livro2; 
}

string Pessoa::getLivro3()
{
    return this->livro3; 
}

/*void Pessoa::empLivros(int i, Pessoa *gente)
{
    
}
*/

void Pessoa::listarLivros(int i, Pessoa *gente)
{   
    system("cls");
    cout<<"Livros ja emprestados pelo usuario\n\n";
    cout<<"1- "<<gente[i].getLivro1()<<"\n";
    cout<<"2- "<<gente[i].getLivro2()<<"\n";
    cout<<"3- "<<gente[i].getLivro3()<<"\n";
    cout<<"";
    getch();
}

