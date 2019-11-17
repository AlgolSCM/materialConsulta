#include "seccion.h"

using namespace std;

seccion::seccion()
{
    //ctor
}
seccion::seccion(string nombreSeccion,alumno lista[20],int cantidadAlumnos)
{
    this->nombreSeccion=nombreSeccion;
    this->cantidadAlumnos=cantidadAlumnos;
    for (int i=0;i<cantidadAlumnos;i++)
        listado[i]=lista[i];
}
seccion::seccion(char nombreArchivo[],int cantidadAlumnos){
    ifstream archivo;
    string linea;
    archivo.open(nombreArchivo,ios::in);//Abre el archivo en modo lectura
    if(archivo.fail()){cout<<"Error al cargar la seccion";exit(1);}
    for (int i=cantidadAlumnos;i>0;i--){
        getline(archivo,linea);
        listado.push_back(alumno(linea));
        cantidadAlumnos++;
    }
    archivo.close();
    this->nombreSeccion=nombreArchivo;
    this->cantidadAlumnos=cantidadAlumnos;

}



seccion::~seccion()
{
    //dtor
}
void seccion::printAlumnos(){
    //for (int i=0;i<cantidadAlumnos;i++)
        //cout<<listado->nombreApellido();
}
