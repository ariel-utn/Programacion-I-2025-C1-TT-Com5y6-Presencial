#include <iostream>

using namespace std;
/**
 * EL CICLO FOR SE UTILIZA CUANDO:
 * - NECESITAMOS REPETIR UN CONJUNTO DE INSTRUCCIONES UN NÚMERO CONOCIDO DE VECES.
 * - ESE NÚMERO DE REPETICIONES PUEDE SER FIJO (UNA CONSTANTE) O CALCULADO (UNA VARIABLE).
 *
 * SINTAXIS BÁSICA:
 *   int i;              // Variable de control
 *   for (i = 1; i <= 5; i++) {
 *       // Instrucciones a repetir
 *   }
 *
 * EJECUCIÓN DEL CICLO:
 *   Inicio      Condición     Incremento
 *     i = 1      1 <= 5  -> V     i++
 *                2 <= 5  -> V     i++
 *     ...
 *                6 <= 5  -> F     (Fin del ciclo)
 *
 * DIRECCIÓN DEL CICLO:
 * - PARA ADELANTE (ASCENDENTE):
 *     for (int i = menor; i <= mayor; i++)
 *
 * - PARA ATRÁS (DESCENDENTE):
 *     for (int i = mayor; i >= menor; i--)
 *
 * NOTA IMPORTANTE:
 * - SE PUEDE USAR LA VARIABLE DE CONTROL DENTRO DEL CICLO.
 * - ¡NUNCA SE DEBE MODIFICAR MANUALMENTE LA VARIABLE DE CONTROL DENTRO DEL CICLO!
 *   i = 999;  // Esto rompe la lógica del ciclo.
 */
int main(){

    /// PARA MOSTRAR LOS NUMEROS DEL 1 AL 5
    for(int i = 1; i <= 5; i++){

        /// REPETICION
        cout << i << endl;
    }

    /// PARA MOSTRAR LOS NUMEROS DEL 5 AL 1
//    for(int i = 5; i >= 1; i--){
//
//        /// REPETICION
//        cout << i << endl;
//    }


	return 0;
}
