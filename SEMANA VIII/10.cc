#include<iostream>
using namespace std;

class Coche {
private:
    string marca;
    string modelo;
    double velocidadMaxima;
    double velocidadActual;
public:
    Coche(string m, string mo, double vMax) : marca(m), modelo(mo), velocidadMaxima(vMax), velocidadActual(0) {}
    void acelerar(double incremento) {
        if (velocidadActual + incremento <= velocidadMaxima) {
            velocidadActual += incremento;
            cout << "Acelerando... Velocidad actual: " << velocidadActual << " km/h." << endl;
        } else {
            velocidadActual = velocidadMaxima;
            cout << "Has alcanzado la velocidad máxima de " << velocidadMaxima << " km/h." << endl;
        }
    }
    void frenar(double decremento) {
        if (velocidadActual - decremento >= 0) {
            velocidadActual -= decremento;
            cout << "Frenando... Velocidad actual: " << velocidadActual << " km/h." << endl;
        } else {
            velocidadActual = 0;
            cout << "El coche se ha detenido." << endl;
        }
    }
    void mostrarInfo() {
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Velocidad máxima: " << velocidadMaxima << " km/h" << endl;
        cout << "Velocidad actual: " << velocidadActual << " km/h" << endl;
    }
};
int main() {
    Coche coche1("Tesla", "Corolla", 180);
    coche1.mostrarInfo();
    coche1.acelerar(50);
    coche1.acelerar(100);
    coche1.frenar(30);
    coche1.mostrarInfo();

    return 0;
}
