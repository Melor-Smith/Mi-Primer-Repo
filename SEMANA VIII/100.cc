#include <iostream>
using namespace std;
class Animal {
public:
    void comer() {
        cout << "El animal está comiendo." << endl;
    }
};
class Vehiculo {
public:
    void acelerar() {
        cout << "El vehículo está acelerando." << endl;
    }
};
class Moto : public Animal, public Vehiculo {
public:
    void conducir() {
        cout << "Conduciendo la moto." << endl;
    }
};

int main() {
    Moto m;
    m.comer();
    m.acelerar();
    m.conducir();
    return 0;
}

