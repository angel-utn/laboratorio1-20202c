#include <iostream>
using namespace std;

int main(){
    int edad;
    char inmuno;
    cout << "Autodiagnóstico de Laravirus" << endl;
    cout << "----------------------------" << endl;
    cout << "Ingresar su edad: ";
    cin >> edad;
    cout << "¿Se encuentra inmunosuprimido? (S/N): ";
    cin >> inmuno;
    cout << endl;
    if (edad > 80 || inmuno == 'S'){
        cout << "Paciente de riesgo para Laravirus. ";
    }
    else{
        cout << "Todo tranquilo. ";
        cout << "No pasa nada.";
    }

    return 0;
}
