#include <iostream>

using namespace std;

/// DECLARACION DE LA FUNCION
void porValor(int num);
void porReferencia(int &num);

int main(){

    int n = 5;
    /*
    porValor(n);
    cout << "MAIN" << endl;
    cout << n << endl;
    */
    porReferencia(n);
    cout << "MAIN" << endl;
    cout << n << endl;

	return 0;
}

/// IMPLEMENTACION
void porValor(int num){
 num = 8;
 cout << "Valor" << endl;
 cout << num << endl;

}

void porReferencia(int &num){
    num = 8;
    cout << "Referencia" << endl;
    cout << num << endl;
}
