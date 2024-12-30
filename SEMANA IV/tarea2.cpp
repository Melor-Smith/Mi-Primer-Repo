#include <iostream>
#include <string>
using namespace std;
int main() {
    string texto;
    bool condicion = true;
    cout << "Ingresa una palabra: \n";cin >> texto;
    for (int i = 0, j =texto.length() - 1; i < j; i++, j--) {
        if (texto[i] != texto[j]) {
            condicion = false;
            break;
        }
    }
    if (condicion)
        cout << "La palabra \"" << texto << "\" es un palíndromo.\n";
    else
        cout << "La palabra \"" << texto << "\" no es un palíndromo.\n";
    return 0;
}
