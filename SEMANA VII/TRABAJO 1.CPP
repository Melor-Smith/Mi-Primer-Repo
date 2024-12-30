#include <iostream>
#include <vector>

using namespace std;

void rotarArray(vector<int>& arr, int k) {
    int n = arr.size();
    if (n == 0) return;  // Si el array está vacío, no hacemos nada

    k = k % n;  // Ajustar k si es mayor que n

    // Rotar el array
    vector<int> rotado(arr.end() - k, arr.end());
    rotado.insert(rotado.end(), arr.begin(), arr.end() - k);
    arr = rotado;  // Actualizar el array original
}

int main() {
    vector<int> array = {1, 2, 3, 4, 5};
    int k = 2;

    rotarArray(array, k);

    // Imprimir el array rotado
    for (int num : array) {
        cout << num << " ";
    }
    cout << endl;  // Salida: 4 5 1 2 3

    return 0;
}
