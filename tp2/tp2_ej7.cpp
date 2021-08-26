
/*7.	Crear un programa que lea un número y calcule la sucesión Fibonacci hasta el valor anterior más cercano al mismo y 
el valor posterior más próximo. Realice este ejercicio utilizando primero un bucle for y posteriormente repita el ejercicio 
utilizando un bucle while.
/*/




#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int n, x=0, y=1, z=1;

    cout<<"Digite el numero de elementos: ";
    cin>>n;

    for (int i=1; i<=n; i++){
        z = x + y;
        cout<<z<<" ";
        x = y;
        y = z;

    }

    return 0;
}
























