#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numeros;
    int n, elemento;
    cout << "Ingrese la cantidad de elementos en el vector: \n";cin >> n;
    cout << "Ingrese los elementos del vector:\n";
    for (int i = 0; i < n; ++i) {
        cin >> elemento;
        numeros.push_back(elemento);
    }
    if (n > 0) {
        int mayor = numeros[0];

        for (int i = 1; i < n; ++i) {
            if (numeros[i] > mayor) {
                mayor = numeros[i];
            }
        }
        cout << "El mayor elemento en el vector es: " << mayor << endl;
    } else {
        cout << "El vector está vacío." << endl;
    }
    return 0;
}
