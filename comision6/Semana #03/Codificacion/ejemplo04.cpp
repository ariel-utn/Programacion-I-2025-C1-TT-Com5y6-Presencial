#include <iostream>

/**

HACER UN PROGRAMA QUE PERMITA INGRESAR 5 NUMEROS Y MUESTRE CUANTOS SON POSITIVOS, NEGATIVOS O CERO.

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
    ES UNA VARIABLES, CUYA FUNCION ES CONTAR.
    -- HAY QUE DARLE VALOR INICIAL
    -- LA USAMOS PARA CONTAR
    -- SE ACTIVA BAJO UNA CONDICION.
    -- SIEMPRE CRECE DE FORMA CONSTANTE

*/

using namespace std;

int main()
{
	///cont++;
    ///cont = cont + 1;
    ///cont+=1;

    ///cont--;
    ///cont = cont - 1;
    ///cont-=1;

    ///DECLARACION DE VARIABLES
    int contadorPositivos = 0;
    int contadorNegativos = 0;
    int contadorCeros = 0;
    float num1, num2, num3, num4, num5;

    /// INGRESO DE DATOS
    cout << "Ingrese #1: ";
    cin >> num1;

    if(num1 > 0)
    {
        /// VERDADERO
        contadorPositivos++;
    }
    else
    {
        /// FALSO
        if(num1 == 0)
        {
            /// VERADERO
            contadorCeros++;
        }
        else
        {
            /// FALSO
            contadorNegativos++;
        }
    }

    cout << "Ingrese #2: ";
    cin >> num2;

    if(num2 > 0)
    {
        /// VERDADERO
        contadorPositivos++;
    }
    else
    {
        /// FALSO
        if(num2 == 0)
        {
            /// VERADERO
            contadorCeros++;
        }
        else
        {
            /// FALSO
            contadorNegativos++;
        }
    }

    cout << "Ingrese #3: ";
    cin >> num3;
    if(num3 > 0)
    {
        /// VERDADERO
        contadorPositivos++;
    }
    else
    {
        /// FALSO
        if(num3 == 0)
        {
            /// VERADERO
            contadorCeros++;
        }
        else
        {
            /// FALSO
            contadorNegativos++;
        }
    }

    cout << "Ingrese #4: ";
    cin >> num4;

    if(num4 > 0)
    {
        /// VERDADERO
        contadorPositivos++;
    }
    else
    {
        /// FALSO
        if(num4 == 0)
        {
            /// VERADERO
            contadorCeros++;
        }
        else
        {
            /// FALSO
            contadorNegativos++;
        }
    }

    cout << "Ingrese #5: ";
    cin >> num5;

    if(num5 > 0)
    {
        /// VERDADERO
        contadorPositivos++;
    }
    else
    {
        /// FALSO
        if(num5 == 0)
        {
            /// VERADERO
            contadorCeros++;
        }
        else
        {
            /// FALSO
            contadorNegativos++;
        }
    }

    cout << "CANTIDAD DE # POSITIVOS: " << contadorPositivos << endl;
    cout << "CANTIDAD DE # NEGATIVOS: " << contadorNegativos << endl;
    cout << "CANTIDAD DE # CEROS: " << contadorCeros << endl;

    return 0;
}
