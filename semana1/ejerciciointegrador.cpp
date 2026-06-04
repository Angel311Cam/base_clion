#include <iostream>
#include <string>

using namespace std;

int main() {

    string nombre;
    int edad;
    float altura;
    double precioProducto;
    char inicialApellido;

    cout << "Angel Campos" << endl;

    cout << "Ingrese su nombre: ";
    cin >> nombre;

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese su altura: ";
    cin >> altura;

    cout << "Ingrese el precio del producto: ";
    cin >> precioProducto;

    cout << "Ingrese la inicial de su apellido: ";
    cin >> inicialApellido;

    cout << endl;
    cout << "Resumen de datos" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Altura: " << altura << endl;
    cout << "Precio del producto: " << precioProducto << endl;
    cout << "Inicial del apellido: " << inicialApellido << endl;

    return 0;
}