
/*
Escribir un programa que escriba todos los múltiplos de 3 del número 1 al 3000
/*/


#include<iostream>
using namespace std;



int main(int argc, char const *argv[])
{
    int numero, contador, producto;

    numero=3;
    contador=0;
    producto=0;

    while (producto < 3000){
        contador++;
        producto = numero * contador;
        cout<< producto << ", "; 
   }
    








    return 0;
}






























