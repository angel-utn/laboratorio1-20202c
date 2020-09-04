/**
    Dada una lista de números que finaliza con un cero. Calcular e informar
    la cantidad de pares ingresados.

*/
#include <iostream>
using namespace std;

int main(){
    int n, cpares=0;

    cout << "Número: ";
    cin >> n;
    while (n != 0){
        if (n%2 == 0){
            cpares++;
        }
        cout << "Número: ";
        cin >> n;
    }
    cout << "Cantidad de pares: " << cpares << endl;

    return 0;
}
