/**
    Dada una lista de números que finaliza con un cero. Calcular e informar
    la cantidad de pares ingresados.

*/
#include <iostream>
using namespace std;

int main(){
    bool continuar = true;
    int n=1, cpares=0;

    while (continuar == true){
        cout << "Número: ";
        cin >> n;

        if (n%2 == 0){
            cpares++;
        }
        if (n == 0){
            continuar = false;
        }
    }
    cout << "Cantidad de pares: " << cpares << endl;
    return 0;
}
