#include <iostream>
#include <string>
#include <conio.h>
#include <vector>
#include <typeinfo>
#include "PessoaFisica.h"
#include "Cliente.h"
#include "Funcionario.h"

using namespace std;

int main()
{   
    string resp1, resp2, nome, genero, livro;
    int indexPessoa=0;
    int op, op1, idade, i;
    
    vector <PessoaFisica*> pessoas;//vector para estanciar mais de uma pessoa
    
    pessoas.push_back(new Funcionario);
    pessoas.push_back(new Cliente);
    pessoas.push_back(new Funcionario);
    pessoas.push_back(new Cliente);
    pessoas.push_back(new Funcionario);
    
    for(i=0;i<3;i++){
    livro="Livro";
    pessoas[1]->adcionarLivro(livro);//Adicionando livros para clientes;
    //pessoas[3]->adcionarLivro(livro);
    }
    
    for(i=0; i<pessoas.size();i++)
    {
        pessoas[i]->autenticar();
        
        Cliente * clientePtr = dynamic_cast<Cliente *>(pessoas[i]);//dynamic cast para chamar o método do Cliente.
        Funcionario * funcionarioPtr = dynamic_cast<Funcionario *>(pessoas[i]);
        if (clientePtr != 0) 
        {
            clientePtr->niveldeAcesso=0;
            system("cls");
            cout<<"\nLista de Livros: \n\n";
            clientePtr->listarLivros();
        }
        if(funcionarioPtr != 0)
        {
            funcionarioPtr->niveldeAcesso=1;
        }
    }
    
    do{
    pessoas[indexPessoa]->apresentarMenu();
    cout<<"\n";
    cout<<"\n\n\nQuantidade de usuario cadastrado: "<<pessoas.size()<<"\n\n";
    resp1="n";
    cin>>op;
        switch(op)
        {
        case 1:
        {     
            system("cls"); 
            cout<<"::: CADASTRO :::\n\n";
            
            pessoas.push_back(new Cliente);
            
            indexPessoa=pessoas.size()-1;
            cout<<"Nome: ";
            cin>>nome;
            pessoas[indexPessoa]->setNome(nome);
            cout<<"Idade: ";
            cin>>idade;
            pessoas[indexPessoa]->setIdade(idade);
            pessoas[indexPessoa]->setDataNascimento();
            cout<<"Genero: ";
            cin>>genero;
            pessoas[indexPessoa]->setGenero(genero);
            pessoas[indexPessoa]->setDadosEndereco();
            pessoas[indexPessoa]->setCpf(); //Método da Classe PessoaFisica
            pessoas[indexPessoa]->autenticar();//Método virtual da classe Cliente
            cout<<"\n\nNumero de Registro: "<<indexPessoa;
            getch();
            break;
        }
        case 2:
        {   
            system("cls");
            if(pessoas.empty())
            {
                cout<<"Usuarios nao cadastrados\n";
                getch();
                break;
            }
            do{
            system("cls");
            cout<<"Lista de Nomes\n\n";
            for(int i=0;i<pessoas.size();i++){
            cout<<""<<i<<"- "<<pessoas[i]->getNome()<<"\n";
            }
            resp2="n";
            cout<<"\n\nDigite o numero de Registro: ";
            cin>>indexPessoa;
            if(indexPessoa>=0 && indexPessoa<pessoas.size()) resp2="s";
            }while(resp2=="n");  //só pra fluir direito..
            do{
                resp2="n";
                system("cls");
                cout<<"Usuario: "<<pessoas[indexPessoa]->getNome()<<"\n";
                cout<<"Numero de Registro: "<<indexPessoa<<"\n\n";
                pessoas[indexPessoa]->apresentarMenu();
                cin>>op1;
                switch(op1)
                {
                case 1: 
                {   
                    pessoas[indexPessoa]->setDados();
                    cout<<"CPF: "<<pessoas[indexPessoa]->getCpf();
                    getch();
                    break;
                }
                case 2: 
                {   
                    string logintest;
                    string senhatest;
                    system("cls");
                    cout<<"Quantidade Maxima de emprestimo: "<<pessoas[indexPessoa]->getMaxEmprestimo()<<"\n\n";
                    cout<<"Nome do Livro: ";
                    cin>>livro;
                    system("cls");
                    cout<<"Confirmar Usuario\n\n";
                    cout<<"Senha: ";
                    cin>>senhatest;                    
                    if(senhatest == pessoas[indexPessoa]->getSenha())
                        pessoas[indexPessoa]->adcionarLivro(livro);
                    else cout<<"senha incorreta!";
                    getch();
                    break;
                }
                case 3: 
                {   
                    system("cls");
                    pessoas[indexPessoa]->remLivro();
                    break;
                    
                }
                case 4:
                {
                    pessoas[indexPessoa]->listarLivros();
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
    
    //deletando os elementos do vector.
    for(i=0;i<pessoas.size();i++)
    {
        delete pessoas[i];
    }
}

