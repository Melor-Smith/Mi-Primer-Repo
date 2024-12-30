#include <iostream>
using namespace std;

int main() {
    // Solicitar al usuario que ingrese un número entero
    int numero;
    cout << "Ingresa un número entero: ";
    cin >> numero;

    // Inicializar la suma de los dígitos
    int suma_digitos = 0;

    // Convertir el número a su valor absoluto para manejar números negativos
    numero = abs(numero);

    // Utilizar un bucle while para sumar los dígitos
    while (numero > 0) {
        // Sumar el último dígito a la suma
        suma_digitos += numero % 10;
        // Eliminar el último dígito
        numero /= 10;
    }

    // Mostrar el resultado
    cout << "La suma de los dígitos es: " << suma_digitos << endl;

    return 0;
}
