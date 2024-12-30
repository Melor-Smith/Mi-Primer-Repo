#include <iostream>
using namespace std;
class Numero {
private:
    int valor;

public:
    Numero(int v) : valor(v) {}

    friend int sumar(Numero, Numero);
};
int sumar(Numero a, Numero b) {
    return a.valor + b.valor;
}
int main() {
    Numero num1(60), num2(20);
    cout << "Suma: " << sumar(num1, num2) << endl;
    return 0;
}
