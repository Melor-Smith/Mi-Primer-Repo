#include <iostream>
using namespace std;

class Persona {
public:
    string nombre;
    Persona(string n) : nombre(n) {}
    void saludar() {
        cout << "Hola, soy " << nombre << "." << endl;
    }
};

class Estudiante : public Persona {
public:
    Estudiante(string n) : Persona(n) {}
    void estudiar() {
        cout << nombre << " está estudiando." << endl;
    }
};

int main() {
    Estudiante e("Juan");
    e.saludar(); 
    e.estudiar();
    return 0;
}
