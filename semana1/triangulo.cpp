#include <iostream>

using namespace std;

int main() {

    float base;
    float altura;
    float area;

    cout << "Angel Campos" << endl;

    cout << "Ingrese la base del triangulo: ";
    cin >> base;

    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;

    area = (base * altura) / 2;

    cout << "El area del triangulo es: " << area << endl;

    return 0;
}