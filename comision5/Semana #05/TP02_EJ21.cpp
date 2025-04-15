#include <iostream>
using namespace std;
/**

TP02_EJ21

Una marroquinería dispone de 450 carteras blancas, 500 carteras negras, 400
marrones y 490 grises.

Se pide hacer un programa donde se ingresen 10 ventas. Cada venta está compuesta por:
- Cantidad de carteras
- Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)

Calcular e informar:
A) Cantidad total de carteras vendidas.
B) Cuántas carteras quedaron de cada tipo.
C) Los colores de carteras que no se vendieron.

NOTA: Ninguna venta superará las 10 carteras.

*/

int main() {
	
	/// DECLARACION DE VARIABLES
	const int CANT_VTAS = 3;
	const int CART_BLANCAS = 450;
	const int CART_NEGRAS= 500;
	const int CART_MARRONES = 400;
	const int CART_GRISES = 490;
	
	int cantidad, tipoCartera;

	/// PTOA
	int cantidadCarterasVendidas;
	cantidadCarterasVendidas = 0;
	
	/// PTOB
	int cantVendidaBlancas;
	int cantVendidaNegras;
	int cantVendidaMarrones;
	int cantVendidaGrises;
	
	/// PTOC
	/// BANDERAS --> FALSE: NO SE VENDIO CARTERA DE ESE COLOR
	///			 --> TRUE: SE VENDIO LA CARTERA DE ESE COLOR
	bool band_blanco = false;
	bool band_negro = false;
	bool band_marron = false;
	bool band_gris = false;
	
	/// DE --> VENTAS --> CICLO FOR
	
	cantVendidaBlancas = 0;
	cantVendidaNegras = 0;
	cantVendidaMarrones = 0;
	cantVendidaGrises = 0;
	for(int i = 1; i <= CANT_VTAS; i++ ){
		/// VENTAS
		cout << "Ingrese cantidad vendida: ";
		cin >> cantidad;
		
		cout << "Ingrese tipo de cartera: ";
		cin >> tipoCartera;
		
		/// PTOA
		///cantidadCarterasVendidas = cantidadCarterasVendidas + cantidad;
		cantidadCarterasVendidas+=cantidad;
		
		/// PTOC
		/// CARTERAS BLANCAS
		if(tipoCartera==1){
			band_blanco = true;
			cantVendidaBlancas+=cantidad;
		}
		else if (tipoCartera==2){
			band_negro = true;
			cantVendidaNegras+=cantidad;
		}
		else if (tipoCartera==3){
			band_marron = true;
			cantVendidaMarrones+=cantidad;
		}
		else if (tipoCartera==4){
			band_gris = true;
			cantVendidaGrises+=cantidad;
		}

	}
	
	cout << "PTO A) Cantidad total de carteras vendidas: " << cantidadCarterasVendidas << endl;
	
	cout << "PTO B) Carteras: " << endl;
	cout << "	Blancas: " << CART_BLANCAS-cantVendidaBlancas << endl;
	cout << "	Negras: " << CART_NEGRAS-cantVendidaNegras << endl;
	cout << "	Marrones: " << CART_MARRONES-cantVendidaMarrones << endl;
	cout << "	Grises: " << CART_GRISES-cantVendidaGrises << endl;	
	
	cout << "PTO C) Colores sin ventas: " << endl;
	if(band_blanco==false){
		cout << "	Blanco";
	}
	if(band_negro==false){
		cout << "	Negro";
	}	
	if(band_marron==false){
		cout << "	Marron";
	}
	if(band_gris==false){
		cout << "	Gris";
	}
	return 0;
}

