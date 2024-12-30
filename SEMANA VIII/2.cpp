#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de números: ";
    cin >> n;

    int positivo = 0, negativo = 0, cero = 0;
    int numero;
    int i = 0;
    do {
        cout << "Ingrese el número " << (i + 1) << ": ";
        cin >> numero;

        if (numero > 0) {
            positivo++;
        } else if (numero < 0) {
            negativo++;
        } else {
            cero++; 
        }
        
        i++;
    } while (i < n);
    cout << "Positivos: " << positivo << endl;
    cout << "Negativos: " << negativo << endl;
    cout << "Ceros: " << cero << endl;

    return 0;
}
