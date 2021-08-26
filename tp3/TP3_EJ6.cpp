/*6.	Determinar si una cadena de texto es palíndromo. 
Es decir, que se lee igual de derecha a izquierda, que de izquierda a derecha. 
Por ejemplo: “NEUQUEN”, “SOMOS”.
/*/


#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    char cadena [100];
    char copia [100];

    cout<<"ingrese palabra"<<endl;
    cin>>cadena;

    for (int i = (strlen(cadena)-1); i >=0 ; i--){
        copia[strlen(cadena)-1-i]=cadena[i];
    }
    copia[strlen(cadena)]='\0';

    if (strcmp(cadena,copia)==0){
        cout<<"Es palindrona";
    } 
    else {
        cout<<"No es palindrona";
    }
    return 0;
}































