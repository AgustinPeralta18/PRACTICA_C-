//	Ingresar un n�mero natural n e indicar si es primo.

#include<iostream>
using namespace std;

int main(){
	
	int num, i;
		
	cout<<"Ingrese el numero: ";
	cin>>num;
	
	if (num == 1)	
		cout<< "El numero no es primo"<<endl;
		
	for (i = 2; i < num; i++)
	{

    	if (num % i == 0)
    	{
        	cout << "El numero no es primo"<<endl;
        	break;
    	}
    	
	}
	if (i == num)
		cout<< "El numero es primo"<<endl;
	
	
system("pause");
	
	
	
}
