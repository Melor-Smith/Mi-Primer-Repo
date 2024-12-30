#include <iostream>
using namespace std;

string cifrarCesar(string texto, int desp) {
    for (int i = 0; i<texto.length(); i++)
        if (isalpha(texto[i])) {
            char base = islower(texto[i]) ? 'a' : 'A';
            texto[i] = (texto[i] - base + desp) % 26 + base;
        }
    return texto;
}

int main() {
    string texto;
    int desp;
    cout << "Texto: "; getline(cin, texto);
    cout << "Desplazamiento: "; cin >> desp;
    cout << "Cifrado: " << cifrarCesar(texto, desp) << endl;
    return 0;
}
