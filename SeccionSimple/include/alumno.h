#ifndef ALUMNO_H
#define ALUMNO_H
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class alumno
{
    public:
        alumno();
        alumno(string lineaFichero);
        alumno(string nombre,string apellido);
        virtual ~alumno();
        string nombreApellido();
    protected:

    private:
        string nombre;
        string apellido;
        int edad;
};

#endif // ALUMNO_H
