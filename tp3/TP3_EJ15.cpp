/*15.	Diseña una función que, dados dos vectores ordenados devuelva otro vector sea la mezcla de ambos.
/*/



#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[])
{

   int arrayA [5]= {'1','2','3','4','5'};
   int arrayB [5]= {'6','7','8','9','10'};
   int arrayC [10];

   for (int i = 0; i < 5; i++){
       arrayC[i]=arrayA[i];
   }
   for (int i = 0; i < 5; i++){
       arrayC[i + 5] = arrayB[i];
   }
   

    
    cout << "Resultado del mix: " << endl;

    for (int i = 0; i < 10; i++) {
        cout << arrayC[i] << "\t";
    }

    cout << endl;






















    return 0;
}
