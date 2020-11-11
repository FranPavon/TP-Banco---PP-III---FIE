#ifndef MOVIMIENTO_H_INCLUDED
#define MOVIMIENTO_H_INCLUDED

#include<fstream>
#include<string>
#include <ctime>

using namespace std;
class Movimiento
{
    public:
        Movimiento(int=0, int =0, string ="", string ="", bool = true, bool = true, double = 0.0);
        void setNroCuenta(int);
        int getNroCuenta();
        void setDniTitular(int);
        int getDniTitular();
        void setTipoCuenta(bool);
        bool getTipoCuenta();
        void setTipoMovimiento(bool);
        bool getTipoMovimiento();
        void setApellido(string);
        string getApellido();
        void setNombre(string);
        string getNombre();
        void setMonto(double);
        double getMonto();
        void setFecha ();
        tm * getFecha ();

        void buscar(fstream &);

    private:
        tm * fecha;
        int numeroCuenta, dniTitular;
        bool tipoCuenta, tipoMovimiento; //CA True CC False - E true D False
        char apellido[25];
        char nombre[25];
        double monto;
};


#endif // MOVIMIENTO_H_INCLUDED
