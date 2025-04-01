#include <iostream>

using namespace std;

/**

DECISION ANIDADA -> UN IF DENTRO DE OTRO IF / ELSE

*/

int main()
{

    float num1;

    cout << "Ingrese #: ";
    cin >> num1;

    if(num1 > 0)
    {
        /// SALIDA POR EL VERDADERO
        cout << "El " << num1 << " es POSITIVO" << endl ;
    }
    else
    {
        if(num1 < 0)
        {
            /// SALIDA POR EL VERDADERO
            cout << "El " << num1 << " es NEGATIVO" << endl ;
        }
        else
        {
            /// SALIDA POR EL FALSO
            cout << "El " << num1 << " es CERO" << endl;
        }
    }

    return 0;
}
