#include <iostream>
using namespace std;

int main(){
    float temperatura;
    cout << "Ingrese su temperatura en ºC: ";
    cin >> temperatura;

    if (temperatura > 37.5){
        cout << "Tenés fiebre.";
    }
    else{
        cout << "No tenés fiebre.";
    }
    return 0;
}
