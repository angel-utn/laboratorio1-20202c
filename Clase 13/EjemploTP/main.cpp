#include <iostream>
using namespace std;
#include "rlutil.h"
using namespace rlutil;
#include "funciones.h"

int main(){
    int vanio[5], opcion;
    float vpaises[10];
    float vproductos[8];

    poner_cero(vanio, 5);
    poner_cero(vpaises, 10);
    poner_cero(vproductos, 8);

    do{
        cls();
        setColor(WHITE);
        cout << "MENÚ PRINCIPAL" << endl;
        cout << "--------------------------------" << endl;
        cout << "1 - Registrar exportaciones" << endl;
        cout << "2 - Reporte A" << endl;
        cout << "3 - Reporte B" << endl;
        cout << "4 - Reporte C" << endl;
        cout << "5 - Créditos" << endl;
        cout << "--------------------------------" << endl;
        cout << "0 - Salir" << endl;
        cout << endl << "> ";
        cin >> opcion;

        switch(opcion){
            case 1:
                registrar_exportaciones(vanio, vpaises, vproductos);
            break;
            case 2:
                reporteA(vanio, 5);
            break;
            case 3:
                reporteB(vpaises, 10);
            break;
            case 4:
                reporteC(vproductos, 8);
            break;
            case 5:
                mostrar_grupo();
            break;
            case 0:

            break;
        }
        cin.ignore();
        anykey();
    }while(opcion != 0);

    return 0;
}
