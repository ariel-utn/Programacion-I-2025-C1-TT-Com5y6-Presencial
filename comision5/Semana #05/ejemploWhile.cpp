#include <iostream>
using namespace std;

/**
	HACER UN PROGRAMA QUE PERMITA INGRESAR UNA LISTA DE NUMEROS
	QUE FINALIZA CUANDO EL USUARIO INGRESA UN CERO.

	SE PIDE: CONTAR Y MOSTRAR LA CANTIDAD DE NUMEROS PARES.

*/


int main() {
	
	int num;
	int cpar;
	
	cout << "Ingrese un #: ";
	cin >> num;
	
	cpar = 0;
	while(  num != 0){
		/// CODIGO A REPETIR
		
		if(num%2==0){
			cpar++;
		}
		 
		cout << "Ingrese un #: ";
		cin >> num;
	}
	
	cout << "Total de pares: " << cpar << endl;
	
	return 0;
}

