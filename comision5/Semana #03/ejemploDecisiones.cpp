#include <iostream>

using namespace std;

/**
Un kiosco desea registrar la información de una venta.

Los datos que la componen son los siguientes:

--Nombre del producto
--Precio unitario del producto
--Cantidad de unidades vendidas

Requiere un programa que pueda ingresar la información de una  venta y crear un ticket por pantalla con el siguiente formato:

 KIOSCO UTN
 -------------------------
 PRODUCTO        : Alfajor
 PRECIO UNITARIO : $ 900.5
 UNIDADES        : 2
 -------------------------
 TOTAL A PAGAR   : $ 1801

*/

int main()
{
    /// DECLARACION DE VARIABLES
    string nombreProducto;
    float precioUnitario, totalPagar, abonaCliente, vuelto, descuento;
    int cantidadUnidadesVendidas;

    /// DATOS DE ENTRADA
    cout << "INGRESE NOMBRE PRODUCTO: ";
    cin >> nombreProducto;

    cout << "INGRESE PRECIO UNITARIO: ";
    cin >> precioUnitario;

    cout << "INGRESE CANTIDAD UNIDADES: ";
    cin >> cantidadUnidadesVendidas;

    /// PROCESOS / DECISIONES
    totalPagar = cantidadUnidadesVendidas*precioUnitario;

    descuento = 0;
    /// SI EL TOTAL A PAGAR ES MAYOR A 10.000 APLICO 10% DESCUENTO
    if(totalPagar > 10000){
        descuento = totalPagar*10/100;
    }
    totalPagar = totalPagar - descuento;

    /// DATOS DE SALIDA

    cout << endl;
    cout << "KIOSCO UTN" << endl;
    cout << "-------------------------" << endl;
    cout << "PRODUCTO        : " << nombreProducto << endl;
    cout << "PRECIO UNITARIO : $ "<< precioUnitario << endl;
    cout << "UNIDADES        : " << cantidadUnidadesVendidas << endl;
    cout << "-------------------------" << endl;
    cout << "TOTAL A PAGAR   : $ " << totalPagar << endl;

    cout << "ABONA CLIENTE   : $ ";
    cin >> abonaCliente;

    if(abonaCliente >= totalPagar)
    {
        vuelto = abonaCliente - totalPagar;
        cout << "-------------------------" << endl;
        cout << "SU VUELTO ES    : $ " << vuelto << endl;

    }
    else
    {
        cout << "No te alcanza!!!!" << endl;
    }


    return 0;
}
