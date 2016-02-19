#include "Data.h"
#include <iostream>

using namespace std;

void Data::setDia(int dia)
{
    this->dia = dia;
}

void Data::setMes(int mes)
{
    this->mes = mes;
}

void Data::setAno(int ano)
{
    this->ano = ano;
}

int Data::getDia()
{
    return this->dia;
}

int Data::getMes()
{
    return this->mes;
}

int Data::getAno()
{
    return this->ano;
}



/*void Data::print() const
{
    cout<<"\nData de Nascimento:";
    cout << ""<< dia << "/" << mes << "/" << ano;
}

int Data::checarDia(int dia) const
{
    static const int diasPorMes[13] = {0, 31, 28, 31, 30, 30, 31, 31, 30, 31, 30, 31};
    
    if (dia > 0 && dia <= diasPorMes[mes])
    {
        return dia;
    }
    
    if (mes == 2 && dia == 29 && (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)))
    {
        return dia;
    }
    
    cout << "\n Dia invalido";
    
    return 1;
}*/