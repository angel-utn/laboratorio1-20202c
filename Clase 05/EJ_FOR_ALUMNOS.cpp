/*

	Se dispone de las notas de 50 alumnos de una universidad 
	por cada alumno se registro:

		- Legajo
		- Nota
		- Carrera (1,2,3)

	Hay un registro por cada alumno, calcular e informar:
	A) Promedio de notas de la carrera 2
	B) Porcentaje de examenes por carrera
	C) El alumno con mejor nota de la carrera 3
*/

#include <iostream>

using namespace std;

int main() {
	const int CANT_EXAMENES = 3;
	int i;
	int legajo, nota, carrera;
	// A
	int sumaCarrera2, cantCarrera2;

	// B
	int cantCarrera1, cantCarrera3;
	float porC1, porC2, porC3;

	int legajoMaximo, notaMaximo = -1;

	cantCarrera1 = cantCarrera3 = sumaCarrera2 = cantCarrera2 = 0;
			

	for (i = 1; i <= CANT_EXAMENES; i++) {
		cout << "Ingrese Legajo: ";
		cin >> legajo;

		cout << "Nota: ";
		cin >> nota;

		cout << "Carrera: ";
		cin >> carrera;

		switch (carrera)
		{
		case 1:
			cantCarrera1++;
			break;
		case 2:
			sumaCarrera2 += nota;
			cantCarrera2++;
			break;
		case 3:
			cantCarrera3++;

			if (nota > notaMaximo) {
				notaMaximo = nota;
				legajoMaximo = legajo;
			}

			break;
		}

	}

	if (cantCarrera2 != 0) {
		cout << "Punto A) Promedio: " << sumaCarrera2 / (float)cantCarrera2 << endl;
	}
	else {
		cout << "Punto A) No hay notas de la carrera 2" << endl;
	}

	porC1 = (float)cantCarrera1 / CANT_EXAMENES * 100;
	porC2 = (float)cantCarrera2 / CANT_EXAMENES * 100;
	porC3 = (float)cantCarrera3 / CANT_EXAMENES * 100;

	cout << "Punto B) " << endl;

	cout << "Porcentaje Carrera 1: " << porC1 << endl;
	cout << "Porcentaje Carrera 2: " << porC2 << endl;
	cout << "Porcentaje Carrera 3: " << porC3 << endl;

	if (notaMaximo != -1) {
		cout << "Punto C) Maximo es: " << legajoMaximo << endl;
	}
	else {
		cout << "Punto C) No hay alumnos en la carrera 3 " << endl;
	}

	return 0;
}


