#include<iostream>
using namespace std;

class Factura {
private:
    int numeroFactura;
    string fecha;
    double total;
public:
   
    Factura(int num, string f, double t) : numeroFactura(num), fecha(f), total(t) {}
    void setNumeroFactura(int num) { this->numeroFactura = num; }
    void setFecha(string f) { this->fecha = f; }
    void setTotal(double t) { this->total = t; }
    int getNumeroFactura() { return this->numeroFactura; }
    string getFecha() { return this->fecha; }
    double getTotal() { return this->total; }
};

int main() {
    Factura f(12345, "16/11/2024", 350.75);
    cout << "Factura NUM: " << f.getNumeroFactura() << endl;
    cout << "Fecha: " << f.getFecha() << endl;
    cout << "Total: $" << f.getTotal() << endl;

    return 0;
}
