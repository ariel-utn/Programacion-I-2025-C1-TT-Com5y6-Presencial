#include <iostream>

using namespace std;

/**

DECISION DOBLE -> TIENE SALIDA POR EL VERDADERO Y EL FALSO

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
        /// SALIDA POR EL FALSO
        cout << "El " << num1 << " NO es POSITIVO" << endl;
    }

    return 0;
}
