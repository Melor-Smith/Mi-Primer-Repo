#include<iostream>
using namespace std;
class Producto {
private:
    string nombre;
    double precio;
    int cantidad;
    string codigo;

public:
    Producto(string n, double p, int c, string cod) : nombre(n), precio(p), cantidad(c), codigo(cod) {}
    void setNombre(string n) { this->nombre = n; }
    void setPrecio(double p) { this->precio = p; }
    void setCantidad(int c) { this->cantidad = c; }
    void setCodigo(string cod) { this->codigo = cod; }
    string getNombre() { return this->nombre; }
    double getPrecio() { return this->precio; }
    int getCantidad() { return this->cantidad; }
    string getCodigo() { return this->codigo; }
};
int main() {
    Producto L("Laptop", 1500.50, 20, "LP2024");
    cout << "Nombre: " << L.getNombre() << endl;
    cout << "Precio: $" << L.getPrecio() << endl;
    cout << "Cantidad: " << L.getCantidad() << endl;
    cout << "Código: " << L.getCodigo() << endl;

    return 0;
}
