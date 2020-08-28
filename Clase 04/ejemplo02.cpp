/**
Hacer un programa en el que se ingresen la edad y altura de 5 personas. Luego,
calcular e informar:
- La cantidad de personas mayores a 30 años que midan más de 1.8
metros.
- El promedio de altura de las personas mayores a 30 años.
- La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
- La cantidad de personas cuya edad sea de 20, 30 o 40 años.
*/
#include <iostream>
using namespace std;

int main(){
    const int P=5;
    int edad, i;
    float altura;
    int cA; /// A
    float prom, suma; //B
    int cB; //B
    cA = 0;
    cB = 0;
    suma = 0;

    for(i=1; i<=P; i++){
        cout << "Persona #" << i << endl;
        cout << "------------------" << endl;
        cout << "Edad: ";
        cin >> edad;
        cout << "Altura: ";
        cin >> altura;
        cout << endl;

        if (edad > 30 && altura > 1.8){
            cA++;
        }

        if (edad > 30){
            suma += altura;
            cB++;
        }
    }
    cout << "Punto A" << endl;
    cout << cA << endl << endl;

    cout << "Punto B" << endl;
    if (cB > 0){
        prom = suma/cB;
        cout << prom << endl;
    }
    else{
        cout << "No hubo personas de maś de 30 años." << endl;
    }
    return 0;
}
