#include <iostream>
using namespace std;

class Coche {
private:
    string marca;
    string modelo;
    int anio;

public:
    // Constructor
    Coche(string m, string mo, int a) : marca(m), modelo(mo), anio(a) {}

    // Declaración de la función amiga
    friend void mostrarDetalles(const Coche& p); // Hacemos la referencia constante
};

// Definición de la función amiga
void mostrarDetalles(const Coche& p) {
    // La función amiga puede acceder a los miembros privados de Coche
    cout << "Marca: " << p.marca << endl;
    cout << "Modelo: " << p.modelo << endl;
    cout << "Año: " << p.anio << endl;
}

int main() {
    // Crear un objeto de la clase Coche
    Coche p("Ferrari", "Turbo", 2025);

    // Llamar a la función amiga para mostrar detalles
    mostrarDetalles(p); // Esta función puede acceder a los miembros privados

    return 0;
}