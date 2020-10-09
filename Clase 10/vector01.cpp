/**
Cargar las notas del primer parcial de los 78 alumnos de cierta materia de
programación y contar cuántos de ellos obtuvieron una calificación mayor
al promedio general de calificaciones.
*/
#include <iostream>
using namespace std;

int main(){
    const int T = 7;
    int v[T], i, cant = 0, suma = 0;
    float prom;
    // Cargar calificaciones
    for(i=0; i<T; i++){
        cout << "Ingresar nota: ";
        cin >> v[i];
    }
    // Calcular promedio
    for(i=0; i<T; i++){
        suma += v[i];
    }
    prom = (float) suma/T;

    //cout << endl << "Promedio general: " << prom << endl;
    // Comparar y contar cada nota con respecto al promedio
    for(i=0; i<T; i++){
        if (v[i] > prom){
            cant++;
        }
    }
    cout << endl;
    cout << "La cantidad de notas mayores al promedio: " << cant << endl;


    return 0;
}
