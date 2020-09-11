#include <iostream>
using namespace std;

int main(){
    const int DESTINOS = 5;
    const int MESES = 4;
    int dest, mes, cant, i, j;
    float rec;
    // A
    int total_cantidad = 0;
    // B
    float total_r;

    for(i=1; i<=DESTINOS; i++){
        // B
        total_r = 0;

        cout << "Destino: ";
        cin >> dest;

        for(j=1; j<=MESES; j++){
            cout << "Mes: ";
            cin >> mes;
            cout << "Cantidad: ";
            cin >> cant;
            cout << "Recaudación: $";
            cin >> rec;

            total_cantidad += cant; // A
            total_r += rec; //B
        }
        cout << endl<< endl << "Punto B";
        cout << "Destino: " << dest << endl;
        cout << "Recaudación: $ " << total_r << endl << endl;
    }
    cout << endl << endl << "Punto A";
    cout << "Total pasajes: " << total_cantidad << endl;

    return 0;
}
