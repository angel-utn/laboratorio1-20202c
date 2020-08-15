#include <iostream>
using namespace std;

int main(){
    char fp;
    cout << "Ingresar forma de pago: ";
    cin >> fp;
    cout << endl;
    switch(fp){
        case 'E':
        case 'e':
        case '1':
            cout << "Efectivo";
        break;
        case 'C':
        case 'c':
        case '2':
            cout << "Cheque";
        break;
        default:
            cout << "Forma de pago incorrecta.";
        break;
    }

    return 0;
}
