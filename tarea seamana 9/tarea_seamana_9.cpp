#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void mostrarMenu() {
    cout << "\n===== MENU =====" << endl;
    cout << "1. Guardar usuario" << endl;
    cout << "2. Mostrar usuarios" << endl;
    cout << "3. Salir" << endl;
    cout << "Seleccione una opcion: ";
}

void guardarUsuario() {
    string nombre, posicion;
    int edad;

    cin.ignore();

    cout << "Ingrese nombre completo: ";
    getline(cin, nombre);

    cout << "Ingrese posicion en la empresa: ";
    getline(cin, posicion);

    cout << "Ingrese edad: ";
    cin >> edad;

    ofstream archivo("usuarios.txt", ios::app);
    archivo << nombre << "," << posicion << "," << edad << endl;
    archivo.close();

    cout << "Usuario guardado correctamente." << endl;
}

void mostrarUsuarios() {
    string linea;

    ifstream archivo("usuarios.txt");

    if (!archivo) {
        cout << "No hay registros disponibles." << endl;
        return;
    }

    cout << "\n===== USUARIOS REGISTRADOS =====" << endl;

    while (getline(archivo, linea)) {
        cout << linea << endl;
    }

    archivo.close();
}

int main() {
    int opcion;

    cout << "Angel Estuardo Campos Santay - 9941-25-4809" << endl;

    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                guardarUsuario();
                break;

            case 2:
                mostrarUsuarios();
                break;

            case 3:
                cout << "Saliendo del sistema..." << endl;
                break;

            default:
                cout << "Opcion invalida." << endl;
                break;
        }

    } while (opcion != 3);

    return 0;
}