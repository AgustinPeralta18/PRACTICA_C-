/*   5.	Realizar una aplicación que pueda cargar 20 nombres de usuario en un procedimiento. 
Luego en otro procedimiento retornar la cantidad de cada letra que existe en todos los nombres 
y determinar cuál es la letra que más se repite. Utilizar todos los subprogramas y funciones necesarios.
/*/

#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <time.h>
using namespace std;

struct Usuarios {
    char nombre[20]; // maxima cantidad de caracteres para el nombre.
};
void carga(struct Usuarios arreglo[2]);
void mostrarUsuarios(struct Usuarios arreglo[2]);

int main() {
    
    struct Usuarios arreglo[2];
    carga(arreglo);
    mostrarUsuarios(arreglo);
    return 0;
}

void carga(struct Usuarios arreglo[2]){
    for (int i = 0; i < 2; i++) {
        cout << "Ingrese nombre: " << endl;
        cin >> arreglo[i].nombre;
    }
}

void mostrarUsuarios(struct Usuarios arreglo[2]){
    for(int j = 0; j < 2; j++){
        cout << "Usuario "<< j+1 << ": " << arreglo[j].nombre << "\t";
    }
    cout << endl;
}



