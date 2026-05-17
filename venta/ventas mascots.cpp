#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

struct Producto {
    int codigo;
    char nombre[40];
    char categoria[30];
    int stock;
    float precio;
    bool activo;
};

void pausarSistema() {
    cout << "\nPresione ENTER para continuar...";
    cin.ignore();
    cin.get();
}

void mostrarEncabezado() {
    system("cls");
    cout << "Bienvenido Angel Estuardo Campos Santay 9941-25-4809\n";
    cout << "===============================\n";
    cout << " SISTEMA DE VENTAS E INVENTARIO\n";
    cout << "===============================\n\n";
}

void registrarProducto() {
    FILE* archivo = fopen("productos.dat", "ab");
    if (!archivo) return;

    Producto p;

    cout << "Codigo: ";
    cin >> p.codigo;
    cin.ignore();

    cout << "Nombre: ";
    cin.getline(p.nombre, 40);

    cout << "Categoria: ";
    cin.getline(p.categoria, 30);

    cout << "Stock: ";
    cin >> p.stock;

    cout << "Precio: ";
    cin >> p.precio;

    p.activo = true;

    fwrite(&p, sizeof(Producto), 1, archivo);
    fclose(archivo);

    cout << "\nProducto registrado.\n";
}

void listarProductos() {
    FILE* archivo = fopen("productos.dat", "rb");
    if (!archivo) {
        cout << "No hay productos registrados.\n";
        return;
    }

    Producto p;
    bool hay = false;

    cout << "Lista de productos:\n\n";

    while (fread(&p, sizeof(Producto), 1, archivo)) {
        if (p.activo) {
            cout << "Codigo: " << p.codigo << endl;
            cout << "Nombre: " << p.nombre << endl;
            cout << "Categoria: " << p.categoria << endl;
            cout << "Stock: " << p.stock << endl;
            cout << "Precio: Q" << p.precio << endl;
            cout << "-----------------------------\n";
            hay = true;
        }
    }

    fclose(archivo);

    if (!hay) cout << "No hay productos activos.\n";
}

void menu() {
    int opcion;

    do {
        mostrarEncabezado();
        cout << "1. Registrar producto\n";
        cout << "2. Listar productos\n";
        cout << "3. Salir\n\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch(opcion) {
            case 1:
                mostrarEncabezado();
                registrarProducto();
                pausarSistema();
                break;

            case 2:
                mostrarEncabezado();
                listarProductos();
                pausarSistema();
                break;

            case 3:
                cout << "\nSaliendo...\n";
                break;

            default:
                cout << "\nOpcion invalida.\n";
                pausarSistema();
        }

    } while(opcion != 3);
}

int main() {
    menu();
    return 0;
}