#include <iostream>

using namespace std;

int main() {

    double precio;
    double cantidad;
    double total;

    cout << "Angel Campos" << endl;

    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    cout << "Ingrese la cantidad comprada: ";
    cin >> cantidad;

    total = precio * cantidad;

    cout << "El total a pagar es: " << total << endl;

    return 0;
}