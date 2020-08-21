/**
    Una fábrica de caramelos dispone de un presupuesto inicial para inaugurar su
    sucursal en Villa Brian Lara. Se sabe que para producir caramelos tienen los
    siguientes costos:
    - Costo de alquiler de $10000
    - Costo por caramelo producido de $0.5
    - Costo por mantenimiento cada 1000 caramelos de $5000
    Dados el presupuesto inicial y la cantidad de caramelos a producir el primer
    mes, informar:
    - "El presupuesto es suficiente para cubrir los costos de $XXXX"
    - "El presupuesto no es suficiente, necesita un crédito de $XXXX"
*/
#include <iostream>
using namespace std;

int main(){
    float presupuesto;
    int caramelos;
    float costo_total;
    float alquiler = 10000;
    float mantenimiento = 0;

    cout << "Presupuesto : $";
    cin >> presupuesto;
    cout << "Caramelos a producir: ";
    cin >> caramelos;

    mantenimiento = (caramelos/1000)*5000;
    costo_total = alquiler + (caramelos*0.5) + mantenimiento;

    cout << endl << endl;
    if (presupuesto >= costo_total){
        cout << "El presupuesto es suficiente para cubrir los costos de $" << costo_total;
    }
    else{
        cout << "El presupuesto no es suficiente, necesita un crédito de $" << costo_total - presupuesto;
    }

    return 0;
}
