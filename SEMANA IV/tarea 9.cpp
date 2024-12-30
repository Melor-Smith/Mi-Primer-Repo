#include <iostream>
#include <vector>
using namespace std;
bool esPrimo(int numero) {
    if (numero <= 1) return false;
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) return false;
    }
    return true;
}
int main() {
    int inicio, fin;
    vector<int> primos;
    cout << "Ingrese el número de inicio: ";
    cin >> inicio;
    cout << "Ingrese el número de fin: ";
    cin >> fin;
    if (fin < 2 || inicio > fin) {
        cout << "No hay números primos en este rango.\n";
        return 0;
    }
    if (inicio < 2) inicio = 2;
    for (int i = inicio; i <= fin; ++i) {
        if (!esPrimo(i)) {
            continue; 
        }
        primos.push_back(i);
    }
    cout << "Números primos en el rango [" << inicio << ", " << fin << "]: ";
    for (int primo : primos) {
        cout << primo << " ";
    }
    cout << endl;
    return 0;
}



