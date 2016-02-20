#ifndef DATA_H
#define DATA_H

class Data
{
public:
    Data();
    void setData(int dia, int mes, int ano);
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