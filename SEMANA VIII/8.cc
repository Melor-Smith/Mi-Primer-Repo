#include<iostream>
using namespace std;

class Factura {
private:
    int numeroFactura;
    double montoTotal;
    double descuento;

public:
    Factura(int num, double monto, double des) : numeroFactura(num), montoTotal(monto), descuento(des) {}
    double calcularDescuento() {
        return montoTotal - (montoTotal * descuento / 100);
    }
    void mostrarInfo() {
        cout << "Factura Nº: " << numeroFactura << endl;
        cout << "Monto total: $" << montoTotal << endl;
        cout << "Descuento: " << descuento << "%" << endl;
        cout << "Monto con descuento: $" << calcularDescuento() << endl;
    }
};

int main() {
    Factura factura1(101, 500, 10);
    factura1.mostrarInfo();

    return 0;
}
