#include "Pessoa.h"
#include <iostream>
#include <string>
#include <conio.h>
#include "Data.h"
#include "Endereco.h"

using namespace std;

int Pessoa::qtdPessoas = 0;
const int Pessoa::maxEmprestimo=3;

Pessoa::removerLivro(const string &livro)
{
    string *aux = new string[qtdlivros];
    for(int i=qtdlivros;i==0;i--)
        aux[i]=livroNomes[i];
    
    delete [] livroNomes;
    
    livroNomes = new string[--qtdlivros];
    
    for (int i=qtdLivros;i=0;i--)
        livroNomes[i] = aux[i];
        
    livroNomes[quatLivros+1] = livro;
    
    delete [] aux;
} //falta melhorar;

Pessoa::Pessoa()
{
    nome="";
    idade=0;
    genero="";
    Data DataNascimento(int,int,int); //slide 59
    Endereco DadosEndereco(string,int,string,string,string); //slide 59
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
}

void Pessoa::setDadosEndereco()
{   
    string rua, bairro, cidade, estado;
    int n;
    cout<<"Rua: ";
    cin>>rua;
    cout<<"Numero: ";
    cin>>n;
    cout<<"Bairro: ";
    cin>>bairro;
    cout<<"Cidade: ";
    cin>>cidade;
    cout<<"Estado: ";
    cin>>estado;
    DadosEndereco.setEndereco(rua,n,bairro,cidade,estado);
}

void Pessoa::setDataNascimento()
{   
    int dia, mes, ano;
    do{
    cout<<"Data de Nascimento\n";   
    cout<<"Dia: ";
    cin>>dia;
    cout<<"Mes: ";
    cin>>mes;
    cout<<"Ano: ";
    cin>>ano;
    DataNascimento.setData(dia, mes, ano);
    }while(DataNascimento.getDia() == -9999);
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
    cout<<"\nData de nascimento: "<<DataNascimento.getDia()<<"/"
    <<DataNascimento.getMes()<<"/"<<DataNascimento.getAno();
    cout<<"\nGenero: "<<gente[i].getGenero();
    DadosEndereco.getEndereco();
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

