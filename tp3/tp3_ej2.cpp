/*2.	Crear un programa que cree un array con 100 letras mayúsculas aleatorias y
 que cuenta cuántas veces aparece cada letra en el array
/*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

char letras[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','0T','U','V','W','X','Y','Z'};
char cargaAleatoria[100];
int i, j, auxiliar, contador, q;

for (int i=0; i<100; i++){

    auxiliar = rand() % 26;
    cargaAleatoria[i] = letras[auxiliar];

    cout<<cargaAleatoria[i]<<"/t";


}

do { //contador    
        for (int q=0;q<100;q++) {
            if (abecedario [p] == letras [q] ) { 
            cont=cont+1;
            }
        }
        cout<<abecedario [p]<<" aparece "<<cont<<" veces"<<endl; 
        contador=0;
        q++;
    
} while (p<26);








