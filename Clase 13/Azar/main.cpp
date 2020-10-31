#include <iostream>
using namespace std;
#include <cstdio>
#include <ctime>
#include <cstdlib>
#include "bibliotecas/rlutil.h"
using namespace rlutil;

int main(){
    srand(time(0)); //Inicializa el gestor de números al azar

    int i, n, color, colorF;

    cout << "Listado de números con color" << endl << endl;

    for(i=1; i<= 10; i++){
        //msleep(1000);
        gotoxy(40, i);
        n = 10 + (rand() % 11); //rand() calcula número al azar
        color = rand() % 15 + 1;
        colorF = rand() % 15 + 1;
        setColor(color);
        setBackgroundColor(colorF);
        cout << n;
    }

    return 0;
}
