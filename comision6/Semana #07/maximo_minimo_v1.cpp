#include <iostream>
using namespace std;

	/**
		Hacer un programa que permita ingresar una lista de
		numeros enteros que finaliza con 0.
		Se pide:
		a) calcular y mostrar el valor maximo.
		b) calcular y mostrar el valor minimo.
	*/

int main() {
	
	int numero, maximo, minimo;
	int cuentaNumeros = 0;
	
	cout << "Ingrese #: ";
	cin >> numero;
	
	while(numero != 0){
		cuentaNumeros++;
		/// BUSCO MAXIMO
		if(cuentaNumeros == 1){
			maximo = numero;
		}
		else{
			if(numero > maximo){
				maximo = numero;
			}
		}
		
		
		/// BUSCO MINIMO
	if(cuentaNumeros == 1){
		minimo = numero;
	}
	else{
		if(numero < minimo){
			minimo = numero;
		}
	}
		
		
		cout << "Ingrese #: ";
		cin >> numero;	
	}
	
	cout << "MAXIMO: " << maximo << endl;
	cout << "MINIMO: " << minimo << endl; 
	
	return 0;
}

