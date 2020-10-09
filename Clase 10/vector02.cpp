/**
Se dispone de las ventas de un negocio durante el mes pasado.
Por cada venta se registró el número de venta, el número de día y
 el importe de la venta. El fin de la carga de datos se indica con
 número de venta igual a 0. Se pide calcular e informar:

- Por cada día del mes, el total facturado.
- Los días del mes que no tuvieron ventas.
*/
#include <iostream>
using namespace std;

int main(){
    float vfact[31] = {}, importe;
    int nv, dia, i;

    cout << "Número de venta: ";
    cin >> nv;
    while (nv != 0){
        cout << "Día: ";
        cin >> dia;
        cout << "Importe: $";
        cin >> importe;
        // A y B
        vfact[dia-1] += importe;

        cout << "Número de venta: ";
        cin >> nv;
    }
    cout << endl << "Punto A" << endl;
    for(i=0; i<30; i++){
        cout << "Día " << i+1;
        cout << ": $ ";
        cout << vfact[i] << endl;
        //cout << "Día " << i +1 << ": $ " << vfact[i] << endl;
    }
    cout << endl << "Punto B" << endl;
    for(i=0; i<30; i++){
        if(vfact[i] == 0){
            cout << i+1 << " ";
        }
    }
    return 0;
}
