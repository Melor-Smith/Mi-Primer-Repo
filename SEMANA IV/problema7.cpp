#include <iostream>
#include <vector>
#include <algorithm>
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
    sort(numeros.begin(), numeros.end());
    vector<int> sinDuplicados;
    for (int i = 0; i < numeros.size(); ++i) {
        if (i > 0 && numeros[i] == numeros[i - 1]) {
            continue;
        }
        sinDuplicados.push_back(numeros[i]);
    }
    cout << "Vector sin duplicados:\n";
    for (int num : sinDuplicados) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
