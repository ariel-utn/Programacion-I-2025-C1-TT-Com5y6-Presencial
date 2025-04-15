#include <iostream>
using namespace std;

/**
TP02_EJ19
El costo de un desarrollo de un proyecto de software se calcula en base al
lenguaje que se necesita:

Nombre	Tipo	Valor hora
C/C++	'C'		$ 7500
C#		'#'		$ 6100
Python	'P'		$ 5400
Go		'G'		$ 5000

Además, si el proyecto es marcado como Urgente, se le aumenta un 120 % más
al costo del proyecto.
Le solicitan un programa que permita calcular el costo total de un proyecto
basado en la cantidad de horas (int), el tipo de lenguaje (char) y si es
urgente o no (bool)
*/

int main() {
	
	/// DECLARACION DE VARIABLES
	const float LENG_C = 7500;
	const float LENG_CSHARP = 6100;
	const float LENG_P = 5400;
	const float LENG_G = 5000;
	float costoTotal;
	
	int cantidadHoras;
	char tipoLenguaje;
	bool urgente;
	
	/// DE
	cout << "Ingrese cantidad horas: ";
	cin >> cantidadHoras;
	
	cout << "Ingrese tipo de lenguaje: ";
	cout << "C-> C/C++, #->C#, P-> Python, G-> Go" << endl;
	cin >> tipoLenguaje;
	
	cout << "Es urgente (1-SI, 0-NO): ";
	cin >> urgente;
	
	switch(tipoLenguaje){
	case 'C':
	case 'c':
		costoTotal = cantidadHoras * LENG_C;
		break;
	case '#':
		costoTotal = cantidadHoras * LENG_CSHARP;		
		break;
	case 'P':
	case 'p':
		costoTotal = cantidadHoras * LENG_P;		
		break;
	case 'G':
	case 'g':
		costoTotal = cantidadHoras * LENG_G;		
		break;
	default:
		cout << "Opcion invalida!!!" << endl;
	}
	/// ALTERNATIVAS
	/// if(urgente==true)
	/// if(urgente==1)
	
	if(urgente){
		costoTotal*=2.2;
		///costoTotal = costoTotal + costoTotal*1.2;
		
		/// ERROR
		///costoTotal = costoTotal*1.2;
	}
	
	cout <<  "Total: " << costoTotal << endl;
	
	return 0;
}

