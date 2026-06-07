#include <iostream>
using namespace std;

int main() {
    int meses, mesMayor = 1, meses500omas = 0;
    double ahorro, total = 0, promedio, mayorAhorro = 0;

    cout << "Angel Estuardo Campos Santay - 9941-25-4809" << endl;
    cout << "Cajero de Ahorro Programado" << endl << endl;

    cout << "Ingrese la cantidad de meses que desea ahorrar: ";
    cin >> meses;

    for (int i = 1; i <= meses; i++) {
        cout << "Ingrese el ahorro del mes " << i << ": Q";
        cin >> ahorro;

        total += ahorro;

        if (ahorro > mayorAhorro) {
            mayorAhorro = ahorro;
            mesMayor = i;
        }

        if (ahorro >= 500) {
            meses500omas++;
        }
    }

    promedio = total / meses;

    cout << endl;
    cout << "Angel Estuardo Campos Santay - 9941-25-4809" << endl;
    cout << "Total ahorrado: Q" << total << endl;
    cout << "Promedio mensual: Q" << promedio << endl;
    cout << "Mayor ahorro realizado en el mes: " << mesMayor << endl;
    cout << "Meses con ahorro de Q500 o mas: " << meses500omas << endl;

    return 0;
}