/*3.	Cree un programa que permita cargar un array de 15 números. Luego ordenar los ascendente y 
descendentemente.
/*/

#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int numeros[15];
    int guardar;
    srand(time(NULL));
    for (int i = 0; i < 14; i++){
        numeros[i] = 1+rand()%(100-1);   
    }
    
    for (int j = 0; j < 14; j++){
        for (int t = 0; t < 14; t++){
            if (numeros[j] < numeros[t]){
                guardar = numeros[t];
                numeros[t] = numeros[j];
                numeros[j] = guardar;
            }
            
        }
        
        
    }
    
    cout<<"Ascendente:"<<endl;
    for (int x = 0; x<=14; x++){
        cout<<" "<<numeros[x];
    
    }

    cout<<endl<<"Descendente:"<<endl;
    for (int y = 14; y >= 0; y--){
        cout<<" "<<numeros[y];
    }



    return 0;
}

























