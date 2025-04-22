#include <iostream>
using namespace std;

/**
1B. Crear un programa que permita ingresar una lista de n�meros
distintos entre s�. La lista finaliza cuando el usuario ingresa
un 0 (cero). Se pide determinar el valor m�ximo de la lista. 
Variante: Mostrar tambi�n la posici�n en la que se encontr�
el n�mero m�ximo.

EJEMPLO: -10, -5, -8, -7, -20 

EJEMPLO:-20, -34, -11, 0, -50

*/

int main() {
	
	/// DECLARACION DE VARIABLES
	int numero, maximo, cuentaNumeros, posicion;
	
	cout << "Ingrese #: ";
	cin >> numero;
	
	cuentaNumeros = 0;
	while( numero != 0){
		
		cuentaNumeros++;
		if( (cuentaNumeros==1) || (numero > maximo))
		{
			maximo = numero;
			posicion = cuentaNumeros;
		}
	
		
		cout << "Ingrese #: ";
		cin >> numero;
	}

	cout << "MAXIMO: " << maximo << " en la posicion: "<< posicion << endl;
	
	return 0;
}

