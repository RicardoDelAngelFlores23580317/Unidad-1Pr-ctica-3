#include <iostream>

using namespace std;

int main() {
    // Declaraci�n de variables
    int DIAS;
    long segundos;

    // Solicitar al usuario que ingrese el n�mero de d�as
    cout << "Ingrese el numero de dias: ";
    cin >> DIAS;

    // Calcular el n�mero de segundos en los d�as ingresados
    segundos = DIAS * 24 * 60 * 60;

    // Imprimir el n�mero de segundos
    cout << "El numero de segundos en " << DIAS << " dias es: " << segundos << endl;

    return 0;
}

