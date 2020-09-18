/**

Una agencia de viaje posee la información de algunos destinos turísticos que
comercializó en algunos de los meses del año 2019. Por cada registro se ingresa:
- Código de destino turístico (entero)
- Número de mes (entero entre 1 y 12)
- Cantidad de pasajes vendidos (entero)
- Total recaudado (float)

La información se encuentra agrupada por destino turístico pero no se encuentra ordenada
bajo ningún criterio. No se sabe la cantidad de destinos turísticos ni la cantidad de meses
que cada destino trabajó. Para indicar el fin del programa se ingresa un código de destino
igual a cero.

Se pide calcular e informar:
A) La cantidad total de pasajes vendidos en el año 2019 entre todos los destinos
turísticos.
B) Por cada destino turístico, el total recaudado.

*/
#include <iostream>
using namespace std;

int main(){
    int dest, mes, cant, dest_anterior;
    float rec;
    // A
    int total_pasajes = 0;
    // B
    float rec_destino;

    cout << "Código de destino: ";
    cin >> dest;

    while (dest != 0){

        dest_anterior = dest;
        rec_destino = 0; //B

        while(dest == dest_anterior){
            cout << "Mes: ";
            cin >> mes;

            cout << "Cantidad de pasajes: ";
            cin >> cant;

            cout << "Recaudación: $";
            cin >> rec;

            /// A
            total_pasajes += cant;
            /// B
            rec_destino += rec;

            cout << "Código de destino: ";
            cin >> dest;
        }
        cout << endl << endl << "Punto B" << endl;
        cout << "Destino    :   " << dest_anterior << endl;
        cout << "Recaudación: $ " << rec_destino << endl << endl;

    }
    cout << endl << endl << "Punto A" << endl;
    cout << "Cantidad de pasajes: " << total_pasajes << endl;
    return 0;
}
