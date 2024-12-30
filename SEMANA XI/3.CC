#include <iostream>
using namespace std;
class Rectangulo {
private:
    int largo, ancho;

public:
    Rectangulo(int l, int a) : largo(l), ancho(a) {}

    friend int calcularArea(Rectangulo);
};
int calcularArea(Rectangulo r) {
    return r.largo * r.ancho;
}
int main() {
    Rectangulo rect(5, 3);
    cout << "Área del rectángulo: " << calcularArea(rect) << endl;
    return 0;
}
