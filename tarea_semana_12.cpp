#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Producto {
    int codigo;
    char nombre[50];
    float precio;
    int stock;
    bool activo;
};

const char* ARCHIVO = "productos.dat";

void mostrarMenu() {
    cout << "\n===== SISTEMA DE PRODUCTOS =====" << endl;
    cout << "1. Gestion de productos" << endl;
    cout << "2. Proceso de venta" << endl;
    cout << "3. Salir" << endl;
    cout << "Seleccione una opcion: ";
}

void mostrarMenuProductos() {
    cout << "\n--- GESTION DE PRODUCTOS ---" << endl;
    cout << "1. Registrar producto" << endl;
    cout << "2. Listar productos" << endl;
    cout << "3. Buscar por codigo" << endl;
    cout << "4. Buscar por nombre" << endl;
    cout << "5. Modificar precio" << endl;
    cout << "6. Actualizar stock" << endl;
    cout << "7. Eliminar producto" << endl;
    cout << "8. Volver" << endl;
    cout << "Seleccione una opcion: ";
}

void guardarProducto(Producto p) {
    ofstream archivo(ARCHIVO, ios::binary | ios::app);
    archivo.write((char*)&p, sizeof(Producto));
    archivo.close();
}

void registrarProducto() {
    Producto p;

    cout << "Codigo: ";
    cin >> p.codigo;

    cin.ignore();
    cout << "Nombre: ";
    cin.getline(p.nombre, 50);

    cout << "Precio: ";
    cin >> p.precio;

    cout << "Stock: ";
    cin >> p.stock;

    p.activo = true;

    guardarProducto(p);
    cout << "Producto registrado." << endl;
}

void listarProductos() {
    Producto p;
    ifstream archivo(ARCHIVO, ios::binary);

    if (!archivo) {
        cout << "No hay productos." << endl;
        return;
    }

    while (archivo.read((char*)&p, sizeof(Producto))) {
        if (p.activo) {
            cout << "Codigo: " << p.codigo << endl;
            cout << "Nombre: " << p.nombre << endl;
            cout << "Precio: " << p.precio << endl;
            cout << "Stock: " << p.stock << endl;
            cout << "-------------------" << endl;
        }
    }

    archivo.close();
}

void buscarPorCodigo() {
    int codigo;
    Producto p;
    bool encontrado = false;

    cout << "Ingrese codigo: ";
    cin >> codigo;

    ifstream archivo(ARCHIVO, ios::binary);

    while (archivo.read((char*)&p, sizeof(Producto))) {
        if (p.codigo == codigo && p.activo) {
            cout << "Producto encontrado:" << endl;
            cout << "Nombre: " << p.nombre << endl;
            cout << "Precio: " << p.precio << endl;
            cout << "Stock: " << p.stock << endl;
            encontrado = true;
        }
    }

    archivo.close();

    if (!encontrado) {
        cout << "No encontrado." << endl;
    }
}

void buscarPorNombre() {
    char nombre[50];
    Producto p;
    bool encontrado = false;

    cin.ignore();
    cout << "Ingrese nombre: ";
    cin.getline(nombre, 50);

    ifstream archivo(ARCHIVO, ios::binary);

    while (archivo.read((char*)&p, sizeof(Producto))) {
        if (p.activo && strstr(p.nombre, nombre)) {
            cout << "Codigo: " << p.codigo << endl;
            cout << "Nombre: " << p.nombre << endl;
            cout << "Precio: " << p.precio << endl;
            cout << "Stock: " << p.stock << endl;
            cout << "-------------------" << endl;
            encontrado = true;
        }
    }

    archivo.close();

    if (!encontrado) {
        cout << "No encontrado." << endl;
    }
}

