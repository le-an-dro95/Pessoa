#include <iostream>
#include "Pessoa.h"
#include <string>
#include <conio.h>
#include <stdio.h>
#include "Data.h"
#include "Endereco.h"

const int MAX=10;

using namespace std;

int main()
{   
    string resp1, resp2, nome, genero, livro;
    int n, op, op1, idade;
    Pessoa gente[MAX];

    int indexPessoa=0;
    
    do{
    gente[indexPessoa].menu1(gente);
    cin>>op;
        switch(op)
        {
        case 1:
        {   
            system("cls");            
            indexPessoa+=1;
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
            cout<<"\n\nNumero de Registro: "<<indexPessoa;
            getch();
            break;
        }
        case 2:
        {
            gente[indexPessoa].listaNomes(n, gente);
            cout<<"\nDigite o numero de Registro: ";
            cin>>indexPessoa;
            do{
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
                    gente[indexPessoa].setDados(indexPessoa, gente);
                    break;
                }
                case 2: 
                {   
                    system("cls");
                    cout<<"Quantidade Maxima de emprestimo: "<<gente[indexPessoa].getMaxEmprestimo()<<"\n\n";
                    cout<<"Nome do Livro: ";
                    cin>>livro;
                    gente[indexPessoa].adcionarLivro(livro);
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
            resp1="s";
            break;
        }
        }
    }while(resp1!="s");    
}   
