
/*8.	Crear el programa asteriscos5 en el que se introduce un número entero y se crea una pirámide de asteriscos. 
Por ejemplo si se introduce el 6, el resultado sería:

      *
     ***
    *****
   *******
  *********
 ***********
/*/


#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int n;
    cout<<"introduzca de cuantas filas quiere hacer la piramide"<<endl;
    cin>>n;

    for (int i=0; i<=n; i++){
        for (int j = n; j > i; j--){
            cout<<" ";
        }
        for (int p=0; p<i; p++){ 
        cout<<" *";
        }
        cout <<endl;
    }

    return 0;
}


























