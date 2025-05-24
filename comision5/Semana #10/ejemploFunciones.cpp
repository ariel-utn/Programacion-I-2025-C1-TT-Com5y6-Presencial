#include <iostream>

using namespace std;

/// FIRMA/PROTOTIPO FUNCION

/// TIENE RETORNO Y RECIBE PARAMETROS
int sumar(int a, int b);
int multiplicar(int a, int b);

/// NO TIENE RETORNO NI RECIBE PARAMETROS
void saludar();

/// NO TIENE RETORNO Y RECIBE UN PARAMETRO
void saludar(string nombre);

/// TIENE RETORNO Y NO RECIBE PARAMETROS
int pedirNumero();

int main(){

    /// LLAMADA A LA FUNCION
    /*
    int num1;
    int num2;
    cout << "Ingrese #:";
    cin >> num1;
    cout << "Ingrese #:";
    cin >> num2;
    int r;
    r = sumar(num1, num2);
    cout << "La suma de " << num1 << " + " << num2 << " es: " << r << endl;
    r = multiplicar(num1, num2);
    cout << "El producto de " << num1 << " * " << num2 << " es: " << r << endl;


    ///saludar();
    string n;
    cout << "Ingrese su nombre: ";
    cin >> n;

    saludar(n);
    */

    int numero;
    numero = pedirNumero();
    cout << "El numero ingresado fue: " << numero << endl;

	return 0;
}

/// IMPLEMENTACION
int sumar(int a, int b){
//    cout << "ENTRO A LA FUNCION" << endl;
//    cout << "A: " << a << endl;
//    cout << "B: " << b << endl;
    int resultado = a + b;
    /// return a + b;
//    cout << "SALE DE LA FUNCION" << endl;
    return resultado;
}

int multiplicar(int a, int b){
    return a * b;
}

void saludar(){
    cout << "Bienvenido/a" << endl;
}

void saludar(string nombre){
    cout << "Bienvenido/a " << nombre << endl;
}

int pedirNumero(){
    int n;
    cout << "Ingrese #: ";
    cin >> n;
    return n;
}
