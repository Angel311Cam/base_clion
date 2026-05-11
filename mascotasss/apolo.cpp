#include <iostream>
#include <string>

using namespace std;

struct Mascota {
    string nombre;
    string especie;
    string raza;
    int edad;
    float peso;
};

void registrarMascota(Mascota &m) {
    cin.ignore();

    cout << "\n===== REGISTRO DE MASCOTA =====" << endl;

    cout << "Ingrese el nombre de la mascota: ";
    getline(cin, m.nombre);

    cout << "Ingrese la especie: ";
    getline(cin, m.especie);

    cout << "Ingrese la raza: ";
    getline(cin, m.raza);

    do {
        cout << "Ingrese la edad: ";
        cin >> m.edad;

        if (m.edad < 0) {
            cout << "La edad no puede ser negativa." << endl;
        }

    } while (m.edad < 0);

    do {
        cout << "Ingrese el peso en kg: ";
        cin >> m.peso;

        if (m.peso < 0) {
            cout << "El peso no puede ser negativo." << endl;
        }

    } while (m.peso < 0);

    cout << "\nMascota registrada correctamente.\n";
}

void mostrarMascota(Mascota m) {

    if (m.nombre == "") {
        cout << "\nNo hay mascota registrada.\n";
        return;
    }

    cout << "\n===== DATOS DE LA MASCOTA =====" << endl;
    cout << "Nombre: " << m.nombre << endl;
    cout << "Especie: " << m.especie << endl;
    cout << "Raza: " << m.raza << endl;
    cout << "Edad: " << m.edad << " anios" << endl;
    cout << "Peso: " << m.peso << " kg" << endl;
}

void calcularEdadHumana(Mascota m) {

    if (m.nombre == "") {
        cout << "\nNo hay mascota registrada.\n";
        return;
    }

    int edadHumana = m.edad * 7;

    cout << "\nLa edad equivalente en anios humanos es: "
         << edadHumana << " anios." << endl;
}

void clasificarPeso(Mascota m) {

    if (m.nombre == "") {
        cout << "\nNo hay mascota registrada.\n";
        return;
    }

    cout << "\nClasificacion: ";

    if (m.peso < 5) {
        cout << "Mascota pequena." << endl;
    }
    else if (m.peso >= 5 && m.peso <= 20) {
        cout << "Mascota mediana." << endl;
    }
    else {
        cout << "Mascota grande." << endl;
    }
}

void modificarDatos(Mascota &m) {

    if (m.nombre == "") {
        cout << "\nNo hay mascota registrada.\n";
        return;
    }

    int opcion;

    cout << "\n===== MODIFICAR DATOS =====" << endl;
    cout << "1. Nombre" << endl;
    cout << "2. Especie" << endl;
    cout << "3. Raza" << endl;
    cout << "4. Edad" << endl;
    cout << "5. Peso" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    cin.ignore();

    switch(opcion) {

        case 1:
            cout << "Nuevo nombre: ";
            getline(cin, m.nombre);
            break;

        case 2:
            cout << "Nueva especie: ";
            getline(cin, m.especie);
            break;

        case 3:
            cout << "Nueva raza: ";
            getline(cin, m.raza);
            break;

        case 4:
            cout << "Nueva edad: ";
            cin >> m.edad;
            break;

        case 5:
            cout << "Nuevo peso: ";
            cin >> m.peso;
            break;

        default:
            cout << "Opcion invalida." << endl;
    }

    cout << "\nDato modificado correctamente.\n";
}

int main() {

    Mascota mascota;

    mascota.nombre = "";

    int opcion;

    do {

        cout << "\n=================================" << endl;
        cout << "   REGISTRO DE MASCOTA" << endl;
        cout << "=================================" << endl;
        cout << "Estudiante: Angel Estuardo Campos Santay" << endl;
        cout << "1. Registrar mascota" << endl;
        cout << "2. Mostrar mascota" << endl;
        cout << "3. Calcular edad equivalente" << endl;
        cout << "4. Clasificar por peso" << endl;
        cout << "5. Modificar datos" << endl;
        cout << "6. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {

            case 1:
                registrarMascota(mascota);
                break;

            case 2:
                mostrarMascota(mascota);
                break;

            case 3:
                calcularEdadHumana(mascota);
                break;

            case 4:
                clasificarPeso(mascota);
                break;

            case 5:
                modificarDatos(mascota);
                break;

            case 6:
                cout << "\nSaliendo del programa..." << endl;
                break;

            default:
                cout << "\nOpcion invalida. Intente de nuevo." << endl;
        }

    } while(opcion != 6);

    return 0;
}