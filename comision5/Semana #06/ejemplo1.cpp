#include <iostream>
using namespace std;

/**
Problema 1
Una agencia de viajes posee la informaci�n de los cinco destinos tur�sticos que
comercializa en cada uno de los meses del a�o 2024. Por cada destino y mes se
registra:
	? C�digo de destino tur�stico (entero)
	? N�mero de mes (entero entre 1 y 12)
	? Cantidad de pasajes vendidos (entero)
	? Total recaudado (float)
La informaci�n est� agrupada por destino tur�stico, pero no est� ordenada bajo
ning�n criterio. Hay un registro para cada destino tur�stico y mes.
Se pide calcular e informar:

A. La cantidad total de pasajes vendidos en el a�o 2024 entre todos los destinos
tur�sticos.

B. Por cada destino tur�stico, el total recaudado.

*/


int main() {

	/// DECLARACION DE VARIABLES
	int codigoDestinoTuristico;
	int mes;
	int cantidadPasajesVendidos;
	float totalRecaudado;

	/// PTO A
	int cantidadTotalPasajesVendidos;
	cantidadTotalPasajesVendidos = 0;

	/// PTO B
	float totalRecaudadoPorDestino;

	/// ESTRUCTURA GENERAL DE INGRESO DE DATOS
	/// DATO AGRUPADO ---> DESTINOS TURISTICOS
	for (int i = 1; i <= 5; i++){

        /// PTO B
        totalRecaudadoPorDestino = 0;

		/// CADA UNO DE LOS 12 MESES DEL A�O
		for(int j = 1; j <= 12; j++){

            cout << "Destino #" << i << endl;

            cout << "-----------------" << endl;
			/// PROCESO TODOS LOS REGISTROS
			cout << "Ingrese codigo de destino: ";
			cin >> codigoDestinoTuristico;

			cout << "Ingrese mes: ";
			cin >> mes;

			cout << "Ingrese cantidad Pasajes Vendidos: ";
			cin >> cantidadPasajesVendidos;

			cout << "Ingrese recaudacion $: ";
			cin >> totalRecaudado;

			/// PTO A
			cantidadTotalPasajesVendidos += cantidadPasajesVendidos;

			/// PTO B
			totalRecaudadoPorDestino += totalRecaudado;

		}
            cout << endl << endl;
            cout << "El destino " << codigoDestinoTuristico << " recaudo $: " << totalRecaudadoPorDestino << endl;


	}

	/// PTO A
	///system("cls");/// LIMPIAR PANTALLA
	cout << "Cantidad total de pasajes vendidos: " << cantidadTotalPasajesVendidos << endl;

	cout << endl;

	return 0;
}

