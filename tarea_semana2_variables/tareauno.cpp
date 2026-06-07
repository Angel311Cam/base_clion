#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);


    int edad;
    int resultado;

    cout << "Angel Campos" << endl;

    cout << "Ingrese su edad: ";
    cin >> edad;

    resultado = edad + 5;

    cout << "Dentro de 5 años tendra: " << resultado << " años" << endl;

    return 0;
}
// Created by PC on 22/05/2026.
//