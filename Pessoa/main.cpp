#include <iostream>
#include "Pessoa.h"
#include <string>
#include <conio.h>
#include <stdio.h>
#include "Data.h"
#include "Endereco.h"

const int MAX=10;

using namespace std;

//pessoas[i]->

int main()
{   
    string resp1, resp2, nome, genero;
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
            gente[indexPessoa].setLivro1("Sem Livro");
            gente[indexPessoa].setLivro2("Sem Livro");
            gente[indexPessoa].setLivro3("Sem Livro");
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
                resp2="n";
                cin>>op1;
                switch(op1)
                {
                case 1: 
                {   
                    gente[indexPessoa].pesquisarDados(indexPessoa, gente);
                    break;
                }
                case 2: 
                {   
                    system("cls");
                    cout<<"Quantidade Maxima de emprestimo: "<<gente[indexPessoa].getMaxEmprestimo()<<"\n\n";
                    string livro1,livro2,livro3;
                    if(gente[indexPessoa].getLivro1()=="Sem Livro"){
                    cout<<"Digite o nome do livro 1: ";
                    cin>>livro1;
                    gente[indexPessoa].setLivro1(livro1);
                    break;}
                    if(gente[indexPessoa].getLivro2()=="Sem Livro"){
                    cout<<"Digite o nome do livro 2: ";
                    cin>>livro2;
                    gente[indexPessoa].setLivro2(livro2);
                    break;}
                    if(gente[indexPessoa].getLivro3()=="Sem Livro"){
                    cout<<"Digite o nome do livro 3: ";
                    cin>>livro3;
                    gente[indexPessoa].setLivro3(livro3);
                    break;}
                break;
                }
                case 3: 
                {   
                    system("cls");
                    if ((gente[indexPessoa].getLivro1()=="Sem Livro")&&(gente[indexPessoa].getLivro2()=="Sem Livro")
                    &&(gente[indexPessoa].getLivro3()=="Sem Livro")) 
                    {
                    cout<<"Usuario nao emprestou livro";
                    }
                    else
                    {
                        int rem;
                        cout<<"::Devolucao::\n\n";
                        gente[indexPessoa].listarLivros(indexPessoa,gente);
                        cout<<"\n\nDigite o numero do livro que deseja remover: ";
                        cin>>rem;
                        switch(rem)
                        {
                        case 1: 
                        {
                            gente[indexPessoa].setLivro1("Sem Livro");
                            break;
                        }
                        case 2: 
                        {
                            gente[indexPessoa].setLivro2("Sem Livro");
                            break;
                        }
                        case 3: 
                        {
                            gente[indexPessoa].setLivro3("Sem Livro");
                            break;
                        }
                        }
                       gente[indexPessoa].listarLivros(indexPessoa, gente);
                    }  
                    getch(); 
                    break;
                }
                case 4:
                {
                    gente[indexPessoa].listarLivros(indexPessoa, gente);
                    getch();
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
        }
        }
    }while(resp1!="s");    
}   
