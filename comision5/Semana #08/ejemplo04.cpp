#include <iostream>

using namespace std;

int main()
{

    /// DECLARACION
    int codDestino, nroMes, cantidadPasajes, antCodDestino;
    float recudacion;


    /// PTO A
    int cantidadTotalPasajes;

    /// PTO B
    float totalRecaudacion;

    cout << "Ingrese codigo destino: ";
    cin >> codDestino;

    cantidadTotalPasajes = 0;
    while (codDestino != 0)
    {

        antCodDestino = codDestino;

        /// PTO B
        totalRecaudacion = 0;

        while( codDestino == antCodDestino)
        {
            cout << "Ingrese numero de mes: ";
            cin >> nroMes;

            cout << "Ingrese cantidad pasajes: ";
            cin >> cantidadPasajes;

            cout << "Ingrese recaudacion: ";
            cin >> recudacion;

            cout << "-----------------------" << endl;

            /// PTO A
            cantidadTotalPasajes += cantidadPasajes;

            /// PTO B
            totalRecaudacion += recudacion;


            /// PROCESO TODOS LOS REGISTROS

            /// LEO EL CODIGO DE DESTINO DEL SIGUIENTE REGISTRO
            cout << "Ingrese codigo destino: ";
            cin >> codDestino;
        }

        cout << "\n\nEl destino: " << antCodDestino << " recaudo $: " << totalRecaudacion << "\n\n" <<endl;



    }

    cout << "PTO A) " << cantidadTotalPasajes << endl;


    return 0;
}
