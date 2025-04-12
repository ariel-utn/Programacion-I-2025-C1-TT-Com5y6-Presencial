#include <iostream>

using namespace std;

/**
    HACER UN PROGRAMA QUE MUESTRE LOS NUMEROS PARES QUE EXISTEN ENTRE EL 1 Y EL 100, INCLUSIVES

*/

int main(){

    cout<<"PRIMERA FORMA: "<<endl;
    for(int i=1; i<=100; i++)
    {
        if(i%2==0)
        {
           cout<<"MULTIPLOS DE 2: "<< i <<endl;
        }
    }
    system("pause");
    system("cls"); ///limpiar pantalla

    cout<<"SEGUNDA FORMA: "<<endl;
    for(int i=2; i<=100; i = i + 2)
    {
        cout<<"MULTIPLOS DE 2: "<< i <<endl;
    }

	return 0;
}
