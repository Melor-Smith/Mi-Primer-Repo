#include <iostream>
using namespace std;

int main() {
    int n;

    // Solicitar al usuario que ingrese el número de filas
    cout << "Ingrese el número de filas para el triángulo: ";
    cin >> n;

    // Bucle for para dibujar el triángulo
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << '*';  // Imprimir un asterisco
        }
        cout << endl;  // Salto de línea después de cada fila
    }

    return 0;
}
