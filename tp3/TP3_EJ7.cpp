/*7.	Supongamos que tenemos dos cadenas de texto. Necesitamos un método que devuelva 
true si una cadena de texto está contenida dentro de otra. O sea, si tenemos un string “palanca”, 
y queremos saber si la cadena “pala” está contenida dentro de “palanca”, el método devolvería true,
 en caso contrario devolvería false.
/*/


#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

bool seEncuentra (string primerCadena, string segundaCadena){
    if (primerCadena.find(segundaCadena) != string::npos ) {
        cout<<"True";
    }
    else {
        cout<<"False";
    }


}

int main(int argc, char const *argv[])
{
    string primer, segunda;
    bool comparacion;

    cout<<" Ingrese primer cadena de palabras ";
    cin>>primer;
    cout<<" Ingrese comparacion ";
    cin>>segunda;

    comparacion = seEncuentra(primer, segunda);
    if (comparacion){
        cout<<" Se encuentra "<<endl;
    }
    else {
        cout<<" No se encuentra "<<endl;
    }

    return 0;
}





























