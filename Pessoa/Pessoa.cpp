#include "Pessoa.h"
#include <iostream>
#include <string>
#include <conio.h>
#include "Data.h"

using namespace std;

int Pessoa::qtdPessoas = 0;
const int Pessoa::maxEmprestimo=3;

Pessoa::Pessoa()
{
    nome="";
    idade=0;
    genero="";
    Data DataNascimento(int,int,int);
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
int Pessoa::getQtdPessoas()
{
    return this->qtdPessoas;
}

int Pessoa::getMaxEmprestimo()
{
    return this->maxEmprestimo;
}

void Pessoa::menu1(Pessoa *gente)
{   
    system("cls");   
    cout<<"Quantidade de usuario cadastrado: "<<gente[i].getQtdPessoas()<<"\n\n";
    cout<<"::::Menu::::\n\n";
    cout<<"1-Novo Cadastro\n";
    cout<<"2-Ja cadastrado\n";
    cout<<"3-SAIR\n\n";
    cout<<"Operacao: ";
    
    
    //cout<<"3-Alterar quantidade de livros da biblioteca: ";
}

/*void Pessoa::atualizarNumeroLivros()
{
    int qtdLivrosBib;
    cout<<"Digite a quantidade de livros: ";
    cin>>qtdLivrosBib;
}*/

void Pessoa::setDataNascimento()
{   
    int dia, mes, ano;
    cout<<"Data de Nascimento\n";
    cout<<"Dia: ";
    cin>>dia;
    cout<<"Mes: ";
    cin>>mes;
    cout<<"Ano: ";
    cin>>ano;
    DataNascimento.setData(dia,mes,ano);
    //Data DataNascimento(dia,mes,ano);
}


void Pessoa::setNome(const string &nome)
{
    this->nome = nome;
    qtdPessoas++;
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
    DataNascimento.print();
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

void Pessoa::listarLivros(int i, Pessoa *gente)
{   
    system("cls");
    cout<<"Livros ja emprestados pelo usuario\n\n";
    cout<<"1- "<<gente[i].getLivro1()<<"\n";
    cout<<"2- "<<gente[i].getLivro2()<<"\n";
    cout<<"3- "<<gente[i].getLivro3()<<"\n";
}

