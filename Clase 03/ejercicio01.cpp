#include <iostream>
using namespace std;

int main(){
    int horas;
    bool urgente; /// 1 - Sí y 0 - No
    char tipo;
    float importe, valor_hora;

    cout << "Tipo : ";
    cin >> tipo;
    cout << "Horas: ";
    cin >> horas;
    cout << "Urgente: ";
    cin >> urgente;

    switch(tipo){
        case 'C':
            valor_hora = 2500;
        break;
        case '#':
            valor_hora = 2100;
        break;
        case 'P':
            valor_hora = 1400;
        break;
        case 'G':
            valor_hora = 2000;
        break;
    }

    importe = valor_hora * horas;

    if (urgente == true){
        importe = importe * 2.2;
    }

    cout << endl << "Importe a pagar $ " << importe << endl;
    return 0;
}
