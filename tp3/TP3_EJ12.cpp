/*12.	Cree un programa para comprar boletos de autobús, este marca los asientos ocupados con un "1" y los 
desocupados con "0". Mostrar por pantalla los asientos ocupados 
y los libres siguiendo la siguiente forma:
Distribución de asientos.

1	2	Pasillo	3
4	5	Pasillo	6
7	8	Pasillo	9
10	11	Pasillo	12
13	14	Pasillo	Esc
15	16	Pasillo	Esc
17	18	Pasillo	Esc
19	20	Pasillo	21
…	…	Pasillo	…
		Pasillo	
		Pasillo	
		Pasillo	
		Pasillo	
		Pasillo	
		Pasillo	
		Pasillo	
		Pasillo	

/*/


#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){

    string asientos[20][5];
    int numeroAleatorio, vendidos;

    vendidos = 0;
    numeroAleatorio = 0;

    srand(time(NULL));

    cout << endl;
    cout << "1" << "\t" << "2" << "\t"<< "Pass" << "\t" << "3" << endl << endl;

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == 2) {
                asientos[i][j] = ".";
            } else if (j != 2 && j != 4) { 
                 // carga de 0 o 1, aleatoreamente
                numeroAleatorio = 1 + rand() % 10;
                if (numeroAleatorio % 2 == 0) {
                    asientos[i][j] = to_string(0);
                } else {
                    asientos[i][j] = to_string(1);
                }
                numeroAleatorio = 0;

            } else if (j == 4) {
                asientos[i][j] = to_string(i + 1);
            }
            cout << asientos[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 4; j++) {
            if (asientos[i][j] == "1") {
                vendidos++;
            }
        }
    }
    cout << endl;
    cout << "Cantidad de asientos vendidos: " << vendidos << endl;

    return 0;
}












