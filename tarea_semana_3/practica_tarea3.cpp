#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

    // Datos del estudiante
    cout << "==========================================" << endl;
    cout << "Estudiante: Angel Estuardo Campos Santay" << endl;
    cout << "Carné: 9941-25-4809" << endl;
    cout << "==========================================" << endl;

    // Variables
    string nombreCliente;
    double precioProducto;
    int cantidad;

    // Entrada de datos
    cout << "\nIngrese el nombre completo del cliente: ";
    getline(cin, nombreCliente);

    cout << "Ingrese el precio del producto: Q";
    cin >> precioProducto;

    cout << "Ingrese la cantidad comprada: ";
    cin >> cantidad;

    // Cálculos
    double subtotal = precioProducto * cantidad;
    double iva = subtotal * 0.12;
    double total = subtotal + iva;

    // Salida de resultados
    cout << fixed << setprecision(2);

    cout << "\n==========================================" << endl;
    cout << "           FACTURA DE COMPRA" << endl;
    cout << "==========================================" << endl;
    cout << "Cliente: " << nombreCliente << endl;
    cout << "Precio del producto: Q" << precioProducto << endl;
    cout << "Cantidad comprada: " << cantidad << endl;
    cout << "------------------------------------------" << endl;
    cout << "Subtotal: Q" << subtotal << endl;
    cout << "IVA (12%): Q" << iva << endl;
    cout << "Total a pagar: Q" << total << endl;
    cout << "==========================================" << endl;

    cout << "\nEstudiante: Angel Estuardo Campos Santay" << endl;
    cout << "Carné: 9941-25-4809" << endl;

    return 0;
}