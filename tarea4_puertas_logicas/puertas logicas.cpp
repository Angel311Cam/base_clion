#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;

    cout << "Angel Estuardo Campos Santay - 9941-25-4809" << endl;
    cout << "Nombre del usuario: ";
    getline(cin, nombre);

    int edad, club;
    double promedio;

    cout << "Edad: ";
    cin >> edad;

    cout << "Promedio academico: ";
    cin >> promedio;

    cout << "Pertenece al club de programacion (1 = Si, 0 = No): ";
    cin >> club;

    cout << endl;
    cout << "Angel Estuardo Campos Santay - 9941-25-4809" << endl;

    if (nombre == "David Alvarez") {
        cout << "Acceso especial concedido." << endl;
    } else if ((edad >= 18 && promedio >= 85) ||
               (club == 1 && promedio >= 75) ||
               (promedio >= 95)) {
        cout << "Bienvenido " << nombre << "." << endl;
        cout << "Acceso autorizado." << endl;
               } else {
                   cout << "Acceso denegado." << endl;
               }

    return 0;
}