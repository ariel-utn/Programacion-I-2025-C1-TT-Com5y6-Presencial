#include <iostream>
using namespace std;

int main() {
	
	float donacion;
	float totalDonacion = 0;
	
	/// PTO A)
	int cantidadDonaciones = 0;
	
	/// PTO B)
	float donacionMaxima = 0;
	
	do{
		cout << "Ingrese donacion: ";
		cin >> donacion;
		
		/// PTO A)
		cantidadDonaciones++;
		
		/// PTO B)
		if(donacion > donacionMaxima){
			donacionMaxima = donacion;
		}
		
		
		totalDonacion += donacion;
		
	}while(totalDonacion < 50000);
	
	/// PTO A)
	cout << "Cantidad de donaciones: " << cantidadDonaciones << endl;
	
	/// PTO B)
	cout << "Donacion maxima: " << donacionMaxima << endl;
	
	return 0;
}
