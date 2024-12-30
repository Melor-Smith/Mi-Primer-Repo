#include <iostream>
using namespace std;
int main() {
    int n;
    int sumaPares = 0;
    int sumaImpares = 0;
    int i = 1;
    cout << "Ingrese un número entero n: ";
    cin >> n;
    while (i <= n) {
        if (i % 2 == 0) {
            sumaPares += i;
        } else {
            sumaImpares += i;
        }
        i++;
    }
    cout << "Suma de números pares entre 1 y " << n << ": " << sumaPares << endl;
    cout << "Suma de números impares entre 1 y " << n << ": " << sumaImpares << endl;
    return 0;
}
