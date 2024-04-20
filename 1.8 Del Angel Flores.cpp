#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Declaración de variables
    double X1, Y1, X2, Y2, distancia;

    // Solicitar al usuario que ingrese las coordenadas de los puntos
    cout << "Ingrese las coordenadas del punto P1 (X1 Y1): ";
    cin >> X1 >> Y1;

    cout << "Ingrese las coordenadas del punto P2 (X2 Y2): ";
    cin >> X2 >> Y2;

    // Calcular la distancia entre los dos puntos utilizando la fórmula de distancia euclidiana
    distancia = sqrt(pow(X1 - X2, 2) + pow(Y1 - Y2, 2));

    // Imprimir la distancia entre los dos puntos
    cout << "La distancia entre los puntos P1 y P2 es: " << distancia << endl;

    return 0;
}

