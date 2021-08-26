/*6.	Realizar una aplicación donde existen 3 tipos de usuario (Administrador, Editor, Lector), 
el administrador puede crear usuarios, borrar usuarios, ver todos los usuarios, crear notas, borrar notas 
y ver todas las notas. El Editor solo puede ver las notas y crearlas. El lector solo puede ver las notas.
Realizar un arreglo de usuarios, un arreglo de notas. Un procedimiento para mostrar todos los usuarios y
uno para mostrar todas las notas, pasando el arreglo de usuarios y notas respectivamente. Una función que 
elimine un elemento del arreglo y retorne 1 si se pudo eliminar y 0 si no se pudo eliminar. Realizar una 
función que permita hacer el cambio de tipo de usuario para que pueda desplegarse cada una de las opciones
del menú.
/*/


#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <time.h>
using namespace std;


void crearUsuarios (char usuarios[10]){

    for (int i = 0; i < 10; i++){
        cout<<"Ingrese usuarios "<<endl;
        cin>>usuarios[i]; 
        cout<<"Usuario: "<<usuarios<<endl;
    }
    

}   