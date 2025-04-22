#include <iostream>
using namespace std;

int main() {

	/// DECLARACION VARIABLES
	string titulo;
	float precio;

	/// PTO A)
	float recaudacion;

	/// PTO B)
	int cantidadLibrosMayores8000;

	/// PTO C)
    float precioMaximo;
    string tituloLibroPrecioMaximo;

	recaudacion = 0;
	cantidadLibrosMayores8000 = 0;
	precioMaximo = 0;
	for(int i = 1; i <= 5; i++){
		/// PROCESO VENTAS
		cout << "Ingrese titulo: ";
		cin >> titulo;

		cout << "Ingrese precio: ",
		cin >> precio;

		cout << "-------" << endl;

		/// PTO A)
		recaudacion += precio;

		/// PTO B)
		if(precio > 8000.0f){
            cantidadLibrosMayores8000++;
		}

		/// PTO C)
		if(precio > precioMaximo){
            precioMaximo = precio;
            tituloLibroPrecioMaximo = titulo;
		}

	}

	/// PTO A)
	cout << "Total recaudado por ventas $ " << recaudacion << endl;

	/// PTO B)

	cout <<  "Cantidad libros > $ 8000: " << cantidadLibrosMayores8000 << endl;

	/// PTO C)
	cout << "Titulo del libro mas caro: " << tituloLibroPrecioMaximo << endl;

	return 0;
}
