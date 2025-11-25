#include <iostream>
using namespace std;

void abrirMuneca(int numero){
	if(numero == 1){
		cout << "Abra la muneca" << endl;
		return;
	}
	cout << "Abriendo muneca: " << numero << endl;
	
	abrirMuneca(numero - 1);
}

int main(){
	abrirMuneca(8);
	return 0;
}
