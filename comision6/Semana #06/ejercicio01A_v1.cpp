#include <iostream>
using namespace std;

/**
1A. Crear un programa que permita ingresar cinco
n�meros distintos entre s� y determinar y mostrar
el valor m�ximo de la lista. 

Variante: Mostrar tambi�n la posici�n en la que
se encontr� el n�mero m�ximo.

*/

int main() {
	
	/// DECLARACION DE VARIABLES
	int numero, maximo, posicion;
	
	/// FOR --> PARA PEDIR 5 NUMEROS
	for(int i = 1; i <= 5; i++){
		cout << "INGRESE #" << i << ": " ;
		cin >> numero;
		
		/// GUARDO EL PRIMER NUMERO
		if(i==1){
			maximo = numero;
			posicion = i;
		}
		else{
			if(numero > maximo){
				maximo = numero;
				posicion = i;
			}
		}
	}
	cout << "MAXIMO: " << maximo << " en la posicion: "<< posicion << endl;
	
	return 0;
}

