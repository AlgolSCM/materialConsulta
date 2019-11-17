#ifndef SECCION_H
#define SECCION_H

#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <fstream>
#include "alumno.h"

using namespace std;
class seccion
{
    public:
        seccion();
        seccion(string nombreSeccion,alumno listado[20],int cantidadAlumnos);
        seccion(char nombreArchivo[],int cantidadAlumnos);
        virtual ~seccion();
        void printAlumnos();

    protected:

    private:
        string nombreSeccion;
        int cantidadAlumnos;
        vector <alumno> listado;
        //alumno listado[20];
};

#endif // SECCION_H
