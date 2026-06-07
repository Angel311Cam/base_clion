#include <iostream>
#include <string>
using namespace std;

double calcularPromedio(double notas[], int cantidad) {
    double suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += notas[i];
    }
    return suma / cantidad;
}

string determinarEstado(double promedio) {
    if (promedio >= 61) {
        return "Aprobado";
    } else {
        return "Reprobado";
    }
}

string determinarCategoria(double promedio) {
    if (promedio >= 85 && promedio <= 100) {
        return "Excelente";
    } else if (promedio >= 70 && promedio <= 84) {
        return "Bueno";
    } else if (promedio >= 61 && promedio <= 69) {
        return "Regular";
    } else {
        return "Deficiente";
    }
}

void mostrarResultado(string nombre, string curso, double promedio, string estado, string categoria) {
    cout << "\n----- RESULTADO FINAL -----" << endl;
    cout << "Angel Estuardo Campos Santay - 9941-25-4809" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Curso: " << curso << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Estado: " << estado << endl;
    cout << "Categoria: " << categoria << endl;
}

int main() {
    string nombre, curso;
    int cantidad;

    cout << "Angel Estuardo Campos Santay - 9941-25-4809" << endl;

    cout << "Ingrese el nombre del estudiante: ";
    cin.ignore();
    getline(cin, nombre);

    cout << "Ingrese el curso: ";
    getline(cin, curso);

    cout << "Ingrese la cantidad de notas: ";
    cin >> cantidad;

    double notas[cantidad];

    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> notas[i];
    }

    double promedio = calcularPromedio(notas, cantidad);
    string estado = determinarEstado(promedio);
    string categoria = determinarCategoria(promedio);

    mostrarResultado(nombre, curso, promedio, estado, categoria);

    return 0;
}