/* 3.	Desarrolle una Función que devuelva el salario mensual de un trabajador si se tienen 
como datos el número de horas trabajadas, el precio de la hora y además se sabe que se le descuenta el 
10% por concepto de caja de ahorro. Pasar por valor las horas, el precio por hora y el descuento.

/*/
#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <time.h>
using namespace std;


int main()
{
    int  descuentoCaja, totalDias, totalMes,diasTrabajados,totalHoras;
    float precioHora, salarioMensual, horasTrabajados;

    totalDias = totalPorDia(precioHora, horasTrabajados);

    return 0;
}


int totalPorDia (int precioHora, int horasTrabajados){
    
    float totalHoras, totalMes, totalDescuento;
    int diasTrabajados;
    precioHora = 100;
    
    cout<<"Ingrese horas trabajadas"<<endl;
    cin>>horasTrabajados;
    cout<<"Ingrese dias trabajados"<<endl;
    cin>>diasTrabajados;
    
    totalHoras = precioHora * horasTrabajados; 

    totalMes = diasTrabajados * totalHoras; 

    cout<<"Total Mes"<<totalMes<<endl;
    
    totalDescuento = totalMes * 10 / 100;

    cout<<"Total"<<totalDescuento;
}