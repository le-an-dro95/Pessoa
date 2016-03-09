#ifndef USUARIO_H
#define USUARIO_H

class Usuario: public PessoaFisica
{
    friend ostream &operator<<(ostream &, const Cliente &);
public:
    Cliente(string, int);
    ~Cliente();
    void getLogin();
    void getSenha();
    string returnLogin()
    int returnSenha()
private:

string login;
int senha;

};

#endif // USUARIO_H