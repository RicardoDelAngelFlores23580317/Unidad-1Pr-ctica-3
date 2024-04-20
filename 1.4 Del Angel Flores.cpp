#include <iostream>
using namespace std;

int main() {
    float galones, precio_litro, total_pagar;

    // Solicitar al usuario la cantidad de galones surtidos
    cout << "Ingrese la cantidad de galones surtidos: ";
    cin >> galones;

    // Solicitar al usuario el precio por litro de gasolina
    cout << "Ingrese el precio por litro de gasolina: ";
    cin >> precio_litro;

    // Calcular el total a pagar
    total_pagar = galones * precio_litro*3.785;

    // Imprimir el total a pagar al cliente
    cout << "Total a pagar: $" << total_pagar << endl;

    return 0;
}
