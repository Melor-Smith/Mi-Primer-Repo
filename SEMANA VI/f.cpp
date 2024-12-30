#include <iostream>
#include <cmath>  // Para abs()

using namespace std;

int main() {
    int numero;
    int invertido = 0;

    // Pedir al usuario que ingrese un número entero
    cout << "Ingresa un número entero: ";
    cin >> numero;

    // Asegurarse de que el número sea positivo
    numero = abs(numero);

    // Usar un bucle for para invertir los dígitos
    for (; numero > 0; numero /= 10) {
        int digito = numero % 10;  // Obtener el último dígito
        invertido = invertido * 10 + digito;  // Agregar el dígito a la nueva variable
    }

    // Mostrar el resultado
    cout << "El número invertido es: " << invertido << endl;

    return 0;
}
