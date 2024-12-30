#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número entero positivo: ";cin >> n;
    if (n <= 0) {
        cout << "Por favor, ingrese un número positivo." << endl;
        return 1;
    }
    cout << "Secuencia de Collatz para " << n << ": ";
    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0) {
            n /= 2; 
        } else {
            n = n * 3 + 1;
        }
    }
    cout << n << endl;
    return 0;
}
