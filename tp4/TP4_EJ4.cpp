/*   4.	Desarrollar un programa que solicite la carga de 10 notas en un procedimiento. 
Luego otro procedimiento que devuelva todas las notas mayores al número que se le pase al procedimiento.
/*/

#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <time.h>
using namespace std;

void cargarNotas (int notas[100], int tamanio);
void mostrarNotas (float arregloNotas[100], int nroUsuario, int limitador );

int main(){
    
   int numeroMayor, cantNotas=10;
   float notas[ cantNotas];

    cargarNotas( notas, cantNotas);
    do{
        cout<<"A partir de que nota quiere ver? "<<endl;
        cin>>numeroMayor;
        if (numeroMayor>10 || numeroMayor<0){
            cout<<"numero ingresado incorrecto"<<endl;
        }
        
    } while (numeroMayor>10 || numeroMayor<0);
    mostrarNotas(notas, numeroMayor, cantNotas);
    
    return 0;
}



void cargarNotas (float notas[100], int tamanio) {
    int cantNotas;
    cout<<"CARGA DE NOTAS"<<endl;
    for (int i = 0; i < tamanio; i++){
        do{
        cout<<"alumno"<<endl;
        cin>>notas[i];
            if (notas[i]>10 || notas[i]<0 ){
                cout<<"Numero ingresado erroneo, tiene que ingresar un numero entre el 0 y el 10"<<endl;
            }
        } while (notas[i]>10 || notas[i]<=0);
    }
}



void mostrarNotas (float arregloNotas[100], int nroUsuario, int limitador ){

    for (int i = 0; i < limitador; i++){
        if (nroUsuario>arregloNotas[i]){
            arregloNotas[i]=0;
        }
    }
    
    for (int i = 0; i < limitador; i++){
        if (arregloNotas[i]>nroUsuario){
            cout<<"notas"<<arregloNotas[i]<<endl;
        }
        
    }
    


}