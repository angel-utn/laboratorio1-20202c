#include <iostream>
using namespace std;

int main(){
    int i, hasta;
    cout << "Ingresar tope: ";
    cin >> hasta;

    for(i=1; i<=hasta; i++){
        cout << i << " ";
    }
    cout << endl  <<"Fuera del for: " << i << endl;
    return 0;
}
