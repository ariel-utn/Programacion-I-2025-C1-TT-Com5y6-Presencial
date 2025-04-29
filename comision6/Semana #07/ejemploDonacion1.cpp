#include <iostream>
using namespace std;

int main() {
	
	float donacion;
	float totalDonacion = 0;
	
	
	while(totalDonacion < 50000){
		
		cout << "Ingrese donacion: ";
		cin >> donacion;
		
		totalDonacion += donacion;
	}
	
	return 0;
}

