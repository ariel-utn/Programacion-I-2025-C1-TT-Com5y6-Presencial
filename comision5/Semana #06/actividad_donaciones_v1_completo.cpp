#include <iostream>
using namespace std;

/**
Ejercicio:

Se organiza una colecta con el objetivo de recaudar fondos para un club. La meta
es reunir 500.000 pesos, y cualquier persona puede colaborar aportando la suma de 
dinero que desee.

Por cada donación, se registrará el monto donado. No se conoce de antemano la 
cantidad de personas que participarán, pero se ha establecido que, una vez 
alcanzado el objetivo de 5 mil pesos, no se aceptarán más donaciones.

Se solicita desarrollar un programa que permita ingresar los montos de las 
donaciones conforme a las condiciones mencionadas, y que al finalizar el proceso
muestre la siguiente información:

A) La cantidad total de donaciones registradas.
B) El monto de la donación más alta realizada.
C) El total recaudado.
D) La cantidad de donaciones que superaron el 1% de la deuda (es decir, más de
$50).

*/

int main() {
	
	/// DECLARACION DE VARIABLES
	float monto;
	
	/// PTO C;
	float totalRecaudado;
	
	/// PTO A
	int cantidadDonaciones;
	
	/// PTO B
	float maximaDonacion;
	
	/// PTO D
	int cantidadDonacionesMayores50;
	
	cantidadDonaciones = 0;
	maximaDonacion = 0;
	totalRecaudado = 0;
	cantidadDonacionesMayores5000 = 0;
	do{
		cout << "Ingrese monto: ";
		cin >> monto;
		
		/// PTO A
		cantidadDonaciones++;
		
		/// PTO B
		if(monto > maximaDonacion){
			maximaDonacion = monto;
		}
		
		if(monto > 5000){
			cantidadDonacionesMayores50++;
		}
		
		totalRecaudado+= monto;
		
	}while(totalRecaudado < 500000);
	
	/// PTO A
	cout << "Cantidad de donaciones: " << cantidadDonaciones << endl;
	/// PTO B
	cout << "Maxima donacion $: " << maximaDonacion << endl;
	/// PTO C
	cout << "Total recaudado $: " << totalRecaudado << endl;
	/// PTO D
	cout << "Cantidad donaciones mayores a $50: " << cantidadDonacionesMayores50 << endl;
	
	
	return 0;
}

