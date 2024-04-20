#include <iostream>

using namespace std;

int main() {
    // Declaraci�n de variables
    int NUM;

    // Solicitar al usuario que ingrese un n�mero entero positivo
    cout << "Ingrese un numero entero positivo: ";
    cin >> NUM;

    // Verificar si el n�mero es positivo
    if (NUM < 0) {
        cout << "El numero ingresado no es positivo." << endl;
        return 1; // Salir del programa con c�digo de error
    }

    // Calcular y imprimir el cuadrado y el cubo del n�mero
    cout << "El cuadrado de " << NUM << " es: " << NUM * NUM << endl;
    cout << "El cubo de " << NUM << " es: " << NUM * NUM * NUM << endl;

    return 0;
}

