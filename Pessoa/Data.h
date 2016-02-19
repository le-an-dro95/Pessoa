#ifndef DATA_H
#define DATA_H

class Data
{
public:
    
    void setDia(int dia);
    void setMes(int mes);
    void setAno(int ano);
    int getDia();
    int getMes();
    int getAno();
private:   
    int dia;
    int mes;
    int ano;
   

    int checarDia(int) const;

};

#endif // DATA_H