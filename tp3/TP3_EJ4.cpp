/*4.	Cree un programa simple para sumar los valores de 2 vectores a y b y poner el resultado en un 
tercer vector c. Para ello sume los valores ubicados en la misma posición del primer y 
segundo vector y coloque el resultado en c, en la misma posición.
/*/

#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int tamanio = 5; 
    int vectorA[tamanio];
    int vectorB[tamanio];
    int vectorC[tamanio];

    for (int i = 0; i < tamanio; i++){
        cout<<"Ingrese el primer numero"<<endl;
        cin>>vectorA[i];
        cout<<"Ingrese el segundo numero"<<endl;
        cin>>vectorB[i];
        vectorC[i] = vectorA[i] + vectorB[i];
        cout<<"La suma de los vectores en la posicion "<< i + 3 << "es " << vectorC[i]<<endl;
    }
    
    return 0;
}
















































