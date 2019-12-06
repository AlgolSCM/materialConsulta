#include <iostream>
#include <string>
#include <iomanip>
using namespace std;\
//HERENCIA SIMPLE
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

//SOBRECARGA
/**
class Grado{//360*00'00
public:
    Grado(): grado(0),minuto(0),segundo(0){};
    Grado(int grado,int minuto,int segundo){
        this->grado=grado%360;
        this->minuto=minuto;
        this->segundo=segundo;
    }
    void imprimir(){
        cout<<setw(3)<<grado<<"*";
        cout<<setfill('0')<<setw(2)<<minuto<<"'";
        cout<<setfill('0')<<setw(2)<<segundo<<"\"";
    }
    int grado,minuto,segundo;
};

Grado operator+(const Grado uno, const Grado dos){
    Grado tmp;
    tmp.segundo=uno.segundo+dos.segundo;
    if (tmp.segundo>=60){
        tmp.minuto+=(tmp.segundo/60);
        tmp.segundo%=60;
    }
    tmp.minuto+=uno.minuto+dos.minuto;
    if (tmp.minuto>=60){
        tmp.grado+=(tmp.minuto/60);
        tmp.minuto%=60;
    }
    tmp.grado+=uno.grado+dos.grado;
    if (tmp.grado>=360) tmp.grado%=360;
    return tmp;
}
Grado operator>(const Grado a,const Grado b){
    if (a.grado>b.grado) return a;
    else if (a.grado==b.grado)
        if (a.minuto>b.minuto) return a;
        else if (a.minuto==b.minuto&&a.segundo>b.segundo) return a;
    return b;
}

ostream& operator<<(ostream &output,const Grado &o){
    output<<setw(3)<<o.grado<<"*";
    output<<setfill('0')<<setw(2)<<o.minuto<<"'";
    output<<setfill('0')<<setw(2)<<o.segundo<<"\"";
    return output;
}
*/

/**
TODO LIST
Memoria dinamica
Array dinamico de algo
Static vs dinamic cast
archivos?
enum
*/
//TEMPLATES
/**
template <typename T>
float suma(T x,T y){
    return x+y;
}
*/
//CLASES AMIGAS
/**
class A{
    friend class B;
private:
    static void imprimir(){cout<<"A"<<endl;}
    int x=1;
public:
    void printB();
};
class B{
public:
    static void yas(){A::imprimir();}
    friend void A::printB();
};
void A::printB(){cout<<(A::x)<<endl;}
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
/*SOBRECARGA
    Grado agudo={63,20,4},obtuso={63,20,0};
    cout << (agudo+obtuso) << endl;
    cout << (agudo>obtuso) << endl;
    */
    /*cout<<suma <int> (1,2);*/
    //B::yas();
    int *ptr=new int;
    *ptr=5;
    cout<<*ptr<<endl;
    delete ptr;
    return 0;
}
