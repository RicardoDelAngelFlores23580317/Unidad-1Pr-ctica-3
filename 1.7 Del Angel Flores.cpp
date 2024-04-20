#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Declaración de variables
    double L1, L2, L3, s, area;

    // Solicitar al usuario que ingrese los tres lados del triángulo
    cout << "Ingrese el primer lado del triangulo: ";
    cin >> L1;

    cout << "Ingrese el segundo lado del triangulo: ";
    cin >> L2;

    cout << "Ingrese el tercer lado del triangulo: ";
    cin >> L3;

    // Calcular el semiperímetro
    s = (L1 + L2 + L3) / 2;

    // Calcular el área utilizando la fórmula de Herón
    area = sqrt(s * (s - L1) * (s - L2) * (s - L3));

    // Imprimir el área del triángulo
    cout << "El area del triangulo es: " << area << endl;

    return 0;
}

