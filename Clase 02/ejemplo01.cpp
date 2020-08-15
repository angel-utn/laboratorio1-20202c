#include <iostream>
using namespace std;
//#include <clocale>

// Comentario de una línea

/*
    Comentario de
    varias líneas
*/


int main(){
    //setlocale(LC_ALL, "Spanish");
    float temperatura;
    char dolor_cabeza;

    cout << "Autodiagnóstico de Laravirus" << endl;
    cout << "----------------------------" << endl;
    cout << "Ingresar su temperatura: ";
    cin >> temperatura;
    cout << "¿Sintió dolor de cabeza? (S/N): ";
    cin >> dolor_cabeza;

    cout << endl;

    if (temperatura > 37.5 && dolor_cabeza == 'S'){
        cout << "Diríjase a un hospital. Posible Laravirus";
    }
    else{
        cout << "Todo tranquilo.";
    }



    return 0;
}
