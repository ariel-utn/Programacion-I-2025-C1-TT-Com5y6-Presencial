#include <iostream>

using namespace std;

/**
HACER UN PROGRAMA QUE PERMITA INGRESAR 5 NUMEROS Y MUESTRE CUANTOS
DE ELLOS SON POSITIVOS
*/

int main()
{
	/// DECLARACION DE VARIABLES
	int num, cuentaPositivos;
	
	cuentaPositivos = 0;
	
	/// PARA PEDIR 5 NUMEROS
	for (int i = 1; i <= 5; i++){
		
		cout << "Ingrese # " << i << ": ";
		cin >> num;
		
		/// PARA AVERIGUAR SI ES POSITIVO
		if(num > 0){
			/// PARA CONTAR LOS POSITIVOS
			cuentaPositivos++;
		}
	}
		
	cout << "Total de positivos: " << cuentaPositivos << endl;
	
	
	return 0;
}
