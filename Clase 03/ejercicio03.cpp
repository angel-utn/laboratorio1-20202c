/*
Una granja dispone de 45 conejos blancos, 50 conejos negros, 40 marrones y 49 grises. 
Se pide hacer un programa donde se ingresen tres ventas. 
Cada venta está compuesta por:
	* Cantidad de conejos
	* Tipo de conejo (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)

Calcular e informar:
- Cantidad total de conejos vendidos.
- Cuantos conejos quedaron de cada tipo.
- Los tipos de conejos que no se vendieron.

NOTA: Ninguna venta superará los 10 conejos.
*/

#include <iostream>
using namespace std;


int main() {
	int cantidad, tipo, cantidadTotal=0;
	int cMar = 40, cBla = 45, cNeg = 50, cGri = 49;

	// Banderas para saber si se vendieron conejos de cada tipo
	bool bNeg, bBlan, bGri, bMar;
	bNeg = bBlan = bGri = bMar = false;

	// Venta #1 
	cout << "Cantidad: ";
	cin >> cantidad;

	cout << "Tipo: ";
	cin >> tipo;

	cantidadTotal += cantidad;

	switch (tipo)
	{
	case 1:
		cBla -= cantidad;
		bBlan = true;
		break;
	case 2:
		cNeg -= cantidad;
		bNeg = true;
		break;
	case 3:
		cMar -= cantidad;
		bMar = true;
		break;
	case 4:
		cGri -= cantidad;
		bGri = true;
		break;
	}

	// Venta #2
	cout << "Cantidad: ";
	cin >> cantidad;

	cout << "Tipo: ";
	cin >> tipo;

	cantidadTotal += cantidad;

	switch (tipo)
	{
	case 1:
		cBla -= cantidad;
		bBlan = true;
		break;
	case 2:
		cNeg -= cantidad;
		bNeg = true;
		break;
	case 3:
		cMar -= cantidad;
		bMar = true;
		break;
	case 4:
		cGri -= cantidad;
		bGri = true;
		break;
	}

	// Venta #3 
	cout << "Cantidad: ";
	cin >> cantidad;

	cout << "Tipo: ";
	cin >> tipo;

	cantidadTotal += cantidad;

	switch (tipo)
	{
	case 1:
		cBla -= cantidad;
		bBlan = true;
		break;
	case 2:
		cNeg -= cantidad;
		bNeg = true;
		break;
	case 3:
		cMar -= cantidad;
		bMar = true;
		break;
	case 4:
		cGri -= cantidad;
		bGri = true;
		break;
	}

	// A

	cout << "Cantidad total de conejos vendidos: " << cantidadTotal << endl;

	// B

	cout << "Cuantos conejos quedaron de cada tipo: " << endl;
	cout << "Blancos: " << cBla <<  endl;
	cout << "Negros: " << cNeg << endl;
	cout << "Marrones: " << cMar << endl;
	cout << "Grises: " << cGri << endl;

	// C

	if (bBlan == false) {
		cout << "Los conejos blancos no se vendieron." << endl;
	}

	if (bNeg == false) {
		cout << "Los conejos Negros no se vendieron." << endl;
	}

	if (bMar == false) {
		cout << "Los conejos Marrones no se vendieron." << endl;
	}

	if (bGri == false) {
		cout << "Los conejos Grises no se vendieron." << endl;
	}
	return 0;
}