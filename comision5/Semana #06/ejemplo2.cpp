#include <iostream>

using namespace std;

/**
Una agencia de viajes posee la información de los cinco destinos turísticos que
comercializa en algunos meses del año 2024. Por cada registro se ingresa:
    ▪ Código de destino turístico (entero)
    ▪ Número de mes (entero entre 1 y 12)
    ▪ Cantidad de pasajes vendidos (entero)
    ▪ Total recaudado (float)
La información está agrupada por destino turístico, pero no está ordenada bajo
ningún criterio. No todos los destinos tuvieron información para todos los meses.
Para indicar que finaliza la carga de un destino, se ingresa un mes igual a cero.
Se pide calcular e informar:
A. La cantidad total de pasajes vendidos en el año 2024 entre todos los destinos
turísticos.
B. Por cada destino turístico, el total recaudado.

*/

int main()
{
    /// DECLARACION DE VARIABLES
    int codigoDestinoTuristico;
    int mes;
    int cantidadPasajesVendidos;
    float totalRecaudado;

    /// PTO A
	int cantidadTotalPasajesVendidos;

	/// PTO B
	float total;

    cantidadTotalPasajesVendidos = 0;
    /// DESTINOS TURISTICOS
    for(int i = 1; i <= 5; i++)
    {
        /// PTO B
        total = 0;

        cout << "Ingrese codigo destino turistico: ";
        cin >> codigoDestinoTuristico;

        cout << "Ingrese mes ";
        cin >> mes;

        while(mes != 0)
        {
            cout << "Ingrese cantidad pasajes: ";
            cin >> cantidadPasajesVendidos;

            cout << "Ingrese recaudacion $: ";
            cin >> totalRecaudado;

            /// PROCESO REGISTROS
            cantidadTotalPasajesVendidos += cantidadPasajesVendidos;
            total += totalRecaudado;


            /// AL FINAL INGRESO EL PROXIMO MES
            cout << "Ingrese mes ";
            cin >> mes;
        }

        cout << "--------" << endl;
        cout << "PTO B) " << total << endl;
    }

    cout << "PTO A) " << cantidadTotalPasajesVendidos << endl;

    return 0;
}
