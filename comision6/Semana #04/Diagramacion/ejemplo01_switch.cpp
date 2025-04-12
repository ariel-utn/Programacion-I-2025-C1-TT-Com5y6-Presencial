#include <iostream>

using namespace std;

/**  HACER UN PROGRAMA QUE PERMITE EL INGRESO DE UN COLOR, Y DETERMINE LA ACCION A SEGUIR.

1 - ROJO     --> ALTO, ESPERE!!!
2 - AMARILLO --> PRECAUCION AL PASAR!!!
3 - VERDE    --> PUEDE CRUZAR !!!
*/

int main(){

    /// DECLARACION DE VARIABLES
    int color;

    /// DE
    cout << "INGRESE COLOR 1-ROJO, 2- AMARILLO, 3-VERDE: ";
    cin >> color;

    switch(color){
    case 1:{
        cout << "ALTO, ESPERE!!!" << endl;
        }
        break;
    case 2:{
        cout << "PRECAUCION AL PASAR!!!" << endl;
        }
        break;
    case 3:{
        cout << "PUEDE CRUZAR !!!" << endl;
        }
        break;
    default :{
        cout << "OPCION INCORRECTA!!!";
        }
        break;
    }

	return 0;
}
