#include <iostream>

using namespace std;

/**

DECISION SECUENCIAL

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
    if(num1 < 0)
    {
        /// SALIDA POR EL VERDADERO
        cout << "El " << num1 << " es NEGATIVO" << endl ;
    }
    if (num1 == 0)
    {
        /// SALIDA POR EL VERDADERO
        cout << "El " << num1 << " es CERO" << endl;
    }


return 0;
}
