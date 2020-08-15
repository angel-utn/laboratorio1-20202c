/*
Un negocio aplica descuentos y recargos en base a la forma de pago de la venta.
'E'fectivo -- %20 de descuento en compras mayores a $10000
'C'rédito  -- %15 de recargo
'D'ébito   -- %10 de descuento

Dado el importe de la venta y la forma de pago.

Calcular e informar el total a pagar.
*/
#include <iostream>
using namespace std;

int main()
{
    float importe, total;
    char fp;

    cout << "Importe: $ ";
    cin >> importe;

    cout << "Forma de pago: ";
    cin >> fp;

    switch(fp)
    {
        case 'E':
        case 'e':
            if (importe > 10000)
            {
                total = importe * 0.8;
            }
            else
            {
                total = importe;
            }
            break;
        case 'C':
        case 'c':
            total = importe * 1.15;
        break;
        case 'D':
        case 'd':
            total = importe * 0.9;
        break;
        default:
            cout << endl << "Forma de pago incorrecta.";
            total = importe;
        break;
    }
    cout << endl <<  "El total a pagar es: $ " << total << endl;
    return 0;
}
