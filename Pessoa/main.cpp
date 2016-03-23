#include <iostream>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <vector.h>
#include "Data.h"
#include "Endereco.h"
#include "PessoaFisica.h"
#include "Cliente.h"
#include "Funcionario.h"

const int MAX=10;
using namespace std;

int main()
{   
    string resp1, resp2, nome, genero, livro;
    int n, op, op1, idade;
    int indexPessoa=0;
    
    //Funcionario funcionario;
    
    vector <PessoaFisica*> gente(10);
    
    gente[0] = new Cliente;
    gente[1] = new Cliente;
    gente[2] = new Cliente;
    
    for(int i=0;i<MAX;i++)
        {
        Cliente *derivedPtr = dynamic_cast<Cliente*> (gente[i]);
        if (derivedPtr)
        {
            derivedPtr->menu();
        }
    }
    
    do{
    funcionario.menu();
    resp1="n";
    cin>>op;
        switch(op)
        {
        case 1:
        {   
            system("cls"); 
            cout<<"::: CADASTRO :::\n\n";
            indexPessoa=indexPessoa+1;
            n=indexPessoa;
            cout<<"Nome: ";
            cin>>nome;
            gente[indexPessoa].setNome(nome);
            cout<<"Idade: ";
            cin>>idade;
            gente[indexPessoa].setIdade(idade);
            gente[indexPessoa].setDataNascimento();
            cout<<"Genero: ";
            cin>>genero;
            gente[indexPessoa].setGenero(genero);
            gente[indexPessoa].setDadosEndereco();
            gente[indexPessoa].setCpf(); //Método da Classe PessoaFisica
            gente[indexPessoa].autenticacao();//Método da classe Cliente
            cout<<"\n\nNumero de Registro: "<<indexPessoa;

            getch();
            break;
        }
        case 2:
        {   
            system("cls");
            cout<<"Lista de Nomes\n\n";
            for(int i=1;i<=n;i++){
            cout<<""<<i<<"- "<<gente[i].getNome()<<"\n";
            }
            cout<<"\n\nDigite o numero de Registro: ";
            cin>>indexPessoa;
            do{
                resp2="n";
                system("cls");
                cout<<"Usuario: "<<gente[indexPessoa].getNome()<<"\n";
                cout<<"Numero de Registro: "<<indexPessoa<<"\n\n";
                cout<<"1 - Visualizar dados\n";
                cout<<"2 - Emprestar Livro\n";
                cout<<"3 - Devolver Livro\n";
                cout<<"4 - Lista de livros emprestado pelo usuario\n";
                cout<<"5 - Menu Principal\n";
                cout<<"\n";
                cin>>op1;
                switch(op1)
                {
                case 1: 
                {   
                    gente[indexPessoa].setDados();
                    cout<<"CPF: "<<gente[indexPessoa].getCpf();
                    getch();
                    break;
                }
                case 2: 
                {   
                    string logintest;
                    string senhatest;
                    system("cls");
                    cout<<"Quantidade Maxima de emprestimo: "<<gente[indexPessoa].getMaxEmprestimo()<<"\n\n";
                    cout<<"Nome do Livro: ";
                    cin>>livro;
                    system("cls");
                    cout<<"Confirmar Usuario\n\n";
                    cout<<"Senha: ";
                    cin>>senhatest;                    
                    if(senhatest == gente[indexPessoa].getSenha())
                        gente[indexPessoa].adcionarLivro(livro);
                    else cout<<"senha incorreta!";
                    getch();
                    break;
                }
                case 3: 
                {   
                    system("cls");
                    gente[indexPessoa].remLivro();
                    break;
                }
                case 4:
                {
                    gente[indexPessoa].listarLivros();
                    break;
                }
                case 5:
                {
                    resp2="s";
                    break;
                }
                }
            }while(resp2!="s");
        break;   
        }
        case 3:
        {
            system("cls");
            cout<<"Cadastrar Livro\n\n";
            cout<<"Titulo: ";
            string novolivro;
            cin>>novolivro;
            break;
        }
        case 4:
        {
            system("cls");
            cout<<"Cadastrar Funcionario\n";
            cout<<"Nome: ";
            string nomefunc;
            cin>>nomefunc;
            break;
        }
        case 5:
        {
            resp1="s";
            break;
        }
        }
        
    }while(resp1!="s");   
}