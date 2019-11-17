#include "alumno.h"
using namespace std;
alumno::alumno(){
    //ctor
}
alumno::alumno(string nombre,string apellido){
    this->nombre=nombre;
    this->apellido=apellido;
}
alumno::alumno(string lineaFichero){
    vector <string> fields;
    stringstream ss(lineaFichero);
    string actual;
    while (getline(ss, actual, ','))
        fields.push_back(actual);
    nombre=fields[0];
    apellido=fields[1];
    int n= stoi(fields[2]);//stoi retorna el valor
    edad=n;
    cout<<"Alumno creado: "<<nombre<<" "<<edad<<endl;
}


alumno::~alumno()
{
    //dtor
}
string alumno::nombreApellido(){
    return nombre+" "+apellido;
}
