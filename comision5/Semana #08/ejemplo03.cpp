#include <iostream>

using namespace std;

int main()
{


    /// DECLARACION DE VARIABLES
    int codDestino;
    int nroMes;
    int cantPas;
    float rec;


    /// PTO A
    int cantidadPasajesVendidos;

    /// PTO B
    float totalRecaudacionPorDestino;

    cout << "Ingrese codigo destino: ";
    cin >> codDestino;

    cantidadPasajesVendidos = 0;
    while(codDestino != 0)
    {
        /// PTO B
        totalRecaudacionPorDestino = 0;

        for(int i = 1; i <= 12; i++)
        {
            cout << "Ingrese numero mes: ";
            cin >> nroMes;

            cout << "Ingrese cantidad pasajes: ";
            cin >> cantPas;

            cout << "Ingrese recudacion: ";
            cin >> rec;


            cout << "---------------" << endl;

            /// PTO A
            cantidadPasajesVendidos += cantPas;

            /// PTO B
            totalRecaudacionPorDestino += rec;

            /// PIDO EL COD DESTINO DEL SIGUIENTE REGISTRO

            cout << "Ingrese codigo destino: ";
            cin >> codDestino;


        }
        cout << "\n\n***** Fin de destino *****\n\n" << endl;
        cout << "PTO B El destino recaudo $: " << totalRecaudacionPorDestino << endl;

    }

    cout << "PTO A) Cantidad total pasajes vendidos: " << cantidadPasajesVendidos << endl;

    return 0;
}
