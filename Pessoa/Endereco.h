#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

using namespace std;

class Endereco
{
public:
    void setEndereco(string rua, int n, string bairro, string cidade, string estado);
    void getEndereco();
    
private:
    int n;
    string rua;
    string bairro;
    string cidade;
    string estado;
};

#endif // ENDERECO_H
