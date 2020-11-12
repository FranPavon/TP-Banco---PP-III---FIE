#ifndef CUENTA_H_INCLUDED
#define CUENTA_H_INCLUDED

#include<fstream>
#include<string>
using namespace std;
class Cuenta
{
    public:
        Cuenta(int =0, int=0, bool = true, double = 0.0,float = 1.05);
        void setNroCuenta(int);
        int getNroCuenta();
        void setDniTitular(int);
        int getDniTitular();
        void setTipo(bool);
        bool getTipo();
        void setSaldo(double);
        double getSaldo();
        void setInteres(float);
        float getInteres();
        void setBorrado(bool);
        bool getBorrado();
        void buscar(fstream &);

    private:
        int numero, dniTitular;
        bool tipo, borrado; //CA True CC False
        double saldo;
        float interes;
};



#endif // CUENTA_H_INCLUDED
