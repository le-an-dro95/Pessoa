#include <iostream>
#include "Pessoa.h"
#include <string>
#include <conio.h>
#include "Data.h";

const int MAX=10;

using std::cout;

int main()
{   
    string resp1, resp2, nome, genero;
    int n, op, op1, idade;
    string livro[3];
    Pessoa gente[MAX];
    int i=0;  
    do{
    gente[i].menu1();
    cin>>op;
        switch(op)
        {
        case 1:
        {
            system("cls");            
            i+=1;    
            n=i;
            cout<<"Digite o Nome: ";
            cin>>nome;
            gente[i].setNome(nome);
            cout<<"Digite a Idade: ";
            cin>>idade;
            gente[i].setIdade(idade);
            cout<<"Digite o Genero: ";
            cin>>genero;
            gente[i].setGenero(genero);
            cout<<"\n\nNumero de Registro: "<<i;
            gente[i].setLivro1("Sem Livro");
            gente[i].setLivro2("Sem Livro");
            gente[i].setLivro3("Sem Livro");
            getch();
            break;
        }
        case 2:
        {
            gente[i].listaNomes(n ,gente);
            cout<<"\nDigite o numero de Registro: ";
            cin>>i;
            do{
                system("cls");
                cout<<"Usuario: "<<gente[i].getNome()<<"\n";
                cout<<"Numero de Registro: "<<i<<"\n\n";
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
                    gente[i].pesquisarDados(i, gente);
                    break;
                }
                case 2: 
                {   
                    system("cls");
                    string livro1,livro2,livro3;
                    if(gente[i].getLivro1()=="Sem Livro"){
                    cout<<"Digite o nome do livro 1:";
                    cin>>livro1;
                    gente[i].setLivro1(livro1);
                    break;}
                    if(gente[i].getLivro2()=="Sem Livro"){
                    cout<<"Digite o nome do livro 2:";
                    cin>>livro2;
                    gente[i].setLivro2(livro2);
                    break;}
                    if(gente[i].getLivro3()=="Sem Livro"){
                    cout<<"Digite o nome do livro 3:";
                    cin>>livro3;
                    gente[i].setLivro3(livro3);
                    break;}
                break;
                }
                case 3: 
                {   
                    system("cls");
                    if ((gente[i].getLivro1()=="Sem Livro")&&(gente[i].getLivro2()=="Sem Livro")
                    &&(gente[i].getLivro3()=="Sem Livro")) 
                    {
                    cout<<"Usuario nao emprestou livro";
                    }
                    else
                    {
                        int rem;
                        cout<<"::Devolucao::\n\n";
                        gente[i].listarLivros(i,gente);
                        cout<<"\n\nDigite o numero do livro que deseja remover: ";
                        cin>>rem;
                        switch(rem)
                        {
                        case 1: 
                        {
                            gente[i].setLivro1("Sem Livro");
                            break;
                        }
                        case 2: 
                        {
                            gente[i].setLivro2("Sem Livro");
                            break;
                        }
                        case 3: 
                        {
                            gente[i].setLivro3("Sem Livro");
                            break;
                        }
                        }
                       gente[i].listarLivros(i, gente);
                    }  
                    getch(); 
                    break;
                }
                case 4:
                {
                    gente[i].listarLivros(i, gente);
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
