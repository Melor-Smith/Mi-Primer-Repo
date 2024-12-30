#include <iostream>
using namespace std;
int main() {
    register int suma = 0;
    int n;
    cout << "Introduce un número entero positivo: ";
    cin >> n;
    for (register int i = 1; i <= n; ++i) {
        suma += i;
    }
    cout << "La suma de los números del 1 al " << n << " es: " << suma << endl;
    return 0;
}
