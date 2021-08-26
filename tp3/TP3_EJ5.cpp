/*
5.	Determinar cuál es el número que más se repite en un array.
/*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int numero[] = {10,10,10,10,3,4,5,6,2,8};
    int comparacion[10];
    int acumulador = 0;
    int historial[10];

    
    for (int i = 0; i < 14; i++){
        historial[i]= 0 ;
        acumulador = acumulador + 1;  
        comparacion[i] = acumulador;  
    }

    for (int t = 0; t <= 9; t++){
        int cont = 0;
        for (int j = 0; j <= 9; j++){
            if (comparacion[t] == numero[j]){
                cont = cont+1;
                if (cont > 1){
                    historial[t]= cont - 1;
                }
                
                
            }
        }
        
        if (historial[t] > 1){
        cout<<"el numero "<<comparacion[t]<<"se reitera "<<historial[t]<< "veces"<< endl;
        }
    }















       
 return 0;
}





























