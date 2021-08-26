/*8.	Diseña una función lógica que dados dos vectores, devuelva true si son iguales y false en otro caso. 
Para este caso supondremos que dos vectores son iguales si contienen los mismos elementos y 
en el mismo orden relativo, suponiendo que el primer elemento sigue al último. 
Por ejemplo, si la entrada fuera:
/*/


#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;


    

int main(){

    char primer[5];
    char segundo[5];
    bool comparacion,exit;
    int cont;

    cont= 0;

    

    do{
        cout<<"Ingrese las primeras 5 palabras";
        cin>>primer[cont];
        cont++;
    } while (cont = 5);
    

    do{
        cout<<"Ingrese las primeras 5 palabras para comparar";
        cin>>segundo[cont];
        cont++;
    } while (cont = 5);

    comparacion = seCompara (primer,segundo);
    if(comparacion){
        cout<<"Los arrays efectivamente almacenan los mismos valores"<<endl;
    }else{
        cout<<"Estos valores no son los mismos del primer arreglo"<<endl;
    }
}

bool seCompara ( char primerVector, char segundoVector){
    int cont=0;
    for (int i = 0; i <= 4; i++){
        
        if (cont != 0){
            return false;
        }
        for (int j = 0; i <= 4; i++){
            if(primerVector[i] == segundoVector[j]){
                cont++;
            }
        }
        

    }
    return true;
    
}



































