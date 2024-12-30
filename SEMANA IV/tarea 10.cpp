#include <iostream>
#include <string>
using namespace std;
int main() {
    string oracion;
    int contadorA = 0, contadorE = 0, contadorI = 0, contadorO = 0, contadorU = 0;
    cout << "Ingrese una oración: ";
    getline(cin, oracion);
    int i = 0;
    while (i < oracion.length()) {
        char c = tolower(oracion[i]);
        switch (c) {
            case 'a': contadorA++; break;
            case 'e': contadorE++; break;
            case 'i': contadorI++; break;
            case 'o': contadorO++; break;
            case 'u': contadorU++; break;
        }
        i++;
    }
    cout << "Cantidad de vocales:\n";
    cout << "a: " << contadorA << endl;
    cout << "e: " << contadorE << endl;
    cout << "i: " << contadorI << endl;
    cout << "o: " << contadorO << endl;
    cout << "u: " << contadorU << endl;

    return 0;
}
