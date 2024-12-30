#include <iostream>
using namespace std;
class Animal {
protected:
    string nombre;
public:
    Animal(string n) : nombre(n) {}
    void mostrarNombre() {
        cout << "Nombre: " << nombre << endl;
    }
};
class Vehiculo {
protected:
    string tipo;
public:
    Vehiculo(string t) : tipo(t) {}
    void mostrarTipo() {
        cout << "Tipo de vehículo: " << tipo << endl;
    }
};
class Robot : public Animal, public Vehiculo {
public:
    Robot(string n, string t) : Animal(n), Vehiculo(t) {}
    void mostrarInfo() {
        mostrarNombre();
        mostrarTipo();
    }
};

int main() {
    Robot r("Roberto", "Coche");
    r.mostrarInfo();
    return 0;
}
