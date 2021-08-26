/*Codificación (80%)
Se desea implementar un Sistema de Facturación.
Se ingresa el código de producto (que puede ser ‘a’, ‘b’ o ‘c’) seguido de la
cantidad de unidades y el precio.
Este proceso se repite hasta que se termina de facturar (al final del día) cuando
la cantidad sea cero y el precio también.
Se desea obtener un reporte por pantalla, que indique:
 Cantidad total de unidades vendidas por código a lo largo del
día(cuántas a, b, c)
 El total recaudado a lo largo del día
 El importe de la venta promedio
Por cada venta realizada, informar el total a pagar, agregando el 21% de
IVA
/*/

/* AGUSTIN PERALTA
113215
/*/


#include <iostream>
using namespace std;


int cant, precio, unidades; 

int main()
{   char codigo, total, venta_prom, venta;
    float precio;
    int cantidad, contador_A, contador_B, contador_C;
    

    do{   
        char codigo;
        float precio;
        int cantidad,total,iva=0.21,venta_prom;
        cout<<"Sistema de facturacion"<<endl;
        cout<<"Ingrese el codigo del producto"<<endl;
        cout<<"A"<<endl;
        cout<<"B"<<endl;
        cout<<"C"<<endl;
        cin>>codigo;
        
        cout<<"Ingrese precio"<<endl;
        cin>>precio;
        
        cout<<"Ingrese cantidad"<<endl;
        cin>>cantidad;

        total = cantidad * precio;

        cout<<"TOTAL:"<<total<<endl;

        

        venta_prom = total * iva;

        cout<<"TOTAL CON IMPUESTOS ES DE:"<<venta_prom<<endl;

        
        cout<<"Sistema de facturacion"<<endl;
        cout<<"Ingrese el codigo del producto"<<endl;
        cout<<"A"<<endl;
        cout<<"B"<<endl;
        cout<<"C"<<endl;
        cin>>codigo;
        
        cout<<"Ingrese precio"<<endl;
        cin>>precio;
        
        cout<<"Ingrese cantidad"<<endl;
        cin>>cantidad;

        total = cantidad * precio;

        cout<<"TOTAL:"<<total<<endl;

        

        venta_prom = total * iva;

        cout<<"TOTAL CON IMPUESTOS ES DE:"<<venta_prom<<endl;


        char codigo;
        float precio;
        int cantidad,total,iva=0.21,venta_prom;
        cout<<"Sistema de facturacion"<<endl;
        cout<<"Ingrese el codigo del producto"<<endl;
        cout<<"A"<<endl;
        cout<<"B"<<endl;
        cout<<"C"<<endl;
        cin>>codigo;
        
        cout<<"Ingrese precio"<<endl;
        cin>>precio;
        
        cout<<"Ingrese cantidad"<<endl;
        cin>>cantidad;

        total = cantidad * precio;

        cout<<"TOTAL:"<<total<<endl;

        

        venta_prom = total * iva;

        cout<<"TOTAL CON IMPUESTOS ES DE:"<<venta_prom<<endl;

        switch (expression){
        case a: 
            contador_a = contador_a + 1;
            cantidad_a = cantidad_a + cantidad; 
            break;
        case b:
            contador_b = contador_b + 1;
            cantidad_b = cantidad_b + cantidad;
            break;

        case c:
            contador_c = contador_c + 1;
            cantidad_c = cantidad_c + cantidad;
            break; 
            
        
        default:
            break;
        }
        










        /*  


        Los condicionales Switch, son una estructura de control condicional
        los archivos de cabecera son los parametros del codigo


        /*/ 






    } while (cantidad == 0 || precio == 0 );
    















    return 0;
}

















