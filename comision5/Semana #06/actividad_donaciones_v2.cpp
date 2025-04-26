#include <iostream>
using namespace std;

/**
Ejercicio:

Se organiza una colecta con el objetivo de recaudar fondos para un club. La meta
es reunir 500.000 pesos, y cualquier persona puede colaborar aportando la suma de 
dinero que desee.

Por cada donaci�n, se registrar� el monto donado. No se conoce de antemano la 
cantidad de personas que participar�n, pero se ha establecido que, una vez 
alcanzado el objetivo de 500 mil pesos, no se aceptar�n m�s donaciones.

Se solicita desarrollar un programa que permita ingresar los montos de las 
donaciones conforme a las condiciones mencionadas, y que al finalizar el proceso
muestre la siguiente informaci�n:

A) La cantidad total de donaciones registradas.
B) El monto de la donaci�n m�s alta realizada.
C) El total recaudado.
D) La cantidad de donaciones que superaron el 1% de la deuda (es decir, m�s de
$5.000).

*/

int main() {
	
	/// DECLARACION DE VARIABLES
	float monto;
	float totalRecaudado = 0;
	
	while(totalRecaudado<500000){
		
		cout << "Ingrese $: ";
		cin >> monto;
		
		totalRecaudado+=monto;
		
	}
	
	return 0;
}

