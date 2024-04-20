#include <iostream>

using namespace std;

int main() {
    // Declaraci�n de variables
    float PREPRO, PAGO, cambio;

    // Solicitar al usuario que ingrese el precio del producto y la cantidad pagada
    cout << "Ingrese el precio del producto: $";
    cin >> PREPRO;
    cout << "Ingrese la cantidad pagada por el cliente: $";
    cin >> PAGO;

    // Calcular el cambio
    cambio = PAGO - PREPRO;

    // Verificar si el cliente pag� lo suficiente
    if (cambio < 0) {
        cout << "El cliente no pag� lo suficiente. Faltan $" << -cambio << " por pagar." << endl;
    } else if (cambio == 0) {
        cout << "El cliente pag� exactamente el precio del producto. No hay cambio." << endl;
    } else {
        // Imprimir el cambio
        cout << "El cambio a entregar al cliente es: $" << cambio << endl;
    }

    return 0;
}

