#include <iostream>
using namespace std;

string cifrar(string t, int d) {
    for (char &c : t) if (isalpha(c)) c = (islower(c) ? 'a' : 'A') + (c - (islower(c) ? 'a' : 'A') + d) % 26;
    return t;
}

int main() {
    string texto; int desp;
    cout << "Texto: "; getline(cin, texto);
    cout << "Desplazamiento: "; cin >> desp;
    cout << "Descifrado: " << cifrar(texto, -desp) << endl;
}
