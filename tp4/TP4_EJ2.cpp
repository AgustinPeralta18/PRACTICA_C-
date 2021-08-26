/*2.	Cargar un arreglo de 20 números en un procedimiento y realizar el cálculo de promedio de 
los números en una función pasando el arreglo al mismo.
/*/


#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <time.h>
using namespace std;



void cargarArray (float numerosACalcular);   
float calcularArray(float numerosACalcular[20]);


int main()
{
    float numeros[20];
    
    
    cargarArray(numeros);

    system("cls");

    cout<<"El promedio es: " << promedioCalcular(numeros)<<endl;

    

    system("pause");
    return 0;
}




void cargarArray(float numeroACalcular [20]){
    for (int i = 0; i < 20; i++){
        cout<<"Ingrese un numero "<< i + 1<<endl;
        cin>>numeroACalcular[i];
    }
}   


void promedioCalcular(float numerosACalcular[20]){
    float numeros = 0;
    float promedio = 0;

    for (int i = 0; i < 20; i++){
        numeros += numerosACalcular[i];
    }   

    promedio = numeros / 20;

    return promedio;
}