#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declaración de variables
    string NOM;
    float PES, LON, peso_kg, longitud_m;

    // Solicitar al usuario que ingrese los datos del dinosaurio
    cout << "Ingrese el nombre del dinosaurio: ";
    getline(cin, NOM);

    cout << "Ingrese el peso del dinosaurio en kilogramos: ";
    cin >> PES;

    cout << "Ingrese la longitud del dinosaurio en pies: ";
    cin >> LON;

    // Convertir el peso de kilogramoss a toneladas
    peso_kg = PES * 1000; // 1 tonelada = 1000 kilogramos

    // Convertir la longitud de pies a metros
    longitud_m = LON * 0.3047 * 100; // 1 pie = 0.3047 metros

    // Imprimir el nombre del dinosaurio, su peso en kilogramos y su longitud en metros
    cout << "\nNombre del dinosaurio: " << NOM << endl;
    cout << "Peso del dinosaurio en kilogramos: " << peso_kg << " kg" << endl;
    cout << "Longitud del dinosaurio en metros: " << longitud_m << " m" << endl;

    return 0;
}

