#include <iostream>

using namespace std;

int main() {
    // Declaraci�n de variables
    int MAT;
    float CAL1, CAL2, CAL3, CAL4, CAL5, promedio;

    // Solicitar datos al usuario
    cout << "Ingrese la matricula del alumno: ";
    cin >> MAT;
    
    cout << "Ingrese las 5 calificaciones del alumno:\n";
    cout << "Calificaci�n 1: ";
    cin >> CAL1;
    cout << "Calificaci�n 2: ";
    cin >> CAL2;
    cout << "Calificaci�n 3: ";
    cin >> CAL3;
    cout << "Calificaci�n 4: ";
    cin >> CAL4;
    cout << "Calificaci�n 5: ";
    cin >> CAL5;

    // Calcular el promedio
    promedio = (CAL1 + CAL2 + CAL3 + CAL4 + CAL5) / 5.0;

    // Imprimir la matr�cula y el promedio
    cout << "\nMatr�cula del alumno: " << MAT << endl;
    cout << "Promedio de calificaciones: " << promedio << endl;

    return 0;
}

