#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    int DIAS;
    long segundos;

    // Solicitar al usuario que ingrese el número de días
    cout << "Ingrese el numero de dias: ";
    cin >> DIAS;

    // Calcular el número de segundos en los días ingresados
    segundos = DIAS * 24 * 60 * 60;

    // Imprimir el número de segundos
    cout << "El numero de segundos en " << DIAS << " dias es: " << segundos << endl;

    return 0;
}

