/**
El Centro de Poda de Tigre contiene la información de los árboles podados en la
última quincena del mes de Junio.

Por cada día de la quincena contiene:
 - Día (16 a 30)
 - Cantidad de empleados municipales asignados (entero)
 - Cantidad de arbustos podados (entero)
 - Cantidad de árboles medianos podados (entero)
 - Cantidad de árboles grandes podados (entero)

La información no se encuentra agrupada ni ordenada. Se pide calcular e informar:
1 - El día que mayor cantidad de empleados municipales fueron asignados.
2 - La cantidad total de árboles podados en la primer semana (Día 16 a 22). No tener en
cuenta los arbustos.
3 - La cantidad de días en que se hayan podado únicamente arbustos.
*/
#include <iostream>
using namespace std;

int main(){
    int dia, empleados, arbustos, medianos, grandes, i;
    /// Punto A
    int max_empleados = 0;
    int max_dia;
    /// Punto B
    int total_arboles = 0;
    /// Punto C
    int dias_solo_arbustos = 0;

    for(i=1; i<=15; i++){
        cout << "Día: ";
        cin >> dia;
        cout << "Empleados: ";
        cin >> empleados;
        cout << "Arbustos: ";
        cin >> arbustos;
        cout << "Árboles medianos: ";
        cin >> medianos;
        cout << "Árboles grandes : ";
        cin >> grandes;

        /// A
        if (empleados > max_empleados){
            max_empleados = empleados;
            max_dia = dia;
        }
        /// B
        if (dia >= 16 && dia <= 22){
            total_arboles += medianos + grandes;
        }
        /// C
        // if (arbustos && !medianos && !grandes){ /// Funciona igual

        if (arbustos > 0 && medianos== 0 && grandes == 0){
            dias_solo_arbustos++;
        }

    }
    cout << endl << endl << "Punto A" << endl;
    cout << "Día: " << max_dia << endl;

    cout << endl << endl << "Punto B" << endl;
    cout << "Total árboles primer semana: " << total_arboles << endl;

    cout << endl << endl << "Punto C" << endl;
    cout << "Sólo arbustos:" << dias_solo_arbustos;

    return 0;
}
