#include <iostream>

/**
HACER UN PROGRAMA QUE PERMITA INGRESAR UN NUMERO Y MUESTRE SI EL MISMO ES POSITIVO, NEGATIVO O CERO.

ACLARACIÓN: DEBE MOSTRAR UN UNICO CARTEL POR PANTALLA
*/

/**
OPERADORES RELACIONALES

MAYOR QUE >
MENOR QUE <
MAYOR O IGUAL QUE >=
MENOR O IGUAL QUE <=
IGUAL A ==
DISTINTO DE !=

*/

/// IF ANIDADOS


using namespace std;

int main(){

    /// DECLARACION DE VARIABLES
    float num1;

    /// INGRESO DE DATOS
    cout << "INGRESE NUMERO: ";
    cin >> num1;

    /// OPERACIONES / DECISIONES

    /// EJEMPLO DE DECISION SIMPLE
    if(num1 > 0){
        /// VERDADERO
        cout << "Positivo" << endl;
    }
    else{
        /// FALSO
        if(num1 == 0){
            /// VERADERO
            cout << "Cero" << endl;
        }
        else{
            /// FALSO
            cout << "Negativo" << endl;
        }
    }


    /// MOSTRAR DATOS


	return 0;
}
