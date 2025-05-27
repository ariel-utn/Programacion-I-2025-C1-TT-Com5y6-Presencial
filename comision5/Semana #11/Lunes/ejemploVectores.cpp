#include <iostream>
using namespace std;

int main() {
	
	/// DECLARACION DE UN VECTOR
	/// LA CANTIDAD DE ELEMENTOS ES UNA CONSTANTE ENTERA POSITIVA
	const int TAM = 9;
	
	/// PONER EN CERO EL VECTOR EN LA DECLARACION
	/// int vec[TAM] = {};
	int vec[TAM];
	
	/// PONER EN CERO EL CONTENIDO DEL VECTOR LUEGO DE LA DECLARACION
	for (int i = 0; i < TAM; i++){
		vec[i] = 0;
	}
	
	/// ASIGNAR ELEMENTOS AL MOMENTO DE LA DECLARACION
	// int vec[TAM] = {6,-5,4};
	
	/*
	vec[6] = 30;
	vec[7] = -10;
	vec[8] = 7;
	*/
	
	cout << "Cargo el vector" << endl;
	for (int i = 0; i < TAM; i++){
		cout << "Ingrese #: ";
		cin >> vec[i];
	}
	
	cout <<  "Muestro el contenido del vector" << endl;
	/// MOSTRAR CONTENIDO DEL VECTOR
	for (int i = 0; i < TAM; i++){
		cout << vec[i] << endl;
	}
	
	return 0;
}

