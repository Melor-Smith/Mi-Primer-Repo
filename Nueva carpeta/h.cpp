#include <iostream>
using namespace std;
extern int contador; 
void incrementarContador();
int main() {
    cout << "Contador inicial: " << contador << endl;
    incrementarContador();
    incrementarContador();
    cout << "Contador después de incrementar: " << contador << endl;
    return 0;
}

