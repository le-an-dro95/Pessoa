#ifndef DATA_H
#define DATA_H

class Data
{
public:
    Data(int = 1, int = 1,int = 1900);
    void print() const;
    Data();
    ~Data();
private:
    int mes;
    int dia;
    int ano;
    int checarDia( int ) const;

    
};

#endif // DATA_H
