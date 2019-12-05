#include <iostream>
#include <string>
using namespace std;
/**
class Vehiculo{
    static int contador;
public:
    Vehiculo(){
        cout<<"constructor de vehiculo"<<endl;
        gasolina=5;
        cout<<"gasolina de vehiculo a: "<<gasolina<<endl;
    }
    ~Vehiculo(){cout<<"destructor de vehiculo"<<endl;}

    int potencia;

protected:
    int datoProtected;
    void imprimirGasolina(){
        cout<<"funcion imprimirGasolina, gasolina= "<<gasolina<<endl;
    }
private:
    int gasolina;
};

class Carro: public Vehiculo{
public:
    //Carro(): Vehiculo(){cout<<"Creaste un carro"<<endl;}
    Carro(){cout<<"Creaste un carro"<<endl;}
    //~Carro()

};
*/
//DIAMANTE
/**
class Persona{
public:
    Persona(){cout<<"constructor persona"<<endl;
    edad[0]=0;edad[1]=100;economia=0;
    }
    virtual void cambioEconomia()=0;
//    virtual void cambioEconomia(){};
//    void cambioEconomia(){};
protected:
    int economia;
    int edad[2];
};
class Estudiante: virtual public Persona{
public:
    Estudiante(){cout<<"constructor Estudiante"<<endl;
    edad[0]=5;edad[1]=25;pension=300;}
    void cambioEconomia(){economia-=pension;}
protected:
    int pension;
};
class Trabajador: virtual public Persona{
public:
    Trabajador(){cout<<"constructor Trabajador"<<endl;
    edad[0]=25;edad[1]=65;salario=500;}
    void cambioEconomia(){economia+=100;}
protected:
    int salario;
};
class EstudianteTrabajador: public Estudiante, public Trabajador{
public:
    EstudianteTrabajador(){cout<<"constructor EstudianteTrabajador"<<endl;economia=20;}
    void imprimirDatos(){
        cout<<"Salario: "<<salario<<"Pension: "<<pension<<endl;
        //Trabajador::cambioEconomia();
        cout<<"economia: "<<economia<<endl;
    }
    void cambioEconomia(){economia=economia+salario-pension;}
};
*/
//PUNTEROS
/**
class Animal{
public:
    Animal(){};
    Animal(string a): nombre(a){cout<<nombre;};
    int x=5;
    void imprimirNombre(){cout<<"nombre"<<endl;}
protected:
    string nombre;
};
class Gato: public Animal {
public:
    Gato(string a) : Animal(a){};
    void tomarLeche(){cout<<"Esta tomando leche"<<endl;}
};
*/


/**
TODO LIST
Memoria dinamica
Array dinamico de algo
Static vs dinamic cast
sobrecarga
templates
archivos?
enum
*/


int main()
{
    /*Persona *ptr;
    EstudianteTrabajador Sol;
    ptr=&Sol;
    ptr->cambioEconomia();
    Sol.imprimirDatos();
*/
/*PUNTEROS de clases
    Animal *ptrAnimal;
    Gato Chimuela("Chimuela");
    ptrAnimal=&Chimuela;
    ((Gato*)ptrAnimal)->tomarLeche();
    Gato* ptrGato= static_cast<Gato*>(ptrAnimal);
    ptrGato->tomarLeche();
*/
/*
    int x=5,y=4;
    int *ptrInt;
    ptrInt=&x;
    *ptrInt=y;
*/
    //cout<<" entero: "<<sizeof(int)<<" flotante: "<<sizeof(float)<<" cadena: "<<sizeof(string)<<" caracter: "<<sizeof(char);
    //cout<<" booleano: "<<sizeof(bool)<<" long: "<<sizeof(long)<<" long long: "<<sizeof(long long);


    cout << "Hello world!" << endl;
    return 0;
}
