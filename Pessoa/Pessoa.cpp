#include "Pessoa.h"
#include <iostream>
#include <string>
#include <conio.h>
#include "Data.h"
#include "Endereco.h"

using namespace std;

int Pessoa::qtdPessoas = 0;
const int Pessoa::maxEmprestimo=3;
int Pessoa::qtddeLivros=0;


Pessoa::Pessoa():dataNascimento(01,01,1900), dadosEndereco("Rua",0,"bairro","cidade","estado")
{
    this -> nome= "nome";
    this -> idade= 0;
    this -> genero= "genero";
}

Pessoa::Pessoa(const Pessoa &p):dataNascimento(p.dataNascimento), dadosEndereco(p.dadosEndereco)
{
    this->nome = p.nome; 
    this->idade = p.idade;
    this->genero = p.genero;
}

Pessoa::~Pessoa()
{
    delete [] livroNomes;
}

ostream & operator<<(ostream &o, const Pessoa &gente)
{
o <<"\nNome: "<<gente.nome<<".\n"<<"Idade: "<<gente.idade<<".\n"<<"Genero:  "<<gente.genero<<"\n";

return o;
}

bool Pessoa::operator==(const Pessoa &gente) const
{
    if (nome == gente.nome && idade == gente.idade && genero == gente.genero)
            return true;
    return false;
}

const Pessoa & Pessoa::operator=(const Pessoa &gente)
{
    nome = gente.nome;
    genero = gente.genero;
    idade = gente.idade;
}

void Pessoa::adcionarLivro(const string &livro)
//Adiciona o livro por meio de alocação dinamica de memoria com limite de ate 3 livros.
{
    if(qtddeLivros<maxEmprestimo)
    {
    if(qtddeLivros!=0)
    {
    string *aux = new string[qtddeLivros];
    
    for(int i=0;i<qtddeLivros;i++)
        aux[i] = livroNomes[i];
    
    delete [] livroNomes;
    
    livroNomes = new string[++qtddeLivros];
    
    for(int i=0;i<qtddeLivros-1;i++)
        livroNomes[i] = aux[i];
        
    livroNomes[qtddeLivros-1]= livro;
    
    delete [] aux;
    }
     else
    {
        this->livroNomes = new string[++qtddeLivros];
        this->livroNomes[0] = livro;
    }
    cout<<"Confirmado";
    }
    else 
    {
        system("cls");
        cout<<"\n\nNumero maximo de emprestimo atingido";
        getch();
    }
}

void Pessoa::remLivro()
//Remove livro com alocação dinamica de memoria..
{
    int rem, i;
    
    if(qtddeLivros!=0)
    {
    system("cls");
    cout<<":::Livros Emprestados::: \n\n";
    for(i=0;i<qtddeLivros;i++){
        cout<<""<<i<<"- "<<livroNomes[i]<<"\n";
    }
    
    cout<<"\n\nDigite o numero do Livro que deseja remover:";
    cin>>rem;
    
    
    string *aux = new string[qtddeLivros];
    
    for(int i=0;i<qtddeLivros;i++)
        aux[i] = livroNomes[i];
    
    delete [] livroNomes;
    
    livroNomes = new string[--qtddeLivros];
    
    for(int i=0;i<rem;i++){
        livroNomes[i]=aux[i];
    }
        
    for(int i=rem;i<qtddeLivros;i++){
        livroNomes[i] = aux[i+1];
    }
    
    delete [] aux;
    cout<<"\n\nLivro Removido!";
    getch();
    }
    else
    {
    cout<<"\nUsuario nao possui livro emprestado";
    getch();
    }
}

void Pessoa::listarLivros()
{   
    system("cls");
    if(qtddeLivros!=0){

        cout<<":::Livros Emprestados::: \n\n";
        for(int i=0;i<qtddeLivros;i++){
            cout<<""<<i<<"- "<<livroNomes[i]<<"\n";
        }
    }
    else cout<<"\nUsuario nao possui livro emprestado";
    getch();
}

int Pessoa::getQtdPessoas()
{
    return this->qtdPessoas;
}

int Pessoa::getMaxEmprestimo()
{
    return this->maxEmprestimo;
}

void Pessoa::menu(Pessoa *gente)
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
    for(int i=1;i<=n;i++){
    cout<<" "<<i<<"- "<<gente[i].getNome()<<"\n";
    }
}

void Pessoa::setDados()
{   
    system("cls");
    cout<<"Dados: \n";
    cout<<"Nome: "<<nome;
    cout<<"\nIdade: "<<idade;
    cout<<"\nData de nascimento: "<<dataNascimento.getDia()<<"/"
    <<dataNascimento.getMes()<<"/"<<dataNascimento.getAno();
    cout<<"\nGenero: "<<genero;
    dadosEndereco.getEndereco();
}