#include <iostream>
using std::cout;

#include "Pessoa.h"

int main(int argc, char **argv)
{
    Pessoa gente;
    
    gente.crescer();
    gente.envelhecer();
    gente.almentarFelicidade();
    
    return 0;
}
