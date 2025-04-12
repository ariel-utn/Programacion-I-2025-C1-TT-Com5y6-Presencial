#include <iostream>

using namespace std;

/**
HACER UN PROGRAMA QUE PERMITA INGRESAR 5 NUMEROS Y MUESTRE CUANTOS
DE ELLOS SON POSITIVOS
*/

int main()
{
    /// DECLARACION DE VARIABLES
    int num1, num2, num3, num4, num5, cuentaPositivos;

    cuentaPositivos = 0;

    /// DE
    cout << "INGRESE #: ";
    cin >> num1;

    if(num1 > 0)
    {
        cuentaPositivos++;
    }

    cout << "INGRESE #: ";
    cin >> num2;

    if(num2 > 0)
    {
        cuentaPositivos++;
    }

    cout << "INGRESE #: ";
    cin >> num3;

    if(num3 > 0)
    {
        cuentaPositivos++;
    }

    cout << "INGRESE #: ";
    cin >> num4;

    if(num4 > 0)
    {
        cuentaPositivos++;
    }

    cout << "INGRESE #: ";
    cin >> num5;

    if(num5 > 0)
    {
        cuentaPositivos++;
    }

    cout << "Total de positivos: " << cuentaPositivos << endl;


    return 0;
}
