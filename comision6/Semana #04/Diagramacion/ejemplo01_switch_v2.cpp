#include <iostream>

using namespace std;

/**  HACER UN PROGRAMA QUE PERMITE EL INGRESO DE UN COLOR, Y DETERMINE LA ACCION A SEGUIR.

R - ROJO     --> ALTO, ESPERE!!!
A - AMARILLO --> PRECAUCION AL PASAR!!!
V - VERDE    --> PUEDE CRUZAR !!!
*/

int main(){

    /// DECLARACION DE VARIABLES
    char color;

    /// DE
    cout << "INGRESE COLOR R-ROJO, A- AMARILLO, V-VERDE: ";
    cin >> color;

    switch(color){
    case 'R':
    case 'r': {
        cout << "ALTO, ESPERE!!!" << endl;
        }
        break;
    case 'A':
    case 'a': {
        cout << "PRECAUCION AL PASAR!!!" << endl;
        }
        break;
    case 'V':
    case 'v': {
        cout << "PUEDE CRUZAR !!!" << endl;
        }
        break;
    case 'O':
    case 'o':{
        cout << "POWER!!!!" << endl;
    }
    break;
    default :{
        cout << "OPCION INCORRECTA!!!";
        }
        break;
    }
    cout << endl << endl;

	return 0;
}
