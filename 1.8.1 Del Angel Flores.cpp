#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    int MAT;
    float CAL1, CAL2, CAL3, CAL4, CAL5, promedio;

    // Solicitar datos al usuario
    cout << "Ingrese la matricula del alumno: ";
    cin >> MAT;
    
    cout << "Ingrese las 5 calificaciones del alumno:\n";
    cout << "Calificación 1: ";
    cin >> CAL1;
    cout << "Calificación 2: ";
    cin >> CAL2;
    cout << "Calificación 3: ";
    cin >> CAL3;
    cout << "Calificación 4: ";
    cin >> CAL4;
    cout << "Calificación 5: ";
    cin >> CAL5;

    // Calcular el promedio
    promedio = (CAL1 + CAL2 + CAL3 + CAL4 + CAL5) / 5.0;

    // Imprimir la matrícula y el promedio
    cout << "\nMatrícula del alumno: " << MAT << endl;
    cout << "Promedio de calificaciones: " << promedio << endl;

    return 0;
}

