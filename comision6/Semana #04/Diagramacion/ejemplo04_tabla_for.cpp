#include <iostream>

using namespace std;

/**
    TABLA DE MULTIPLICAR
*/

int main(){

    int num;

    cout << "INGRESE #: ";
    cin >> num;

    cout << "TABLA DEL " << num << endl;

    /// PARA HACER LA TABLA DE MULTIPLICAR
    for(int i = 1; i <=10; i++){
        cout << num << " x " << i <<" = " << num*i << endl;
    }

	return 0;
}
