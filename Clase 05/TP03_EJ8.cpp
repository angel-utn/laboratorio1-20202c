#include <iostream>

using namespace std;

int main(){
	int i;
	int legajo, legajoMaximo;
	float sueldo, sueldoMaximo=0;

	for (i = 1; i <= 10; i++) {
		cout << "Ingrese Legajo: ";
		cin >> legajo;

		cout << "Sueldo: ";
		cin >> sueldo;

		if (sueldo > sueldoMaximo) {
			sueldoMaximo = sueldo;
			legajoMaximo = legajo;
		}
	}

	cout << "El Mayor es: " << legajoMaximo;

	return 0;
}