#include <iostream>
using namespace std;

int main() {
    int opcion;
    int numeros[1000];
    int cantidad = 0;
    int suma = 0;

    cout << "Angel Estuardo Campos Santay - 9941-25-4809" << endl;

    do {
        cout << "\n===== MENU PRINCIPAL =====" << endl;
        cout << "1. Registrar numeros" << endl;
        cout << "2. Mostrar estadisticas" << endl;
        cout << "3. Clasificar numeros" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int numero;
                char continuar;

                do {
                    cout << "Ingrese un numero: ";
                    cin >> numero;

                    if (numero < 0) {
                        cout << "Error: no se permiten numeros negativos." << endl;
                        continue;
                    }

                    numeros[cantidad] = numero;
                    cantidad++;
                    suma += numero;

                    cout << "Desea ingresar otro numero? (s/n): ";
                    cin >> continuar;

                } while (continuar == 's' || continuar == 'S');

                break;
            }

            case 2: {
                if (cantidad == 0) {
                    cout << "No hay informacion disponible." << endl;
                } else {
                    double promedio = (double)suma / cantidad;

                    cout << "Total de numeros ingresados: " << cantidad << endl;
                    cout << "Suma total: " << suma << endl;
                    cout << "Promedio: " << promedio << endl;
                }
                break;
            }

            case 3: {
                if (cantidad == 0) {
                    cout << "No hay informacion disponible." << endl;
                } else {
                    int pares = 0;
                    int impares = 0;

                    for (int i = 0; i < cantidad; i++) {
                        if ((numeros[i] % 2 == 0 && numeros[i] >= 0) || numeros[i] == 0) {
                            pares++;
                        } else {
                            impares++;
                        }
                    }

                    cout << "Numeros pares: " << pares << endl;
                    cout << "Numeros impares: " << impares << endl;
                }
                break;
            }

            case 4:
                cout << "Gracias por utilizar el sistema." << endl;
                break;

            default:
                cout << "Opcion invalida. Intente nuevamente." << endl;
                break;
        }

    } while (opcion != 4);

    return 0;
}