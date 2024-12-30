#include <iostream>

using namespace std;

int main() {
    int numero;
    int invertido = 0;

    // Pedir al usuario que ingrese un número entero
    cout << "Ingresa un número entero: ";
    cin >> numero;

    // Asegurarse de que el número sea positivo
    numero = abs(numero);

    // Usar un bucle while para invertir los dígitos
    while (numero > 0) {
        int digito = numero % 10;  // Obtener el último dígito
        invertido = invertido * 10 + digito;  // Agregar el dígito a la nueva variable
        numero /= 10;  // Eliminar el último dígito
    }

    // Mostrar el resultado
    cout << "El número invertido es: " << invertido << endl;

    return 0;
}
