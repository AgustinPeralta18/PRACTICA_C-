/*11.	Crear un programa llamado vendedores que cree un array de 5 x 10 indicando que poseemos una empresa 
de 5 vendedores cada uno de los cuales vende 10 productos.
El array almacena los ingresos obtenidos por cada vendedor en cada producto, de modo que un menú permite 
almacenar los ingresos. Al final obtener:
•	Revisar el total de cada vendedor y obtener los ingresos totales. 
•	Determine qué persona fue la que más vendió y la que menos vendió.
/*/ 


#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


int main(int argc, char const *argv[])
{
    srand(time(NULL));
    float arrayVendedores[5][10], totalVendido, total[5][5];
    float max, min;
    float vendedores;
    int i, j;
    totalVendido = 0;

    
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 4; j++){
            vendedores = rand() % 100;
            arrayVendedores[i][j] = vendedores; //j= vendedores i=vendido
        }
    }
    
    
    for (int i = 0; i < 5; i++){
        cout<<" VENDEDOR NUMERO " << i + 1 <<endl;
        for (int j = 0; j < 10; j++){
            cout<<" VENDIO "<< arrayVendedores[5][10] <<" /t ";
            totalVendido = totalVendido + arrayVendedores[i][j];
        }
        total[i][i] = totalVendido;
        totalVendido = 0;
    }

    max = 0; 
    min = total[0][0];

    for (int i = 0; i < 5; i++){
        if (total[i][i] > max){
            max = total [i][i];
        }
        if (total[i][i] < min){
            min = total [i][i];
        }
    }  
    
    for (int i = 0; i < 5; i++){
        if (max == total[i][i]){
            cout<<" VENDEDOR NUMERO "<< i+1 <<" FUE EL QUE MAS VENDIO "<<total[i][i]<<endl;
        }
        if (min == total[i][i]){
            cout<<" VENDEDOR NUMERO "<< i+1 <<" FUE EL QUE MENOS VENDIO "<<total[i][i]<<endl;
        }
        
        
        
    }
    




    

    










    return 0;
}




