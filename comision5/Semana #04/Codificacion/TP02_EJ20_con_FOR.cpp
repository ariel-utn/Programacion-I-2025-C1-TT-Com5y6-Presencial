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
	int edad;
	float altura;
	
	int contadorEdadAltura = 0;
	int contadorMayores30 = 0;
	float acumuladorAlturaMayores30 = 0, promedio;
	int cantidad170y180 = 0;
	int cantidad20o30o40 = 0;
	
	for(int i = 1; i <= 5; i++){
		/// INSTRUCCIONES REPETITIVAS
		
		/// DE
		cout << "INGRESE EDAD #" << i << " :";
		cin >> edad;
		
		cout << "INGRESE ALTURA #" << i << " :";
		cin >> altura;		
		
		/// PTOA
		if( (edad > 30) && (altura > 1.8) ){
			contadorEdadAltura++;
		} 
		
		/// PTOB
		if(edad > 30){
			contadorMayores30++;
			acumuladorAlturaMayores30+=altura;
			
		}
		
		/// PTO C
		if ( (altura >= 1.7f) && ( altura <= 1.8f)  ){
			cantidad170y180++;		
		}
		
		/// PTO D
		if ( (edad==20) || (edad==30) || (edad == 40) ){
			cantidad20o30o40++;
		}
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

