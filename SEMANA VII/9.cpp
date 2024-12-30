#include <iostream>

using namespace std;

int main() {
    int x = 1, total = 0;

    while (x <= 5) {
        total += x;  // Sumar x a total
        x++;         // Incrementar x
    }

    cout << total << endl;  // Imprimir el total
    return 0;
}
