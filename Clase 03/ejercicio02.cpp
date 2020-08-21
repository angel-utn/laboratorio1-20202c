/**
    Hacer un programa en el que se ingresen la edad y altura de 3 personas. Luego,
    calcular e informar:
    - La cantidad de personas mayores a 30 años que midan más de 1.8
    metros.
    - El promedio de altura de las personas mayores a 30 años.
    - La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
    - La cantidad de personas cuya edad sea de 20, 30 o 40 años. (3 resultados)
    - La cantidad de personas cuya edad sea de 20, 30 o 40 años. (1 resultados)
*/
#include <iostream>
using namespace std;

int main(){
    int edad;
    float altura;
    int cA=0; ///A
    float prom, suma=0.0; ///B
    int cB=0; ///B
    int cC=0; ///C
    int c20=0, c30=0, c40=0; ///D
    int cE=0; ///E

    ///Persona #1
    cout << "Edad: ";
    cin >> edad;

    cout << "Altura: ";
    cin >> altura;

    ///A
    if (edad > 30){
        if (altura > 1.8){
            cA++;
        }
        ///B
        suma = suma + altura;
        cB++;
    }
    ///C
    if (altura >= 1.7 && altura <= 1.8){
        cC++;
    }
    ///D
    switch(edad){
        case 20:
            c20++;
        break;
        case 30:
            c30++;
        break;
        case 40:
            c40++;
        break;
    }
    ///E
    if (edad == 20 || edad == 30 || edad == 40){
        cE++;
    }

    //Persona #2
        cout << "Edad: ";
    cin >> edad;

    cout << "Altura: ";
    cin >> altura;

    ///A
    if (edad > 30){
        if (altura > 1.8){
            cA++;
        }
        ///B
        suma = suma + altura;
        cB++;
    }
    ///C
    if (altura >= 1.7 && altura <= 1.8){
        cC++;
    }
    ///D
    switch(edad){
        case 20:
            c20++;
        break;
        case 30:
            c30++;
        break;
        case 40:
            c40++;
        break;
    }
    ///E
    if (edad == 20 || edad == 30 || edad == 40){
        cE++;
    }

    //Persona #3
        cout << "Edad: ";
    cin >> edad;

    cout << "Altura: ";
    cin >> altura;

    ///A
    if (edad > 30){
        if (altura > 1.8){
            cA++;
        }
        ///B
        suma = suma + altura;
        cB++;
    }
    ///C
    if (altura >= 1.7 && altura <= 1.8){
        cC++;
    }
    ///D
    switch(edad){
        case 20:
            c20++;
        break;
        case 30:
            c30++;
        break;
        case 40:
            c40++;
        break;
    }
    ///E
    if (edad == 20 || edad == 30 || edad == 40){
        cE++;
    }

    cout << endl << "Punto A: ";
    cout << cA << endl;

    if (cB > 0){
        prom = suma / cB;
        cout << endl << "Punto B: ";
        cout << prom << endl;
    }
    cout << endl << "Punto C: ";
    cout << cC << endl;
    cout << endl << "Punto D: " << endl;
    cout << "20 años: " << c20 << endl;
    cout << "30 años: " << c30 << endl;
    cout << "40 años: " << c40 << endl;

    cout << endl << "Punto E: ";
    cout << cE << endl;



    return 0;
}
