/*
Desarrolle un programa que le informe al farmacéutico el porcentaje de descuento a aplicar a los afiliados a una Obra Social.
Sabiendo que si el afiliado tiene Plan A, todas las recetas que presente tendrán un descuento del 100%. 
En el caso que se trate de un Plan B o C, el afiliado tendrá un descuento del 90%; y si es Plan D un 50%.
Para el resto de los planes, sólo tendrá el 25%. Si el afiliado paga en efectivo, 
la farmacia lo beneficia con el descuento del 5% más el descuento antes citado.

/*/


#include<iostream>
using namespace std;

int main(){

    int plan,opciones,efectivo; 
    cout<<"Quiere iniciar el programa? Si [1] No [2]"<<endl;
    cin>>plan;


    switch (plan){
    case 1:
        cout<<"ingrese plan de afiliado"<<endl;
        cout<<"Si tiene plan A [1]"<<endl;
        cout<<"Si tiene plan B y C [2]"<<endl;
        cout<<"Si tiene plan D [3]"<<endl;
        cin>>opciones;
        if (opciones == 1){
            cout<<"Usted tiene 100% de descuento en las recetas que presente";
        }
        else if (opciones == 2){
            cout<<"Usted tiene 90% de descuento en las recetas que presente";
        }
        else if (opciones == 3){
            cout<<"Usted tiene 25% de descuento en las recetas"<<endl;
            cout<<"Usted paga en efectivo? si [1] no [2]"<<endl;
            cin>>efectivo;
            if (efectivo == 1){
                cout<<"Usted tiene un beneficio del 5%";
            }
            else if (efectivo == 2){
                cout<<"Usted solo tiene el beneficio del 25%";
            }
            
            
        }
    case 2:
        cout<<"Saliendo";
        break;
    
    default: 
        cout<<"Caracter no reconocido";
        break;
    }
    
    return 0;
}


























