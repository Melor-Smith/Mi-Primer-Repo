#include<iostream>
using namespace std;

// Clase base
class coche {
private:
    string marca;
    string modelo;
    int anio;

public:
    // Constructor
    coche(string m, string mo, int a) : marca(m), modelo(mo), anio(a) {}

    // Métodos setters
    void setmarca(string m) { this->marca = m; }
    void setmodelo(string mo) { this->modelo = mo; }
    void setanio(int a) { this->anio = a; }

    // Métodos getters
    string getmarca() { return this->marca; }
    string getmodelo() { return this->modelo; }
    int getanio() { return this->anio; }
};

// Clase derivada
class cocheDeCarreras : public coche {
private:
    int velocidadMaxima;  // Atributo adicional solo para coches de carreras

public:
    // Constructor de la clase derivada
    cocheDeCarreras(string m, string mo, int a, int v) : coche(m, mo, a), velocidadMaxima(v) {}
    // Método para obtener la velocidad máxima
    int getVelocidadMaxima() { return velocidadMaxima; }
};
int main() {
    // Crear un objeto de la clase derivada (cocheDeCarreras)
    cocheDeCarreras p("Ferrari", "Turbo", 2025, 350);

    // Mostrar los detalles del coche de carreras
   // p.mostrar();
    cout << "MARCA: " << p.getmarca() << endl;
    cout << "MODELO: " << p.getmodelo() << endl;
    cout << "AÑO: " << p.getanio() << endl;
    cout << "VELOCIDAD MAXIMA: " << p.getVelocidadMaxima() << " km/h" << endl;

    return 0;
}

