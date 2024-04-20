#include <iostream>

using namespace std;

int main() {
    // Declaraci�n de variables
    float BASE, ALTU, superficie, perimetro;

    // Solicitar al usuario que ingrese la base y la altura del rect�ngulo
    cout << "Ingrese la base del rectangulo: ";
    cin >> BASE;
    cout << "Ingrese la altura del rectangulo: ";
    cin >> ALTU;

    // Calcular la superficie del rect�ngulo
    superficie = BASE * ALTU;

    // Calcular el per�metro del rect�ngulo
    perimetro = 2 * (BASE + ALTU);

    // Imprimir la superficie y el per�metro del rect�ngulo
    cout << "La superficie del rectangulo es: " << superficie << endl;
    cout << "El perimetro del rectangulo es: " << perimetro << endl;

    return 0;
}

