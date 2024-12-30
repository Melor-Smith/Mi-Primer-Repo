#include <iostream>
#include <vector>
using namespace std;
void moverCerosAlFinal(vector<int>& arr) {
    int n = arr.size();
    int contador = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] != 0) {
            arr[contador++] = arr[i];
        }
    }
    while (contador < n) {
        arr[contador++] = 0;
    }
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
    moverCerosAlFinal(arr);
    cout << "Array después de mover ceros al final:\n";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

