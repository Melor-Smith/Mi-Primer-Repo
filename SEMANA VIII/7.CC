#include <iostream>
using namespace std;

// Declaración adelantada de clases amigas
class Administrador;
class Auditor;

class CuentaBancaria {
private:
    string titular;
    double saldo;

public:
    CuentaBancaria(string t, double s) : titular(t), saldo(s) {}

    // Declaración de las clases amigas
    friend class Administrador;
    friend class Auditor;
};

// Clase Administrador, amiga de CuentaBancaria
class Administrador {
public:
    void actualizarSaldo(CuentaBancaria& cuenta, double nuevoSaldo) {
        cuenta.saldo = nuevoSaldo;  // Puede acceder al saldo privado
        cout << "Saldo actualizado por Administrador: " << cuenta.saldo << endl;
    }
};

// Clase Auditor, amiga de CuentaBancaria
class Auditor {
public:
    void auditarCuenta(const CuentaBancaria& cuenta) {
        cout << "Auditoría de Cuenta - Titular: " << cuenta.titular
             << ", Saldo: " << cuenta.saldo << endl;
    }
};

int main() {
    CuentaBancaria cuenta("Juan Perez", 5000);

    Administrador admin;
    Auditor auditor;

    admin.actualizarSaldo(cuenta, 10000);  // El administrador actualiza el saldo
    auditor.auditarCuenta(cuenta);         // El auditor revisa la cuenta

    return 0;
}
