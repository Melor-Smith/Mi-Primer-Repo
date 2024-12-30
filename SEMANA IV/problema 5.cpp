#include <iostream>
#include <string>
using namespace std;

string cifrado(const string& texto, int clave) {
    string resultado = "";
    for (char c : texto) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            c = (c - base + clave) % 26 + base;
        }
        resultado += c;
    }

    return resultado;
}

int main() {
    string texto;
    int num;

    cout << "Ingrese el mensaje: ";
    getline(cin, texto);
    cout << "Ingrese la clave del cifrado (número): ";
    cin >> num;

    string textoCifrado = cifrado(texto, num);
    cout << "Texto cifrado: " << textoCifrado << endl;

    return 0;
}
