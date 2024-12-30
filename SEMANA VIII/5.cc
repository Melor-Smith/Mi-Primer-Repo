#include <iostream>
using namespace std;

// Clase base 1: Vehiculo
class Vehiculo {
private:
    string marca;
    string modelo;

public:
    // Constructor
    Vehiculo(string m, string mo) : marca(m), modelo(mo) {}

    // Métodos setters
    void setMarca(string m) { marca = m; }
    void setModelo(string mo) { modelo = mo; }

    // Métodos getters
    string getMarca() { return marca; }
    string getModelo() { return modelo; }
};

// Clase base 2: Motor
class Motor {
private:
    int potencia;

public:
    // Constructor
    Motor(int p) : potencia(p) {}

    // Métodos setters
    void setPotencia(int p) { potencia = p; }

    // Métodos getters
    int getPotencia() { return potencia; }
};

// Clase derivada: cocheDeCarreras
class cocheDeCarreras : public Vehiculo, public Motor {
private:
    int velocidadMaxima;

public:
    // Constructor que llama a los constructores de las clases base
    cocheDeCarreras(string m, string mo, int p, int v) 
        : Vehiculo(m, mo), Motor(p), velocidadMaxima(v) {}
    int getvelocidadMaxima(){
        return velocidadMaxima;
    }
};

int main() {
    // Crear un objeto de la clase derivada cocheDeCarreras
    cocheDeCarreras p("Ferrari", "Turbo", 800, 350);

    

        cout << "MARCA: " << p.getMarca() << endl;
        cout << "MODELO: " << p.getModelo() << endl;
        cout << "POTENCIA: " <<p.getPotencia() << " CV" << endl;
      cout << "VELOCIDAD MAXIMA: " <<p.getvelocidadMaxima()<< " km/h" << endl;
    

    return 0;
}

