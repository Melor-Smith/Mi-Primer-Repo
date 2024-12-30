#include<iostream>
using namespace std;
class CuentaDeAhorro {
private:
    double saldo;
    double tasaInteres;

public:
    CuentaDeAhorro(double s, double t) : saldo(s), tasaInteres(t) {}
    void agregarDinero(double monto) {
        saldo += monto;
        cout << "Se agregaron $" << monto << " a la cuenta. Saldo actual: $" << saldo << endl;
    }

    void retirarDinero(double monto) {
        if (saldo >= monto) {
            saldo -= monto;
            cout << "Se retiraron $" << monto << " de la cuenta. Saldo actual: $" << saldo << endl;
        } else {
            cout << "No hay suficiente saldo para retirar." << endl;
        }
    }
    void aplicarInteres() {
        saldo += saldo * tasaInteres / 100;
        cout << "Interés aplicado. Nuevo saldo: $" << saldo << endl;
    }
    void mostrarSaldo() {
        cout << "Saldo de la cuenta: $" << saldo << endl;
    }
};
int main() {
    CuentaDeAhorro cuenta(1000, 5);
    cuenta.mostrarSaldo();
    cuenta.agregarDinero(200);
    cuenta.retirarDinero(500);
    cuenta.aplicarInteres();
    cuenta.mostrarSaldo();

    return 0;
}