void modificarPrecio() {
    int codigo;
    float nuevoPrecio;
    Producto p;

    cout << "Codigo del producto: ";
    cin >> codigo;

    fstream archivo(ARCHIVO, ios::binary | ios::in | ios::out);

    while (archivo.read((char*)&p, sizeof(Producto))) {
        if (p.codigo == codigo && p.activo) {
            cout << "Nuevo precio: ";
            cin >> nuevoPrecio;

            p.precio = nuevoPrecio;

            archivo.seekp(-sizeof(Producto), ios::cur);
            archivo.write((char*)&p, sizeof(Producto));

            cout << "Precio actualizado." << endl;
            break;
        }
    }

    archivo.close();
}

void actualizarStock() {
    int codigo;
    int nuevoStock;
    Producto p;

    cout << "Codigo del producto: ";
    cin >> codigo;

    fstream archivo(ARCHIVO, ios::binary | ios::in | ios::out);

    while (archivo.read((char*)&p, sizeof(Producto))) {
        if (p.codigo == codigo && p.activo) {
            cout << "Nuevo stock: ";
            cin >> nuevoStock;

            p.stock = nuevoStock;

            archivo.seekp(-sizeof(Producto), ios::cur);
            archivo.write((char*)&p, sizeof(Producto));

            cout << "Stock actualizado." << endl;
            break;
        }
    }

    archivo.close();
}

void eliminarProducto() {
    int codigo;
    Producto p;

    cout << "Codigo del producto: ";
    cin >> codigo;

    fstream archivo(ARCHIVO, ios::binary | ios::in | ios::out);

    while (archivo.read((char*)&p, sizeof(Producto))) {
        if (p.codigo == codigo && p.activo) {
            p.activo = false;

            archivo.seekp(-sizeof(Producto), ios::cur);
            archivo.write((char*)&p, sizeof(Producto));

            cout << "Producto eliminado." << endl;
            break;
        }
    }

    archivo.close();
}

void procesoVenta() {
    int codigo, cantidad;
    Producto p;
    bool encontrado = false;

    cout << "Codigo del producto: ";
    cin >> codigo;

    fstream archivo(ARCHIVO, ios::binary | ios::in | ios::out);

    while (archivo.read((char*)&p, sizeof(Producto))) {
        if (p.codigo == codigo && p.activo) {
            encontrado = true;

            cout << "Producto: " << p.nombre << endl;
            cout << "Precio: " << p.precio << endl;
            cout << "Stock: " << p.stock << endl;

            cout << "Cantidad a comprar: ";
            cin >> cantidad;

            if (cantidad <= 0 || cantidad > p.stock) {
                cout << "Cantidad invalida o sin stock suficiente." << endl;
                break;
            }

            float subtotal = p.precio * cantidad;
            float iva = subtotal * 0.12;
            float total = subtotal + iva;

            p.stock -= cantidad;

            archivo.seekp(-sizeof(Producto), ios::cur);
            archivo.write((char*)&p, sizeof(Producto));

            cout << "Subtotal: " << subtotal << endl;
            cout << "IVA: " << iva << endl;
            cout << "Total: " << total << endl;
        }
    }

    archivo.close();

    if (!encontrado) {
        cout << "Producto no encontrado." << endl;
    }
}

void gestionProductos() {
    int op;

    do {
        mostrarMenuProductos();
        cin >> op;

        switch (op) {
            case 1: registrarProducto(); break;
            case 2: listarProductos(); break;
            case 3: buscarPorCodigo(); break;
            case 4: buscarPorNombre(); break;
            case 5: modificarPrecio(); break;
            case 6: actualizarStock(); break;
            case 7: eliminarProducto(); break;
            case 8: break;
            default: cout << "Opcion invalida." << endl; break;
        }

    } while (op != 8);
}

int main() {
    int opcion;

    cout << "Angel Estuardo Campos Santay - 9941-25-4809" << endl;

    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1: gestionProductos(); break;
            case 2: procesoVenta(); break;
            case 3: cout << "Saliendo del sistema..." << endl; break;
            default: cout << "Opcion invalida." << endl; break;
        }

    } while (opcion != 3);

    return 0;
}