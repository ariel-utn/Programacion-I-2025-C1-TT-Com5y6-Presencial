#include <iostream>

/**

HACER UN PROGRAMA QUE PERMITA INGRESAR 5 NUMEROS Y MUESTRE EL PROMEDIO DE LOS VALORES POSITIVOS INGRESADOS.

*/

/**
OPERADORES RELACIONALES

    OPERADOR        SIMBOLO
    MAYOR QUE           >
    MENOR QUE           <
    MAYOR O IGUAL QUE   >=
    MENOR O IGUAL QUE   <=
    IGUAL A             ==
    DISTINTO DE         !=

*/

/**
    CONTADORES:
    ES UNA VARIABLE, CUYA FUNCION ES CONTAR.
    -- HAY QUE DARLE VALOR INICIAL
    -- LA USAMOS PARA CONTAR
    -- SE ACTIVA BAJO UNA CONDICION.
    -- SIEMPRE CRECE DE FORMA --> CONSTANTE.

    ACUMULARES:
    ES UNA VARIABLES, CUYA FUNCION ES ACUMULAR.
    -- HAY QUE DARLE VALOR INICIAL.
    -- LA USAMOS PARA ACUMULAR.
    -- SE USAN BAJO UNA CONDICION.
    -- SIEMPRE CRECE DE MANERA --> VARIABLE.


*/

using namespace std;

int main()
{
    ///DECLARACION DE VARIABLES
    int contadorPositivos = 0;
    float acumuladorPositivos = 0, promedio;
    float num1, num2, num3, num4, num5;

    /// INGRESO DE DATOS
    cout << "Ingrese #1: ";
    cin >> num1;

    if(num1 > 0)
    {
        /// VERDADERO
        contadorPositivos++;
        acumuladorPositivos += num1;
    }
    cout << "Ingrese #2: ";
    cin >> num2;

    if(num2 > 0)
    {
        /// VERDADERO
        contadorPositivos++;
        acumuladorPositivos += num2;
    }
    cout << "Ingrese #3: ";
    cin >> num3;

    if(num3 > 0)
    {
        /// VERDADERO
        contadorPositivos++;
        acumuladorPositivos += num3;
    }
    cout << "Ingrese #4: ";
    cin >> num4;

    if(num4 > 0)
    {
        /// VERDADERO
        contadorPositivos++;
        acumuladorPositivos += num4;
    }
    cout << "Ingrese #5: ";
    cin >> num5;

    if(num5 > 0)
    {
        /// VERDADERO
        contadorPositivos++;
        acumuladorPositivos += num5;
    }

    /// PROCESOS
    if(contadorPositivos > 0)
    {
        promedio = acumuladorPositivos/contadorPositivos;
        cout << "El prom. de pos. es: " << promedio  << endl;
    }
    else
    {
        cout << "No se ingresaron numeros positivos" << endl;
    }


    return 0;
}
