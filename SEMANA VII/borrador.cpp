#include <iostream>
using namespace std;

int main() {
    char nombre[100]; // Aumentar el tamaño para permitir nombres largos
    
    cout << "Ingresa tu nombre completo: ";
    cin.getline(nombre, sizeof(nombre)); // Leer la cadena incluyendo espacios
    
    cout << "Hola, " << nombre << "!" << endl;
    
    return 0;
}


