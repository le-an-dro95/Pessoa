#include <iostream>
#include "Pessoa.h"
#include <string>
#include <conio.h>
#include "Data.h";

const int MAX=10;

using std::cout;

int main()
{   
    string resp2, resp1, nome, genero;
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
            string resp; 
            do{
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
                cout<<"Novo? s-Sim, n-Nao\n";
                
                cin>>resp;
            } while(resp=="s");
            break;
            }
            case 2:
            {
                gente[i].listaNomes(n, gente);
                cout<<"\nDigite o numero correspondente: ";
                cin>>i;
                system("cls");
                cout<<"Usuario: "<<gente[i].getNome()<<"\n";
                cout<<"Numero de Registro: "<<i<<"\n\n";
                cout<<"1-Visualizar dados\n";
                cout<<"2-Emprestar Livro\n";
                cout<<"3-Devolver Livro\n";
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
                    gente[i].empLivros(i, gente);
                }
                case 3: 
                {
                    for(i=1;i<n+1;i++){
                        cout<<" "<<livro[i];
                    }
                    cout<<"Devolver";
                    getch();
                    break;
                }
                }
                break;
            }
            case 3:
            {
                gente[i].atualizarNumeroLivros();
            }
        }
    }while(1);    
}   
