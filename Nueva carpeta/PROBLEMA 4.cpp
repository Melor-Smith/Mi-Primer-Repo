#include <iostream>
using namespace std;
// Declaración de la variable externa
extern int numero; // Indica que la variable se define en otro archivo
int main() {
    cout << "El número es: " << numero << endl; // Muestra: El número es: 42
    numero += 10; // Incrementa el valor de numero
    cout << "El número después de incrementarlo es: " << numero << endl; // Muestra: 52
    return 0;
}

