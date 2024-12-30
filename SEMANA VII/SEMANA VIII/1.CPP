#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
void rotarArray(vector<int>& arr, int k) {
    int n = arr.size();
    if (n == 0) return;
    k = k % n; 
    if (k == 0) return;
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
}
int main() {
    int n;
    cout << "Ingrese el tamaño del array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Ingrese " << n << " números enteros:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int k;
    cout << "Ingrese el número de rotaciones: ";
    cin >> k;

    rotarArray(arr, k);

    cout << "Array rotado: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


