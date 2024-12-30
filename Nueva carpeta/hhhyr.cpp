#include <iostream>
using namespace std;
int main() {
    int numero, invertido = 0;
    cout << "Ingrese un número entero: ";
    cin >> numero;
    int original = abs(numero);
    while (original > 0) {
        invertido = invertido * 10 + (original % 10);
        original /= 10;
    }
    if (numero < 0) {
        invertido = -invertido;
    }
    cout << "El número invertido es: " << invertido << endl;
    return 0;
}

