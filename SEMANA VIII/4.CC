#include <iostream>
using namespace std;

class Vehiculo {
public:
    string marca;
    string modelo;

    Vehiculo(string m, string mod) : marca(m), modelo(mod) {}

    void describir() {
        cout << marca << " " << modelo << endl;
    }
};

class Coche : public Vehiculo {
public:
    int puertas;

    Coche(string m, string mod, int p) : Vehiculo(m, mod), puertas(p) {}

    void describir() {
        cout << marca << " " << modelo << " con " << puertas << " puertas" << endl;
    }
};

int main() {
    Coche coche("Toyota", "Corolla", 4);
    coche.describir();
    return 0;
}

