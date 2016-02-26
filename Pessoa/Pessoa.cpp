#include "Pessoa.h"
#include <iostream>
#include <string>
#include <conio.h>
#include "Data.h"
#include "Endereco.h"

using namespace std;

int Pessoa::qtdPessoas = 0;
const int Pessoa::maxEmprestimo=3;

//operador mostrar na tela a data;

ostream & operator<<(ostream & o, const Data & d)
{
o << d.dia << '/' << d.mes << '/' << d.ano;
return o;
}

bool Pessoa::operator==(const Pessoa *gente, int indexPessoa, string nome) const
{
    if (gente[indexPessoa].getNome != nome)
            return false;
    return true;
}

const Pessoa& Pesssoa::operator=(const Pessoa &gente)
{
    nome = gente[i].getNome();
    genero = gente[i].getGenero();
    idade = gente[i].getIdade();
    livro1 = gente[i].getLivro1();
    livro2 = gente[i].getLivro2();
    livro3 = gente[i].getLivro3();
    maxEmp = gente[i].getMaxEmprestimo();
}

void Pessoa::novaPessoa(string nome)
{
    listaNomes(indexPessoa, gente);
    
    if(indexPessoa != 0)
    {
    Pessoa *aux = new Pessoa[indexPessoa];
    
    for(int i=0;i<indexPessoa-1;i++)
        aux[i] = gente[i];
    
    delete [] gente;
    
    gente = new Pessoa[indexPessoa+1];
    for(int i=0;i<indexPessoa;i++)
        gente[i] = aux[i];
        
    gente[indexPessoa-1]= gente;
    
    delete [] aux;
    }
     else
    {
        this->gente = new Pessoa[++indexPessoa];
        this->gente[1] = gente;
    }
}
Pessoa::~Pessoa()
{
    delete [] gente;
}

Pessoa::Pessoa():dataNascimento(01,01,1900), dadosEndereco("Rua",0,"bairro","cidade","estado")
{
    this -> nome= "nome";
    this -> idade= 0;
    this -> genero= "genero";
    this -> livro1= "livro1";
    this -> livro2= "livro2";
    this -> livro3= "livro3";
}

Pessoa::Pessoa(const Pessoa &p):dataNascimento(p.dataNascimento), dadosEndereco(p.dadosEndereco)
{
    this->nome = p.nome; 
    this->idade = p.idade;
    this->genero = p.genero;
    this->livro1 = p.livro1;
    this->livro2 = p.livro2;
    this->livro3 = p.livro3;
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
    cout<<"Quantidade de usuario cadastrado: "<<gente[indexPessoa].getQtdPessoas()<<"\n\n";
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
    dadosEndereco.setEndereco(rua,n,bairro,cidade,estado);
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
    dataNascimento.setData(dia, mes, ano);
    }while(dataNascimento.getDia() == -9999);
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

void Pessoa::pesquisarDados(int indexPessoa, Pessoa *gente)
{   
    system("cls");
    cout<<"Dados: \n";
    cout<<"Nome: "<<gente[indexPessoa].getNome();
    cout<<"\nIdade: "<<gente[indexPessoa].getIdade();
    cout<<"\nData de nascimento: "<<dataNascimento.getDia()<<"/"
    <<dataNascimento.getMes()<<"/"<<dataNascimento.getAno();
    cout<<"\nGenero: "<<gente[indexPessoa].getGenero();
    dadosEndereco.getEndereco();
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

void Pessoa::listarLivros(int indexPessoa, Pessoa *gente)
{   
    system("cls");
    cout<<"Livros ja emprestados pelo usuario\n\n";
    cout<<"1- "<<gente[indexPessoa].getLivro1()<<"\n";
    cout<<"2- "<<gente[indexPessoa].getLivro2()<<"\n";
    cout<<"3- "<<gente[indexPessoa].getLivro3()<<"\n";
}

