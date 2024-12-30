#include <iostream>
using namespace std;

int main() {
    int n;

    // Solicitar al usuario que ingrese el número de filas
    cout << "Ingrese el número de filas para el triángulo equilátero: ";
    cin >> n;

    // Bucle para las filas
    for (int i = 1; i <= n; i++) {
        // Imprimir espacios
        for (int j = i; j < n; j++) {
            cout << ' ';  // Espacio
        }
        // Imprimir asteriscos
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << '*';  // Asterisco
        }
        cout << endl;  // Salto de línea después de cada fila
    }

    return 0;
}
