#include <iostream>

/// SOY UN COMENTARIO

/*
    ESTE ES
    UN COMENTATIO
    MUTILINEA
*/

/**
TP1EJ01

HACER UN PROGRAMA PARA INGRESAR POR TECLADO LA CANTIDAD DE ASIENTOS TOTALES EN UN AVION Y LA CANTIDAD DE PASAJES OCUPADOS Y LUEGO CALCULAR E INFORMAR EL PORCENTAJE DE OCUPACI�N Y EL PORCENTAJE DE NO OCUPACI�N DEL MISMO.

EJEMPLO: SI EL AVI�N TIENE 200 ASIENTOS TOTALES Y SE VENDIERON 80 PASAJES, EL PORCENTAJE DE OCUPACION QUE SE INFORMAR� SER� DE UN 40% Y EL PORCENTAJE DE NO OCUPACI�N SER� DE UN 60%.
*/

using namespace std;

int main(){
    /// DECLARACION DE VARIABLES
//    int asientosTotales;
//    int asientosOcupados;

    int asientosTotales, asientosOcupados;
    float porcentajeOcupados, porcentajeNoOcupados;

    /// DE
    cout << "INGRESE ASIENTOS TOTALES: ";
    cin >> asientosTotales;

    cout << "INGRESE ASIENTOS OCUPADOS: ";
    cin >> asientosOcupados;

    /// PROCESOS

    /// CASTEO PARA MOSTRAR VALOR FLOTANTE
    ///porcentajeOcupados = (asientosOcupados*100.0)/asientosTotales;
    porcentajeOcupados = (float)(asientosOcupados*100)/asientosTotales;

    porcentajeNoOcupados = 100 - porcentajeOcupados;

    /// DS
    cout << "PORCENTAJE ASIENTOS OCUPADOS: " << porcentajeOcupados << "%";
    cout << endl;
    cout << "PORCENTAJE ASIENTOS NO OCUPADOS: " << porcentajeNoOcupados << "%";
	return 0;
}
