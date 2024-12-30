#include <iostream>
using namespace std;
int main() {
    int entero;
    double decimal;
    char caracter;
    cout << "Tamaño de int: " << sizeof(entero) << " bytes" << endl;
    cout << "Tamaño de double: " << sizeof(decimal) << " bytes" << endl;
    cout << "Tamaño de char: " << sizeof(caracter) << " bytes" << endl;
    cout << "Tamaño de int: " << sizeof(int) << " bytes" << endl;
    cout << "Tamaño de double: " << sizeof(double) << " bytes" << endl;
    cout << "Tamaño de char: " << sizeof(char) << " bytes" << endl;
    return 0;
}