#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    float BASE, ALTU, superficie, perimetro;

    // Solicitar al usuario que ingrese la base y la altura del rectángulo
    cout << "Ingrese la base del rectangulo: ";
    cin >> BASE;
    cout << "Ingrese la altura del rectangulo: ";
    cin >> ALTU;

    // Calcular la superficie del rectángulo
    superficie = BASE * ALTU;

    // Calcular el perímetro del rectángulo
    perimetro = 2 * (BASE + ALTU);

    // Imprimir la superficie y el perímetro del rectángulo
    cout << "La superficie del rectangulo es: " << superficie << endl;
    cout << "El perimetro del rectangulo es: " << perimetro << endl;

    return 0;
}

