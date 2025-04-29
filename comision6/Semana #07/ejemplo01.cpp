#include <iostream>
using namespace std;

/**
	Usamos WHILE o DO-WHILE, cuando en tiempo de compilacion no conocemos
	la cantidad de repeticiones.

	WHILE: es una estructura de repeticion o ciclo que sirve para
	ejecutar un bloque de codigo mientras la condicion sea verdadera.

	Usamos una variable, llamada centinela, que nos avisa cuando finaliza
	nuestro ciclo. La variable centinela nunca debe ser considerada dentro
	los calculos

	while(--condicion--){
	
		/// BLOQUE DE CODIGO
	
	}
		
	1- Evalua una condicion
	2- Si la condicion es verdadera ejecuta el bloque de codigo
	3- Se repite mientras la condicion sea verdadera
	4- Cuando la condicion sea falsa, salimos del ciclo

	DO-WHILE: es otra estructura de repeticion, similar al WHILE
	pero con una diferencia importante:

	do{

	/// BLOQUE DE CODIGO

	}while(--condicion--);

	1- Ejecuta al menos la primera vez el bloque de codigo.
	2- Evalua si la condicion es veradera.
	3- Vuelve a ejecutar el bloque de codigo hasta que
	4- La condicion sea falsa. Sale del ciclo.

*/


int main() {
	
	/**
	int numero;
	
	cout << "Ingrese #: ";
	cin >> numero;
	
	while(numero != 0){
		
		cout << "El numero ingresado es: " << numero << endl;
		
		
		/// SIEMPRE AL FINAL DEL WHILE LEO EL SIGUIENTE DATO
		cout << "Ingrese #: ";
		cin >> numero;
	}
	
*/
	

	int edad;
	
	do{
		cout << "Ingrese edad: ";
		cin >> edad;
		
	}while (edad < 18);
	
	
	return 0;
}

