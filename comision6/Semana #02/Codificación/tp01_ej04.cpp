#include <iostream>

using namespace std;

int main(){

    /// COMENTARIO

    /**
        COMENTARIO
        MULTILINEA
    */

    /// DECLARACION DE VARIABLES
    int asientosTotales;
    int asientosOcupados;
    float porcOcupacion, porcNoOcupacion;

    /// DE
    cout << "Ingrese asientos totales: ";
    cin >> asientosTotales;

    cout << "Ingrese asientos ocupados: ";
    cin >> asientosOcupados;

    /// PROCESOS
    ///porcOcupacion = (asientosOcupados*100)/asientosTotales;
    ///porcOcupacion = (float)(asientosOcupados*100)/asientosTotales;
    porcOcupacion = (asientosOcupados*100.0)/asientosTotales;

    porcNoOcupacion = 100 - porcOcupacion;


    /// DS
    ///cout << "AT: " << asientosTotales << endl;
    ///cout << "AO: " << asientosOcupados << endl;
    cout << "Porcentaje ocupacion: " << porcOcupacion << "%" << endl;;
    cout << "Porcentaje no ocupacion: " << porcNoOcupacion << "%" << endl;;

	return 0;
}
