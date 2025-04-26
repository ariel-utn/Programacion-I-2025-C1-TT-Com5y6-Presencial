#include <iostream>
using namespace std;

/**
Problema 1
Una agencia de viajes posee la información de los cinco destinos turísticos que
comercializa en cada uno de los meses del año 2024. Por cada destino y mes se
registra:
	? Código de destino turístico (entero)
	? Número de mes (entero entre 1 y 12)
	? Cantidad de pasajes vendidos (entero)
	? Total recaudado (float)
La información está agrupada por destino turístico, pero no está ordenada bajo
ningún criterio. Hay un registro para cada destino turístico y mes.
Se pide calcular e informar:

A. La cantidad total de pasajes vendidos en el año 2024 entre todos los destinos
turísticos.

B. Por cada destino turístico, el total recaudado.

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

		/// CADA UNO DE LOS 12 MESES DEL AÑO
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

