#include <iostream>
using namespace std;

int main() {
    int opcion;
    double numero;

    cout << "Angel Estuardo Campos Santay - 9941-25-4809" << endl;

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Mostrar los numeros del 1 al 5" << endl;
        cout << "2. Mostrar los numeros pares del 2 al 10" << endl;
        cout << "3. Ingresar un numero y mostrar si es positivo o negativo" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion < 1 || opcion > 4) {
            cout << "Opcion invalida. Intente nuevamente." << endl;
            continue;
        }

        switch (opcion) {
            case 1:
                cout << "Numeros del 1 al 5:" << endl;
                for (int i = 1; i <= 5; i++) {
                    cout << i << " ";
                }
                cout << endl;
                break;

            case 2:
                cout << "Numeros pares del 2 al 10:" << endl;
                for (int i = 2; i <= 10; i += 2) {
                    cout << i << " ";
                }
                cout << endl;
                break;

            case 3:
                cout << "Ingrese un numero: ";
                cin >> numero;

                if (numero > 0) {
                    cout << "El numero es positivo." << endl;
                } else if (numero < 0) {
                    cout << "El numero es negativo." << endl;
                } else {
                    cout << "El numero es cero." << endl;
                }
                break;

            case 4:
                cout << "Gracias por utilizar el programa." << endl;
                break;
        }

    } while (opcion != 4);

    return 0;
}