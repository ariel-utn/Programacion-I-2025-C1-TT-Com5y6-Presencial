#include <iostream>
using namespace std;
/**
HACER UN PROGRAMA QUE PERMITA INGRESAR UNA LISTA DE 15 NUMEROS ENTEROS Y LUEGO
DETERMINE Y MUESTRE LO SIGUIENTE:

A) EL PROMEDIO DE LOS NUMEROS MAYORES A 10.

B) LA CANTIDAD DE NUMEROS PARES Y LA CANTIDAD DE NUMEROS IMPARES.

C) SI NO HAY NUMEROS IMPARES, INFORMAR CON UN CARTEL ACLARATORIO.

D) EL PORCENTAJE DE NUMEROS PARES Y EL PROCENTAJE DE NUMEROS IMPARES.



BANDERA
ES UNA VARIABLE QUE POR SU USO CUMPLE LA FUNCION DE BANDERA; DETECTAR SI OCURRIO O NO UNA CONDICION.

SIEMPRE HAY QUE DARLE VALOR INICIAL.
NOSOTROS COMO PROGRAMADORES LE DAMOS SIGNIFICADO A ESOS VALORES

BAND 0 ---> NO HAY IMPARES
BAND 1 ---> HAY IMPARES

UNA VEZ QUE SE ACTIVO NUESTRA BANDERA (OCURRIO EL FENOMENO/CONDICION), NUNCA VUELVE A SU VALOR ORIGINAL.

*/

int main()
{

    int numero;

    /// PTO A
    int contPTOA;
    int acuPTOA;
    float promedio;

    /// PTO B
    int contPares;
    int contImpares;

    /// PTO C
    bool band;

    /// PTO D
    int total;
    float porcPares;
    float porcImpares;

    /// PTO A
    acuPTOA = 0;
    contPTOA = 0;
    /// PTO B
    contPares = 0;
    contImpares = 0;
    /// PTO C
    band = false;	/// APENAS ARRANCA MI PROGRAMA NO HAY NUMEROS IMPARES --> POR ESO LA BANDERA ES FALSE
    /// USO EL FOR PARA PEDIR 15 NUMEROS
    for(int i = 1;  i <= 15; i++)
    {
        cout << "Ingrese #: ";
        cin >> numero;

        /// PTO A
        /// PARA SABER SI EL NUMERO ES MAYOR A 10
        if(numero > 10)
        {
            contPTOA++;
            acuPTOA+=numero;
        }

        /// PTO B
        if(numero%2 == 0){
            contPares++;
        }
        else{
            contImpares++;
            /// PTO C
			/// CUANDO DETECTO UN NUMERO IMPAR (OCURRE EL FENOMENO/CONDICION)CAMBIO EL ESTADO DE LA BANDERA
            band = true;
        }

    }

    /// PTO A)
    if(contPTOA > 0)
    {
        /// PUEDO CALCULAR EL PROMEDIO
        promedio = (float)acuPTOA/contPTOA;
        cout << "PTO A) EL PROMEDIO DE LOS NUMEROS MAYORES A 10: " << promedio << endl;
    }
    else
    {
        cout << "PTO A) No hay numeros mayores a 10" << endl;
    }

    cout << endl;
    /// PTO B)
    cout << "PTO B) Cantidad de pares: " << contPares << endl;
    cout << "PTO B) Cantidad de impares: " << contImpares << endl;

    /// PTO C)
    cout << endl;
	/// AVERIGUO EL ESTADO DE LA BANDERA: SI SE ACTIVÓ --> HAY AL MENOS UN NUMERO IMPAR. SI QUEDÓ EN FALSE --> NO HAY NUMEROS IMPARES
    if(band==true){
        cout << "PTO C) Hay numeros impares" << endl;
    }
    else{
        cout << "PTO C) Lista sin impares" << endl;
    }
    
	/// PTO D)
    total = contImpares + contPares;
    porcPares = ((float)contPares*100)/total;
    porcImpares = ((float)contImpares*100)/total;

    cout << endl;
    cout << "PTO D) EL PORCENTAJE DE NUMEROS PARES: " << porcPares << endl;
    cout << "PTO D) EL PORCENTAJE DE NUMEROS IMPARES: " << porcImpares << endl;

    return 0;
}

