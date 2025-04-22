#include <iostream>
using namespace std;

/**
Hacer un programa que permita el ingreso la edad de un usuario hasta que se
ingrese una edad válida (mayor o igual a 18).


do{

	/// BLOQUE DE REPETICION

}while(condicion)

-ejecuta el bloque de codigo
-evalua la condicion
- si es verdadera, ejecuta el bloque de codigo nuevamente
- se repite hasta que la condicion sea falsa

SE EJECUTA UNA VEZ, AUNQUE LA CONDICION SEA FALSA.

*/

int main() {
	
	int edad;
	
	do{
		cout << "Ingrese edad: ";
		cin >> edad;
		
	}while( (edad < 18) || ( edad > 60) );
	
	cout << "Le edad ingresada fue: " << edad << endl;

}

