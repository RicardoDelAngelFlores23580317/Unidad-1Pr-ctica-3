#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    int NUM;

    // Solicitar al usuario que ingrese un número entero positivo
    cout << "Ingrese un numero entero positivo: ";
    cin >> NUM;

    // Verificar si el número es positivo
    if (NUM < 0) {
        cout << "El numero ingresado no es positivo." << endl;
        return 1; // Salir del programa con código de error
    }

    // Calcular y imprimir el cuadrado y el cubo del número
    cout << "El cuadrado de " << NUM << " es: " << NUM * NUM << endl;
    cout << "El cubo de " << NUM << " es: " << NUM * NUM * NUM << endl;

    return 0;
}

