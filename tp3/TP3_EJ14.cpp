
/*14.	Diseña un programa para realizar la conversión de números en base decimal entre 0 y
32000 a base hexadecimal. Para ello el algoritmo tendrá como:
• Datos de entrada: Un número entero positivo entre 0 y 32000 cualquiera dado por el usuario. 
El programa deberá verificar que el número entrado cumple esas condiciones.
• Datos de salida: Impresión en pantalla de un array de caracteres que contenga el equivalente 
en base hexadecimal del número entrado. Este array deberá estar formado por un máximo de cuatro elementos 
(dígitos) que pueden ser cifras entre 0 y 9 y letras entre A y F.
/*/

#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
using namespace std;

string aHex(int numeroDecimal);

int main() {

    int numeroIngresado, dimension = 4, i;
    string conversionHex;
    char arreglo[dimension + 1];
    
    do {
        cout << "Ingrese un numero entre 0 y 32000, para convertirlo en hexadecimal." << endl;
        cin >> numeroIngresado;

    } while(numeroIngresado < 0 || numeroIngresado > 32000);

    conversionHex = aHex(numeroIngresado);
    strcpy(arreglo, conversionHex.c_str());

    cout << "Numero convertido a hex: " << endl;

    for (i = 0; i < dimension; i++) {
        cout << arreglo[i];
    }
    cout << endl;
    return 0;
}

string aHex(int numeroDecimal) {

    stringstream numeroHex;
    numeroHex << hex << numeroDecimal;
    string resultado(numeroHex.str());

    return resultado;
    
}

























