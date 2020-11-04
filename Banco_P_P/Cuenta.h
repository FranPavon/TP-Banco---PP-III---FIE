#ifndef CUENTA_H_INCLUDED
#define CUENTA_H_INCLUDED

#include<fstream>
#include<string>
using namespace std;
class Cuenta
{
    public:
        Cuenta(int =0, int=0, string ="", float = 0.0,float = 0.0);
        void setNroCuenta(int);
        int getNroCuenta();
        void setDniTitular(int);
        int getDniTitular();
        void setTipo(string);
        string getTipo();
        void setSaldo(float);
        float getSaldo();
        void setInteres(float);
        float getInteres();
        void setBorrado(int);
        int getBorrado();
        void buscar(fstream &);

    private:
        int numero, dniTitular, borrado;
        char tipo[2];
        float saldo, interes;
};



#endif // CUENTA_H_INCLUDED
