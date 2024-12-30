#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Introduce un número (0 para salir): ";
    while (true) {
        cin >> numero;

        if (numero == 0) {
            goto salir;
        }
        cout << "Has introducido: " << numero << endl;
    }
salir:
    cout << "Programa terminado." << endl;
    return 0;
}
