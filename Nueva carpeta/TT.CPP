#include <iostream>
#include <vector>
using namespace std;
void rotarArray(vector<int>& arr, int k) {
    int n = arr.size();
    if (n == 0 || k <= 0) {
        return;
    }
    k = k % n;
    if (k == 0) {
        return;
    }
    vector<int> temp(arr.end() - k, arr.end());
    for (int i = n - 1; i >= k; --i) {
        arr[i] = arr[i - k];
    }
    for (int i = 0; i < k; ++i) {
        arr[i] = temp[i]; 
    }
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;
    cout << "Array original: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    rotarArray(arr, k);
    cout << "Array rotado: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

