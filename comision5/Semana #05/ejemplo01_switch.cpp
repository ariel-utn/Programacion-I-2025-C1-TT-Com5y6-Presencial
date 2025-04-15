#include <iostream>

using namespace std;

/**
    HACER UN PROGRAMA QUE PERMITA CARGAR LA INICIAL DE UN COLOR DE UN SEMAFORO.
    LUEGO INDIQUE QUE DEBE HACER EL EL PEATON EN CADA UNO DE LOS CASOS.

ALTERNATIVA 1
'V' -- > PUEDE PASAR
'A' -- > CRUCE CON PRECAUCION
'R' -- > PROHIBIDO EL PASO


ALTERNATIVA 2
1 -- > PUEDE PASAR
2 -- > CRUCE CON PRECAUCION
3 -- > PROHIBIDO EL PASO
*/


int main()
{
//    char opcion;
//
//    cout << "Elija una opcion (V, A o R): ";
//    cin >> opcion;
//
//    switch(opcion)
//    {
//    case 'V':
//    case 'v':
//        cout << "PUEDE PASAR" << endl;
//        break;
//    case 'A':
//    case 'a':
//        cout << "CRUCE CON PRECAUCION" << endl;
//        break;
//    case 'R':
//    case 'r':
//        cout << "PROHIBIDO EL PASO" << endl;
//        break;
//    default:
//        cout << "Error, no existe ese color de semaforo (;" << endl;
//        break;
//    }

    int opcion;

    cout << "Elija una opcion (V, A o R): ";
    cin >> opcion;

    switch(opcion)
    {
    case 1:
        cout << "PUEDE PASAR" << endl;
        break;
    case 2:
        cout << "CRUCE CON PRECAUCION" << endl;
        break;
    case 3:
        cout << "PROHIBIDO EL PASO" << endl;
        break;
    default:
        cout << "Error, no existe ese color de semaforo (;" << endl;
        break;
    }


    return 0;
}
