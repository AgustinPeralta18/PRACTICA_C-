

//1Desarrolle un programa para que una inmobiliaria decida si invertir en una propiedad (o no) seg�n: la ubicaci�n, el precio, 
//si es casa o departamento y si tiene cochera.  Si est� en Godoy Cruz, y el precio es de hasta 70000$, invierte sin dudar(no importa nada m�s). 
//En cambio, si el precio es mayor, s�lo invierte si tiene cochera y es casa, caso contrario, no invierte. Si el precio es menor, 
//debe ir a visitarla y averiguar m�s datos. 


#include<iostream>
using namespace std;

int main() {
	
 int ubicacion, precio, departamento, cochera,casa_dpto,opcion ;
 float precio_1, precio_2, casa;
 
 
 cout<<"Ingrese la ubicacion en la que quiere invertir"<<endl;
 cout<<"Godoy Cruz [1]"<<endl;
 cout<<"Ciudad [2]"<<endl;
 cout<<"Las Heras [3]"<<endl;
 cout<<"Salir [4]"<<endl;
 cin>>ubicacion;
 
 
 switch(ubicacion){
    case 1:
	    cout<<"La ubicacion que usted eligio es Godoy Cruz"<<endl;
	    cout<<"Ingrese precio";
	    cin>>precio_1;
	    if (precio_1 = 70000 ){
	    	cout<<"Invierte sin dudar"; 
	    }
		else if (precio_1 > 70000){
			cout<<"La casa tiene cochera? si [1] no [2]";
			cin>>cochera;
				if (cochera == 1){
				cout<<"Tiene cochera invierte";
			}
			else if (cochera == 2){	
				cout<<"No invierte";
			}			
			if (precio_1 < 70000){
			  cout<<"Debe ir a visitarla y averiguar mas datos";	 
			}
		}
		
			break;
	case 2:
		cout<<"La ubicacion que usted eligio es Ciudad"<<endl;
		cout<<"Ingrese precio";
		cin>>precio_2;
			if (precio_2 > 100000){
				cout<<"No invierte";
			}	
			else if (precio_2 < 100000){
				cout<<"Es casa? [1] departamento [2]";
				cin>>casa_dpto;
					if (casa_dpto == 1){
			cout<<	"invierte";
			} 
			else if (casa_dpto == 2){
				cout<<"tiene cochera [1] no tiene [2]";
				cin>>cochera;
			 	if (cochera == 1){
				    cout<<"invierte"; 
				} 
				else if (cochera == 2){
			        cout<<"debe averiguar si hay cocheras proximas";
			    }
			} 
				
			}
				break; 
	case 3:
		cout<<"La ubicacion que usted eligio es Las Heras";	 
		cout<<"es departamento o casa? departamento [1] casa [2]";
		cin>>casa_dpto;
		if (casa_dpto == 1){
			cout<<	"es departamento, tiene cochera? si [1] no [2] ";
			cin>>cochera;
			if (cochera == 1){
		    cout<<"invierte";
		    }
		    else if (cochera == 2){
		  	cout<<"no invierte"; 
			}
		} else if (casa_dpto == 2){
			cout<<"no invierte";   
		} 
				
			  
		 
		break;
	default: cout<<"opcion incorrecta";break;
	}	

return 0;
 }
 
 
 
 
 
 
 
 
 
 	
	
	
	
	


