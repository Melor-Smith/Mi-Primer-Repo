#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
vector<int> comprimirArray(const vector<int>& arr) {
    unordered_set<int> conjunto;
    vector<int> resultado;
    for (int num : arr) {
        if (conjunto.insert(num).second) {
            resultado.push_back(num);
        }
    }
    return resultado;
}
int main() {
    int n;
    cout << "Ingrese el número de elementos en el array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Ingrese los elementos del array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    vector<int> arrComprimido = comprimirArray(arr);
    cout << "Array comprimido (elementos únicos):\n";
    for (int num : arrComprimido) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
