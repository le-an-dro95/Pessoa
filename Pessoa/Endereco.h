#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

using namespace std;

class Endereco
{
public:
    
    Endereco(const string &, const int &, const string &, const string &, const string &);
    ~Endereco();
    void getEndereco();
    
private:
    int n;
    string rua;
    string bairro;
    string cidade;
    string estado;
};

#endif // ENDERECO_H
