#include <iostream>
using namespace std;
#include <cstring>
#include "rlutil.h"
using namespace rlutil;
#include "funciones.h"


void poner_cero(float vec[], int tam){
    int i;
    for(i=0; i<tam; i++){
        vec[i] = 0;
    }
}
void poner_cero(int vec[], int tam){
    int i;
    for(i=0; i<tam; i++){
        vec[i] = 0;
    }
}
void registrar_exportaciones(int vanio[], float vpaises[], float vproductos[]){
    int anio, idpais, idproducto;
    float tn, importe;
    cls();
    cout << "CARGA DE EXPORTACIONES" << endl;
    cout << "------------------------" << endl;
    cout << "Año: ";
    cin >> anio;
    while (anio != 0){
        cout << "País: ";
        cin >> idpais;
        cout << "Producto: ";
        cin >> idproducto;
        while (idproducto < 1 || idproducto >8){
            cout << "-- Reigresar producto: ";
            cin >> idproducto;
        }
        cout << "Toneladas: ";
        cin >> tn;
        cout << "Importe: $";
        cin >> importe;

        vanio[anio-2016]++;
        vpaises[idpais-101]+=tn;
        vproductos[idproducto-1]+=importe;

        cout << "-------------------" << endl;
        cout << "Año: ";
        cin >> anio;
    }

}

int buscar_posicion_maximo(float vec[], int tam){
    int i;
    int maximo, posicion;
    // Asumimos que el más grande es el primer elemento
    maximo = vec[0];
    posicion = 0;
    // Buscamos en el vector el valor más grande
    for(i=1; i<tam; i++){
        if (vec[i] > maximo){
            maximo = vec[i];
            posicion = i;
        }
    }
    return posicion;
}


void reporteA(int vec[], int tam){
    int i;
    cls();
    cout << "CANTIDAD DE EXPORTACIONES POR AÑO" << endl;
    cout << "---------------------------------" << endl;
    for(i=0; i<tam; i++){
        cout << "Año: " << i+2016 << endl;
        cout << "Cantidad: " << vec[i] << endl;
        cout << endl;
    }
}
void reporteB(float vec[], int tam){
    int pais;
    cls();
    cout << "PAÍS DE MAYOR ACUMULACIÓN DE EXPORTACIONES" << endl;
    cout << "------------------------------------------" << endl;
    pais=buscar_posicion_maximo(vec, tam);
    cout << "Código de país: " << pais + 101;
}
void asignar_producto(int nro, char nombre[]){
    switch(nro){
       case 1: strcpy(nombre,"Soja"); break;
       case 2: strcpy(nombre,"Trigo"); break;
       case 3: strcpy(nombre,"Maíz"); break;
       case 4: strcpy(nombre,"Limón"); break;
       case 5: strcpy(nombre,"Naranja"); break;
       case 6: strcpy(nombre,"Manzana"); break;
       case 7: strcpy(nombre,"Carne vacuna"); break;
       case 8: strcpy(nombre,"Mariscos"); break;
    }
}
void reporteC(float vec[], int tam){
    cls();
    char nombre_producto[13];
    cout << "TOTAL RECAUDADO POR PRODUCTO" << endl;
    cout << "------------------------------------------" << endl;
    int i;
    for(i=0; i<tam; i++){
        asignar_producto(i+1, nombre_producto);
        cout << "Código: " << i+1 << endl;
        cout << "Nombre: " << nombre_producto << endl;
        cout << "Total : $ " << vec[i] << endl;
        cout << endl;
    }
}
void mostrar_grupo(){
    cls();

    setColor(WHITE);
    setBackgroundColor(RED);
    cout << "#########################" << endl;
    cout << "#      BRIANGEL LARAMON #" << endl;
    cout << "#########################" << endl;
    resetColor();
    setColor(WHITE);
    setBackgroundColor(DARKGREY);
}








