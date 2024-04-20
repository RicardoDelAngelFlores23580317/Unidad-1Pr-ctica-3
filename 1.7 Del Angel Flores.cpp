#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Declaraci�n de variables
    double L1, L2, L3, s, area;

    // Solicitar al usuario que ingrese los tres lados del tri�ngulo
    cout << "Ingrese el primer lado del triangulo: ";
    cin >> L1;

    cout << "Ingrese el segundo lado del triangulo: ";
    cin >> L2;

    cout << "Ingrese el tercer lado del triangulo: ";
    cin >> L3;

    // Calcular el semiper�metro
    s = (L1 + L2 + L3) / 2;

    // Calcular el �rea utilizando la f�rmula de Her�n
    area = sqrt(s * (s - L1) * (s - L2) * (s - L3));

    // Imprimir el �rea del tri�ngulo
    cout << "El area del triangulo es: " << area << endl;

    return 0;
}

