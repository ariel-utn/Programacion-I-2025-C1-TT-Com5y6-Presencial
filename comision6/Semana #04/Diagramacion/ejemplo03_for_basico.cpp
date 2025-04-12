#include <iostream>

using namespace std;
/**
    EL CICLO EXACTO (FOR) SE UTILIZA CUANDO:
    - QUEREMOS QUE SE REPITAN INSTRUCCIONES UN NUMERO CONOCIDO DE VECES.
    - ESA CANTIDAD PUEDE SER FIJA (CONSTANTE) O CALCULA (VARIABLE)

    SINTAXIS:
    VARIABLE DE CONTROL: int i;
    VALOR INICIAL: i = 1;
    CONDICION: i <= 5
    INCREMENTO/DECREMENTO

    INICIO  CONDICION           INCREMENTO
    1       1 <= 5 ----> V      i++
            2 <= 5 ----> V      i++
            ..
            6 <= 5 ----> F

    IR HACIA DELANTE
    MENOR  MENOR<=MAYOR   i++

    IR HACIA ATRAS
    MAYOR   MAYOR>=MENOR    i--

    NOTA:
    LA VARIABLE DE CONTROL LA PODEMOS USAR O MOSTRAR

    NOOOOOO -> MODIFICAR NUNCA!!!!! ---> i = 999;


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
