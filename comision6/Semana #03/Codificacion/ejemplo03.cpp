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
    string mensaje;

    /// INGRESO DE DATOS
    cout << "INGRESE NUMERO: ";
    cin >> num1;

    /// OPERACIONES / DECISIONES

    /// EJEMPLO DE DECISION SIMPLE
    if(num1 > 0){
        /// VERDADERO
        mensaje = "Positivo";
    }
    else{
        /// FALSO
        if(num1 == 0){
            /// VERADERO
            mensaje =  "Cero";
        }
        else{
            /// FALSO
            mensaje =  "Negativo";
        }
    }

    /// MOSTRAR DATOS
    cout << "El # " << num1 << " es " << mensaje;

	return 0;
}
