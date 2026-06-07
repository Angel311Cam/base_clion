#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string nombreCliente;
    double precioProducto;
    int cantidad;

    cout << "Ingrese el nombre del cliente: ";
    getline(cin, nombreCliente);

    cout << "Ingrese el precio del producto: ";
    cin >> precioProducto;

    cout << "Ingrese la cantidad comprada: ";
    cin >> cantidad;

    double subtotal = precioProducto * cantidad;
    double iva = subtotal * 0.12;
    double totalPagar = subtotal + iva;

    cout << "\n=====================================" << endl;
    cout << "      FACTURA DE COMPRA" << endl;
    cout << "=====================================" << endl;
    cout << "Cliente: " << nombreCliente << endl;
    cout << fixed << setprecision(2);
    cout << "Subtotal: Q" << subtotal << endl;
    cout << "IVA (12%): Q" << iva << endl;
    cout << "Total a pagar: Q" << totalPagar << endl;
    cout << "=====================================" << endl;

    cout << "\nEstudiante: Angel Estuardo Campos Santay" << endl;
    cout << "Carnet: 9941-25-4809" << endl;

    return 0;
}