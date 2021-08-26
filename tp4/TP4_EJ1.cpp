/*1.Realizar una calculadora que realice suma, resta, multiplicación y división. 
Cada cálculo se debe realizar en funciones pasando los números por valor.
/*/

#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <time.h>
using namespace std;

//Una variable de tipo "double" puede almacenar valores decimales. 
double sumar (double, double);
double restar (double, double);
double multiplicar (double, double);
double dividir (double, double);


int main()
{
    float primerValor, segundoValor;
    int opcionAElegir;

    cout<<"****************CALCULADORA EL CHAPON****************"<<endl;
    cout<<"INGRESE PRIMER VALOR"<<endl;
    cin>>primerValor;
    cout<<"INGRESE SEGUNDO VALOR"<<endl;
    cin>>segundoValor;
    cout<<"***********ELIJA LA OPERACION QUE QUIERA HACER***********"<<endl;
    cout<<"SUMAR [1]"<<endl;
    cout<<"RESTAR [2]"<<endl;
    cout<<"MULTIPLICAR [3]"<<endl;
    cout<<"DIVIDIR [4]"<<endl;
    cin>>opcionAElegir;




    switch (opcionAElegir){
    case 1:
            cout<<"EL RESULTADO ES: " << sumar(primerValor, segundoValor)<<endl;
        break;
    case 2:
            cout<<"EL RESULTADO ES: " << restar(primerValor, segundoValor)<<endl;
        break;
    case 3: 
            cout<<"EL RESULTADO ES: "<< multiplicar(primerValor, segundoValor)<<endl;
        break;
    case 4: 
            cout<<"EL RESULTADDO ES: "<< dividir(primerValor, segundoValor)<<endl;
        break;                
    default:
            cout<<"INGRESO UN NUMERO INCORRECTO EN LAS OPCIONES QUE NO PERTENECE AL LISTADO"<<endl;
        break;
    }
    return 0;
}

double sumar (double x, double y){
    return x + y;
}
double restar (double x, double y){
    return x - y;
}
double multiplicar (double x, double y){
    return x * y;
}
double dividir (double x, double y){
    return x / y;
}