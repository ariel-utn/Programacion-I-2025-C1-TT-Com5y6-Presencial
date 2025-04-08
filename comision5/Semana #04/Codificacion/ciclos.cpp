#include <iostream>

using namespace std;

/**
    CICLOS: SE USAN CUANDO TENEMOS INSTRUCCIONES/BLOQUE DE CODIGO REPETITIVAS.

CICLO EXACTO: CONOCEMOS LA CANTIDAD DE REPETICIONES. FOR

CICLO INEXACTO: NO CONONCEMOS LA CANTIDAD DE REPETICIONES. WHILE


    VARIABLE DE CONTROL --> i NO SE MANIPULA NUNCA!!!!!
    VALOR INICIAL --> int i = 1
    VALOR TOPE/ CONDICION -- > i <= 5
    INCR/DECR --> i++

*/

int main()
{

    /// FOR BASICO
//    for(int i = 1; i <= 5; i++)
//    {
//        /// SE REPITE N CANTIDAD DE VECES
//        cout << i << endl;
//    }

    /// CUENTA REGRESIVA
//    for(int i = 5; i >= 1; i--)
//    {
//        /// SE REPITE N CANTIDAD DE VECES
//        cout << i << endl;
//    }

    int numero;
    cout << "Que tabla queres ); ";
    cin >> numero;

    cout << "Tabla del " << numero << endl;
    for(int i = 1; i <=10; i++){
        cout << numero << " x " << i << " = " << numero* i << endl;
    }



    return 0;
}
