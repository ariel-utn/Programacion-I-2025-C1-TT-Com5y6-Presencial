#include <iostream>
using namespace std;
/**

20 Hacer un programa en el que se ingrese la edad y altura de 5 personas.
Luego, calcular e informar:

A) La cantidad de personas mayores a 30 años que midan más de 1.8
metros.

B) El promedio de altura de las personas mayores a 30 años.

C) La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)

D) La cantidad de personas cuya edad sea de 20, 30 o 40 años.

*/

int main() {
	
	/// DECLARACION VARIABLES
	int edad1, edad2, edad3, edad4, edad5;
	float altura1, altura2, altura3, altura4, altura5;
	
	///
	int contadorEdadAltura = 0;
	int contadorMayores30 = 0;
	float acumuladorAlturaMayores30 = 0, promedio;
	int cantidad170y180 = 0;
	int cantidad20o30o40 = 0;
	
	/// DE
	cout << "INGRESE EDAD #1: ";
	cin >> edad1;
	
	cout << "INGRESE ALTURA #1: ";
	cin >> altura1;
	
	cout << "INGRESE EDAD #2: ";
	cin >> edad2;
	
	cout << "INGRESE ALTURA #2: ";
	cin >> altura2;
	
	cout << "INGRESE EDAD #3: ";
	cin >> edad3;
	
	cout << "INGRESE ALTURA #1: ";
	cin >> altura3;
	
	cout << "INGRESE EDAD #4: ";
	cin >> edad4;
	
	cout << "INGRESE ALTURA #4: ";
	cin >> altura4;
	
	cout << "INGRESE EDAD #5: ";
	cin >> edad5;
	
	cout << "INGRESE ALTURA #5: ";
	cin >> altura5;
	
	/// PTOA
	if( (edad1 > 30) && (altura1 > 1.8) ){
		contadorEdadAltura++;
	}
	if( (edad2 > 30) && (altura2 > 1.8) ){
		contadorEdadAltura++;
	}
	
	if( (edad3 > 30) && (altura3 > 1.8) ){
		contadorEdadAltura++;
	}
	
	if( (edad4 > 30) && (altura4 > 1.8) ){
		contadorEdadAltura++;
	}
	
	if( (edad5 > 30) && (altura5 > 1.8) ){
		contadorEdadAltura++;
	}
	
	/// PTO B
	if(edad1 > 30){
		contadorMayores30++;
		///acumuladorAlturaMayores30=acumuladorAlturaMayores30 + altura1;
		acumuladorAlturaMayores30+=altura1;
		
	}
	if(edad2 > 30){
		contadorMayores30++;
		acumuladorAlturaMayores30+=altura2;
		
	}	
	
	if(edad3 > 30){
		contadorMayores30++;
		acumuladorAlturaMayores30+=altura3;
		
	}	
	
	if(edad4 > 30){
		contadorMayores30++;
		acumuladorAlturaMayores30+=altura4;
		
	}	
	
	if(edad5 > 30){
		contadorMayores30++;
		acumuladorAlturaMayores30+=altura5;
		
	}	
	
	/// PTO C
	if ( (altura1 >= 1.7f) && ( altura1 <= 1.8f)  ){
		cantidad170y180++;		
	}
	
	if ( (altura2 >= 1.7f) && ( altura2 <= 1.8f)  ){
		cantidad170y180++;		
	}
	if ( (altura3 >= 1.7f) && ( altura3 <= 1.8f)  ){
		cantidad170y180++;		
	}
	if ( (altura4 >= 1.7f) && ( altura4 <= 1.8f)  ){
		cantidad170y180++;		
	}
	if ( (altura5 >= 1.7f) && ( altura5 <= 1.8f)  ){
		cantidad170y180++;		
	}
	
	/// PTO D
	if ( (edad1==20) || (edad1==30) || (edad1 == 40) ){
		cantidad20o30o40++;
	}
	
	if ( (edad2==20) || (edad2==30) || (edad2 == 40) ){
		cantidad20o30o40++;
	}
	if ( (edad3==20) || (edad3==30) || (edad3 == 40) ){
		cantidad20o30o40++;
	}

	if ( (edad4==20) || (edad4==30) || (edad4 == 40) ){
		cantidad20o30o40++;
	}
	
	if ( (edad5==20) || (edad5==30) || (edad5 == 40) ){
		cantidad20o30o40++;
	}
	/// DS
	
	cout << "A) La cantidad de personas mayores a 30 años que midan más de 1.8 metros: "
	<< contadorEdadAltura << endl;
	
	if(contadorMayores30 > 0){
		promedio = acumuladorAlturaMayores30/contadorMayores30;
		cout << "El promedio de altura de las personas mayores a 30 años: " << promedio
		<< endl;
	}
	else{
		cout << "No hay mayores a 30 años" << endl;
	}
	
	cout << "La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive): " << 
	   cantidad170y180 << endl;
	
	cout << "La cantidad de personas cuya edad sea de 20, 30 o 40 años: " << cantidad20o30o40 << endl;
	return 0;
}

