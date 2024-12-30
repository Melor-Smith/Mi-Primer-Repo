#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número entero n: ";cin >> n;
    cout << "Múltiplos de " << n << " entre 1 y 100:\n";
    for (int i = 1; i <= 100; i++) {
        if (i % n == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
