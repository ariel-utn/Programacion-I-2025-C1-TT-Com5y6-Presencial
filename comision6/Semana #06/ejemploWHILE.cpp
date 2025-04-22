#include <iostream>
using namespace std;

/**
Hacer un programa que permita el ingreso una lista de numeros
enteros, que finaliza cuando se ingresa un 0.

Se pide contar la cantidad de numeros pares ingresados.


	while(condicion){
		// codigo a ejecutar mientras la condicion sea verdadera
	}

	
	- evalua la condicion
	- si es verdadera, ejecuta el bloque de codigo
	- luego vuelve a evaluar la condicion
	- se repite hasta que la condicion sea falsa

	SI LA CONDICION ES FALSA DESDE EL PRINCIPIO, NUNCA SE EJECUTA.

*/

int main() {
	int numero, cantidadPares;
	
	cout << "INGRESE #: ";
	cin >> numero; 
	
	cantidadPares = 0;
	while(numero != 0){
		
		if(numero%2==0){
			cantidadPares++;				
		}
		
		cout << "INGRESE #: ";
		cin >> numero; 
	}
	
	cout << "Se ingresaron " << cantidadPares << " numeros pares" << endl;
	return 0;
}

