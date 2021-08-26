/*2.	Una Agencia de viajes ha implementado un nuevo sistema de regalos a los clientes que contraten sus 
servicios.
Se desea un programa que indique, dado el pedido del cliente, cuál es regalo asignado por la empresa.
-Si se trata de un viaje a algún lugar dentro de la provincia; para 1 o 2 personas, 
se le regalará entradas a un espectáculo; .   
-Si en cambio fuera un viaje fuera de la provincia (pero dentro de Argentina); 
para 1 o 2 personas; menos de 7 días, 1 día más de estadía;caso contrario, excursiones gratis. 
-Si fueran 3 o más personas, y menos de 7 días, descuentos a espectáculos, 
para más días, serán excursiones gratis.
-Si el viaje fuera al exterior; para 1 o 2 personas, hasta 7 días se le dará 1 un juego completo de valijas; 
para más días, excursiones gratis
-. Para el resto de los viajes al extranjero; 7 o más días se les darán cupones de descuento; 
menos de 7 días se les entregará un juego completo de valijas.

/*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {

    int lugar,personas,estadia,dias;
    cout<<"Ingrese su tipo de viaje para recibir su regalo de la empresa"<<endl;
    cout<<"Si se trata de un viaje a algun lugar dentro de la provincia [1]"<<endl;
    cout<<"Si se trata de un viaje a algun lugar fuera de la provincia [2]"<<endl;
    cout<<"Si se trata de un viaje al exterior [3]"<<endl;
    cin>>lugar;

    switch (lugar){
    case 1:
        cout<<"Para cuantas personas es el viaje?"<<endl;
        cout<<"1 o 2 personas [1] (unica opcion)"<<endl;
        cin>>personas;
        if (personas == 1){
        cout<<"Felicitaciones se le regalara entradas para un espectaculo";
        }
        break;
    case 2:
        cout<<"Para cuantas personas es el viaje?"<<endl;
        cout<<"1 o 2 personas [1]"<<endl;
        cout<<"3 personas o mas [2]"<<endl;
        cin>>personas;
        if (personas == 1){
            cout<<"Cuantos dias de estadia?"<<endl;
            cout<<"menos de 7 dias [1]"<<endl;
            cout<<"mas de 7 dias [2]"<<endl;
            cin>>estadia;
            if (estadia == 1){
            cout<<"Felicitaciones se le regalara un dia mas de estadia";
            }
            else if (estadia == 2){
            cout<<"Felicidades se le regalaran excursiones gratis";
            }  
        }
        else if (personas == 2){
            cout<<"Cuantos dias dura el viaje?"<<endl;
            cout<<"menos de 7 dias [1]"<<endl;
            cout<<"mas de 7 dias [2]"<<endl;
            cin>>dias;
            if (dias == 1){
            cout<<"Felicitaciones se le regalara descuentos a espectaculos";
            }
            else if (dias == 2){
            cout<<"Felicidades se le regalaran excursiones gratis";
            }  
        }
    case 3:
        cout<<"Para cuantas personas es el viaje?"<<endl;
        cout<<"1 o 2 personas [1]"<<endl;
        cout<<"3 o mas [2]"<<endl;
        cin>>personas;
        if (personas == 1){
            cout<<"Cuantos dias dura el viaje?"<<endl;
            cout<<"hasta 7 dias [1]"<<endl;
            cin>>dias; 
            if (dias == 1){
                cout<<"Felicitaciones se le regalara un juego completo de valijas";
            }
        }
        else if (personas == 2){
            cout<<"Cuantos dias dura el viaje?"<<endl;
            cout<<"menos de 7 dias [1]"<<endl;
            cout<<"mas de 7 dias [2]"<<endl;
            cin>>dias;
            if (dias == 1){
                cout<<"Felicitaciones se le regalara un juego completo de valijas";
            }
            else if (dias == 2){
                cout<<"Felicitaciones se le regalara cupones de descuento para todo el viaje";
            }
        }
        
                
    
        
         







        default:
        break;
    }























    /*if (lugar = 1){
    cout<<"Para cuantas personas es el viaje?"<<endl;
    cout<<"1 o 2 personas [1] (unica opcion)"<<endl;
    cin>>personas;
    }
    if (personas = 1){
        cout<<"Felicitaciones se le regalara entradas para un espectaculo";
        }
        if (lugar = 2){
        cout<<"Para cuantas personas es el viaje?";
        cout<<"1 o 2 personas [1]";
        cout<<"3 personas o mas [2]";
        cin>>personas;
        }
            if (personas = 1){
            cout<<"Cuantos dias de estadia?";
            cout<<"menos de 7 dias [1]";
            cout<<"mas de 7 dias [2]";
            cin>>estadia;
            if (estadia = 1){
            cout<<"Felicitaciones se le regalara un dia mas de estadia";    
        }
        else if (estadia = 2){
            cout<<"Felicidades se le regalaran excursiones gratis";
        }
        
    }/*/

    


    


    return 0;
}































