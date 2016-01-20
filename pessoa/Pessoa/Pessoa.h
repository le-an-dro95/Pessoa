#ifndef PESSOA_H
#define PESSOA_H

class Pessoa
{
public:
    void crescer();
    void envelhecer();
    void almentarFelicidade();
    
private:
    int altura;
    int idade;
    int niveldeFelicidade;
};

#endif // PESSOA_H
