/* 
	Laboratorio I 
	TP No 2
	Ejercicio 10: Adivinanza
	10.	Realice un programa que permita jugar a adivinar un n�mero entero 
	(indicando los aciertos individuales con Bueno, Regular y Malo). 
	Ejemplo: n�mero a adivinar: 3526.  Intento: 1356. Resultado: 1 Bueno, 2 Regular, 1 Malo.
	Es decir, se est� indicando que hay un n�mero correcto en valor y posici�n: es el "6".  
	Adem�s, se est� indicando que hay dos n�meros correctos en valor pero NO en posici�n: son el "3" y el "5". 
	Y por �ltimo, que hay un n�mero incorrecto: el "1".  

	Autor: Lic. Francisco Javier Gonz�lez del Solar, y los pibes!
*/

#include<iostream>
using namespace std;


int main() {
	
	int adivinar = 3526;
	int intento = 1356;
	
//    int mil, cen, dec, num, res, uni;
//	  num = 876;
//    cen = (num-(num%100))/100;
//    res = num%100;
//    dec = (res-(res%10))/10;
//    uni = res%10;

	
	int admil, adcen, addec, adnum, adresmil, adrescen, aduni;
	
	admil = (adivinar - (adivinar % 1000)) / 1000; 
	adresmil = adivinar % 1000;
	adcen = (adresmil - (adresmil % 100)) / 100;
	adrescen = adivinar % 100;
	addec = (adrescen-(adrescen%10))/10;
    aduni = adrescen%10; 
	
	
//	adresmil = adivinar % 1000;
//	adcen = (adresmil - (adresmil % 100)) / 100;
//	adrescen = adcen % 100;
//    addec = (adrescen - (adrescen % 10)) / 10;
//    aduni = adrescen%10;	
//	
	cout << "Un. de mil : " << admil << endl;
    cout << "Centena : " << adcen << endl;
    cout << "Decena : " << addec << endl;
    cout << "Unidad : " << aduni << endl;
    return 0;
}       



//1234
//
//adivina
//
//9999 4 malos
//
//9991 3 malos 1 regular
//
//1924 1 malo 2 bueno 1 regular
