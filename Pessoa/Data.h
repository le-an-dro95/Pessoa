#ifndef DATA_H
#define DATA_H

class Data
{
public:
    Data(int=0, int=0, int=0);
    void print() const;
    ~Data();
    void setData(int, int, int);
private:   
    int dia;
    int mes;
    int ano;
   

    int checarDia(int) const;

};

#endif // DATA_H