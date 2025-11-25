#include <iostream>
using namespace std;

int main(){
	int num, indice;
	
	cout << "Ingrese el tamaño del arreglo: ";
	cin >> num;
	int arr[num];

	for(int i=0;i<num;i++){
		cout << "Ingrese el valor: " << i + 1 << ": ";
		cin >> arr[i];
	}
	
	cout << "Ingrese la posicion del numero a  buscar: ";
	cin >> indice;
	
	for(int i=0;i<num;i++){
		indice = arr[i];
	}
	cout << "El numero en esa posicion es: " << indice;

	return 0;
}
