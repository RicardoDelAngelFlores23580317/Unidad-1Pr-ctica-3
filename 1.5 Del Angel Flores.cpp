#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.1416;

int main() {
    // Declaración de variables
    double RADIO, ALTU, area, volumen;

    // Solicitar al usuario que ingrese el radio y la altura del cilindro
    cout << "Ingrese el radio del cilindro: ";
    cin >> RADIO;

    cout << "Ingrese la altura del cilindro: ";
    cin >> ALTU;

    // Calcular el área superficial del cilindro
    area = 2 * PI * RADIO * ALTU;

    // Calcular el volumen del cilindro
    volumen = PI *(RADIO * RADIO ) * ALTU;

    // Imprimir el área y el volumen del cilindro
    cout << "El area superficial del cilindro es: " << area << endl;
    cout << "El volumen del cilindro es: " << volumen << endl;

    return 0;
}

