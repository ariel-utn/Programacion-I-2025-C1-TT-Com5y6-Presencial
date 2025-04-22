#include <iostream>
using namespace std;

/**
1A. Crear un programa que permita ingresar cinco
números distintos entre sí y determinar y mostrar
el valor máximo de la lista. 

Variante: Mostrar también la posición en la que
se encontró el número máximo.

EJEMPLO: -10, -5, -8, -7, -20 

EJEMPLO:-20, -34, -11, 0, -50

*/

int main() {
	
	/// DECLARACION DE VARIABLES
	int numero, maximo, posicion;
	
	/// FOR --> PARA PEDIR 5 NUMEROS
	for(int i = 1; i <= 5; i++){
		cout << "INGRESE #" << i << ": " ;
		cin >> numero;
		
		/// GUARDO EL PRIMER NUMERO
		if( (i==1) || (numero>maximo) ){
			maximo = numero;
			posicion = i;
		}
	}
	cout << "MAXIMO: " << maximo << " en la posicion: "<< posicion << endl;
	
	return 0;
}

