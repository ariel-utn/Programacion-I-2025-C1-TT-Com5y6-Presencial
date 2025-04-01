#include <iostream>

using namespace std;

/**

DECISION SIMPLE --> TIENE SALIDA UNICAMENTE POR EL VERDADERO

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


    return 0;
}
