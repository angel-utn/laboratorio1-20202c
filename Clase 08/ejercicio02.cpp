#include <iostream>
using namespace std;

int main(){
    int accion, volumen, dia, i;
    float apertura, cierre;
    /// A
    int cantidad_acciones_baja = 0;
    bool siempre_baja;
    int cant_baja, cant_cot;

    /// B
    int suma_volumen = 0;
    int cot = 0;
    float promedio;

    /// C
    int max_suba, max_dia, max_accion, suba;

    for(i=1; i<=3; i++){
        cout << "Código de acción: ";
        cin >> accion;
        cout << "Día: ";
        cin >> dia;
        ///A
        cant_cot = cant_baja = 0; /// Con contadores
        siempre_baja = true; /// Con bandera

        while(dia != 0){
            cout << "Apertura $: ";
            cin >> apertura;
            cout << "Cierre: $ ";
            cin >> cierre;
            cout << "Volumen: ";
            cin >> volumen;

            /// A con contadores
            cant_cot++;
            if (cierre < apertura){
                cant_baja++;
            }

            /// B
            cot++;
            suma_volumen+=volumen;

            /// C
            if (cierre >= apertura){
                /// A con bandera
                siempre_baja = false;
                /// C
                suba = cierre - apertura;
                if (suba > max_suba){
                    max_suba = suba;
                    max_dia = dia;
                    max_accion = accion;
                }
            }

            cout << "Día: ";
            cin >> dia;
        }
        /*
        Punto A con contadores
        if (cant_cot == cant_baja){
            cantidad_acciones_baja++;
        }
        */
        /// Punto A con banderas
        if (siempre_baja == true){
            cantidad_acciones_baja++;
        }

    }
    cout << endl << endl << "Punto A" << endl;
    cout << "Cantidad de acciones a la baja: " << cantidad_acciones_baja;

    cout << endl << endl << "Punto B" << endl;

    cout << "Promedio de volumen: ";
    promedio = (float) suma_volumen / cot;
    cout << promedio;

    cout << endl << endl << "Punto C" << endl;
    cout << "Día de mayor suba   : " << max_dia << endl;
    cout << "Acción de mayor suba: " << max_accion << endl;
    return 0;
}
