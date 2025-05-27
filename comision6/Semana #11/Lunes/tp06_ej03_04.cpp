#include <iostream>
using namespace std;

/// DECLARACION
bool esPrimo(int n);
bool esPrimoSophieGermain(int n);

int main() {
	for(int i = 1; i <=100; i++){
		if(esPrimoSophieGermain(i)){
			cout << i << endl;
		}
	}	
	return 0;
}

bool esPrimo(int n){
	int cd=0;
	for(int i = 1; i<=n; i++){
		if(n%i==0){
			cd++;
		}
	}
	if(cd==2){
		return true;
	}
	return false;
}
bool esPrimoSophieGermain(int n){
	if( (esPrimo(n)) && (esPrimo(2*n+1))){
		return true;
	}
	return false;
}

