#include <iostream>
using namespace std;

/// DECLARACION
void cargarVector(int v[], int t);
void mostrarVector(int v[], int t);
int sumarValores(int v[], int t);


int main() {
	
	const int TAM = 10;	/// TOTAL DE ELEMENTOS DEL VECTOR
	int vec[TAM];
	
	cargarVector(vec, TAM);
	int suma;
	suma = sumarValores(vec,TAM);	
	cout << "Total de la suma: " << suma << endl;
	
	return 0;
}

void cargarVector(int v[], int t){
	for(int i = 0; i < t; i++){
		cout << "Ingrese #: ";
		cin >> v[i];
	}
}

void mostrarVector(int v[], int t){
	for (int i = 0; i < t; i++){
		cout << v[i] << endl;
	}
}

int sumarValores(int v[], int t){
	int sumaTotal = 0;
	for (int i = 0; i < t; i++){
		sumaTotal += v[i];
	}		
	return sumaTotal;	
}
