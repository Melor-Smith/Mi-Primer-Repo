#include <iostream>
using namespace std;

void contarRegresivo(int n) {
    for (int i = n; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    contarRegresivo(20);
    return 0;
}