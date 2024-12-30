#include <iostream>

using namespace std;

int main() {
    int n;
    int sumaPares = 0;
    int sumaImpares = 0;
    int i = 1;  // Iniciar desde 1

    // Pedir al usuario que ingrese un número entero
    cout << "Ingresa un número entero (n): ";
    cin >> n;

    // Usar un bucle while para calcular la suma
    while (i <= n) {
        if (i % 2 == 0) {
            sumaPares += i;  // Sumar a la suma de pares
        } else {
            sumaImpares += i;  // Sumar a la suma de impares
        }
        i++;  // Incrementar i
    }

    // Mostrar los resultados
    cout << "La suma de los números pares entre 1 y " << n << " es: " << sumaPares << endl;
    cout << "La suma de los números impares entre 1 y " << n << " es: " << sumaImpares << endl;

    return 0;
}
