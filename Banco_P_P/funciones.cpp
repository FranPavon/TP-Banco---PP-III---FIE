#include "Cliente.h"
#include <string.h>
#include <fstream>
using namespace std;

Cliente::Cliente(int d,string nom, string ape, string dir,int tel)
{
    setDni(d);
    setNombre(nom);
    setApellido(ape);
    setDireccion(dir);
    setTelefono(tel);
}

void Cliente::setDni(int d)
{
    dni = d;
}

int Cliente::getDni()
{
    return dni;
}

void Cliente::setNombre(string nom)
{
    const char *valorNombre = nom.data();
    int longitud = nom.size();
    longitud = longitud<25 ? longitud:24;
    strncpy(nombre,valorNombre,longitud);
    nombre[longitud] = '\0';
}

string Cliente::getNombre()
{
    return nombre;
}

void Cliente::setApellido(string ape)
{
    const char *valorApellido = ape.data();
    int longitud = ape.size();
    longitud = longitud<25 ? longitud:24;
    strncpy(apellido,valorApellido,longitud);
    apellido[longitud] = '\0';
}

string Cliente::getApellido()
{
    return apellido;
}

void Cliente::setDireccion(string dir)
{
    const char *valorDir = dir.data();
    int longitud = dir.size();
    longitud = longitud<40 ? longitud:39;
    strncpy(direccion,valorDir,longitud);
    direccion[longitud] = '\0';
}

string Cliente::getDireccion()
{
    return direccion;
}

void Cliente::setTelefono(int tel)
{
    telefono = tel;
}

float Cliente::getTelefono()
{
    return telefono;
}

void Cliente::setBorrado(int b)
{
    if(b!=0 and b!=1)
        borrado=0;
    else
        borrado=1;
}

int Cliente::getBorrado()
{
    return borrado;
}

void Cliente::buscar(fstream &a)
{
    Cliente reg;
    a.clear();
    a.seekg(0,ios::beg);
    a.read(reinterpret_cast<char *>(&reg),sizeof(Cliente));
    while(!a.eof()&&reg.getDni()!=dni)
    {
        a.read(reinterpret_cast<char *>(&reg),sizeof(Cliente));
    }
}
