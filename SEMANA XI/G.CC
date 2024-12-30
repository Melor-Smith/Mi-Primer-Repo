#include <iostream>
using namespace std;

class Base {
public:
    virtual void sayHello() { // Método virtual
        cout << "Hola desde la clase Base" << endl;
    }
};

class Derived : public Base {
public:
    void sayHello() override { // Sobrescribe el método virtual
        cout << "Hola desde la clase Derived" << endl;
    }
};

int main() {
    Base* basePtr;      // Puntero a clase base
    Derived derivedObj; // Objeto de clase derivada

    basePtr = &derivedObj;

    // Llamada al método virtual
    basePtr->sayHello(); // Salida: "Hola desde la clase Derived"

    return 0;
}
