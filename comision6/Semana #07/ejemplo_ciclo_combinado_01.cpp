#include <iostream>
using namespace std;

int main() {

	/// DECLARACION
	int codigoDestino; 		/// C�digo de destino tur�stico (entero)
	int numeroMes;			/// N�mero de mes (entero entre 1 y 12)
	int cantidadPasajes;	/// Cantidad de pasajes vendidos (entero)
	float totalRecaudado;	/// Total recaudado (float)

	/// PTO A
	int totalPasajesVendidos;

	/// PTO B
	float totalRecaudacionXdestino;

	/// GRUPO -> DESTINO
	totalPasajesVendidos = 0;
	for(int i = 1; i <= 5; i++){

        /// PTO B
        totalRecaudacionXdestino = 0;

		/// MESES
		for(int j = 1; j <= 12; j++){

			/// PROCESO CADA REGISTRO
			cout << "Codigo de destino: ";
			cin >> codigoDestino;

			cout << "Ingrese mes: ";
			cin >> numeroMes;

			cout << "Ingrese cantidad pasajes: ";
			cin >> cantidadPasajes;

			cout << "Ingrese total recaudacion: ";
			cin >> totalRecaudado;

			cout << "----------------" << endl;

			/// PTO A)
			totalPasajesVendidos += cantidadPasajes;

			/// PTO B)
			totalRecaudacionXdestino += totalRecaudado;

		}

		cout << endl << endl;
		cout << "PTO B) Recaudacion del destino " << codigoDestino << " $: " << totalRecaudacionXdestino << endl;
		cout << endl << endl;
	}

	cout << endl << endl;
	cout << "PTO A) Total pasajes vendidos: " << totalPasajesVendidos << endl;


	return 0;
}

