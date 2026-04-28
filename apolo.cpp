#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero del 1 al 4: ";
    cin >> numero;

    if (numero >= 1 && numero <= 4) {
        cout << "\nTabla del " << numero << ":\n";

        for (int i = 1; i <= 10; i++) {
            cout << numero << " x " << i << " = " << numero * i << endl;
        }
    } else {
        cout << "Numero fuera de rango (1 a 4)." << endl;
    }

    return 0;
}

