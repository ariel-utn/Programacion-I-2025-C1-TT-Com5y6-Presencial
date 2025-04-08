#include <iostream>

using namespace std;

/** OPERADORES LOGICOS

    LO USAMOS PARA CONSTRUIR EXPRESIONES LOGICAS COMPLEJAS.


AND -->  Y --> &&

OR  -->  O --> ||

NOT --> NEGACION --> !

TABLA DEL AND
E1  OP  E2  R
V   &&  V   V
V   &&  F   F
F   &&  V   F
F   &&  F   F

TABLA DEL OR
E1  OP  E2  R
V   ||  V   V
V   ||  F   V
F   ||  V   V
F   ||  F   F

TABLA DEL NOT
E1  OP  R
V   !V  F
F   !F  V



*/
int main(){

    cout << "TABLA DEL AND" << endl;
    cout << ( (5<6) && (5>0) ) << endl;
    cout << ( (5<6) && (5==0) ) << endl;
    cout << ( (5==6) && (5>0) ) << endl;
    cout << ( (5==6) && (5==0) ) << endl;

    cout << "TABLA DEL OR" << endl;
    cout << ( (5<6) || (5>0) ) << endl;
    cout << ( (5<6) || (5==0) ) << endl;
    cout << ( (5==6) || (5>0) ) << endl;
    cout << ( (5==6) || (5==0) ) << endl;

    cout << "TABLA DEL NOT" << endl;
    cout << ( !(5<6) ) << endl;
    cout << ( !(5==6) ) << endl;

	return 0;
}
