#include <iostream>

/**
HACER UN PROGRAMA QUE PERMITA INGRESAR UN NUMERO Y MUESTRE SI EL MISMO ES POSITIVO, NEGATIVO O CERO.

ACLARACI�N: DEBE MOSTRAR UN UNICO CARTEL POR PANTALLA
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

/// IF SECUENCIALES


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
    if(num1 < 0){
        /// VERDADERO
        cout << "Negativo" << endl;
    }
    if(num1 == 0){
        /// VERDADERO
        cout << "Cero" << endl;
    }

    /// MOSTRAR DATOS


	return 0;
}
