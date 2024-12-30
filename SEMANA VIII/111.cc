#include <iostream>
using namespace std;

class Computadora {
public:
    void encender() {
        cout << "Computadora encendida." << endl;
    }
};

class Impresora {
public:
    void imprimir() {
        cout << "Imprimiendo documento." << endl;
    }
};

class TodoEnUno : public Computadora, public Impresora {
public:
    void todoEnUno() {
        cout << "Usando la función Todo-en-Uno." << endl;
    }
};

int main() {
    TodoEnUno t;
    t.encender();
    t.imprimir();
    t.todoEnUno();
    return 0;
}
