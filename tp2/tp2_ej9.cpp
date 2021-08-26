
/*
9.	Realizar un algoritmo que permita a una máquina expendedora de gaseosas realizar su venta diaria. 
La máquina se carga con una cierta cantidad latas de gaseosa de distintos tipos para poder venderlas a un determinado precio (3.50$). 
Permite recibir monedas de 1$ y 50 centavos y da el vuelto cuando corresponda. 
Tiene un visor en donde va informando los distintos momentos: 
“Ingrese monedas para recibir la bebida”, “Elija la bebida”, “Retire su bebida”, “Retire su vuelto”, “Disculpe, no hay más bebidas”.
/*/


#include<iostream>
using namespace std;

//Expendedora de bebidas.

#include <iostream>
using namespace std;
int main(){

float valorBEB, vueltoBEB, pago;
int gaseosa, monedas1, monedas50;


    //Entrada
    cout<<"Todas las bebidas tienen un valor de $3.50."<<endl;
    cout<<"1: Pepsi 2: Fanta 3: coca cola 4: manaos"<<endl;
    cin>>gaseosa;
    cout<<"Ingrese las monedas de 1 ."<<endl;
    cin>>monedas1;
    cout<<"Ingrese las monedas de 50c"<<endl;
    cin>>monedas50;

    pago = (monedas1 * 1) + (monedas50 * 0.50);
  

    //Proceso
    if (pago == 3.50){
        cout<<"Gracias por el pago exacto."<<endl;
         switch(gaseosa){
            case 1: 
             cout<<"Disfrute su Pepsi"<<endl;
            break;

            case 2:
            cout<<"Disfrute su Fanta"<<endl;
            break;

            case 3:
            cout<<"Disfrute su coca cola"<<endl;
            break;

            case 4:
            cout<<"Disfrute su manaos"<<endl;
            break;
        }
    }
    if (pago > 3.50){
    vueltoBEB = pago - 3.50;
    cout<<"Su vuelto es de: "<<vueltoBEB<<" pesos "<<endl;
       switch(gaseosa){
            case 1: 
             cout<<"Disfrute su Pepsi"<<endl;
            break;

            case 2:
            cout<<"Disfrute su fanta"<<endl;
            break;

            case 3:
            cout<<"Disfrute su coca cola"<<endl;
            break;

            case 4:
            cout<<"Disfrute su manaos"<<endl;
            break;
}





    return 0;
}
















