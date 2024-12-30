#include <iostream>
using namespace std;
class A;
class B;
class A {
private:
    int valor;

public:
    A(int v) : valor(v) {}

    friend bool comparar(A, B);
};
class B {
private:
    int valor;

public:
    B(int v) : valor(v) {}

    friend bool comparar(A, B);
};
bool comparar(A objA, B objB) {
    return objA.valor == objB.valor;
}
int main() {
    A objA(10);
    B objB(10);
    cout << "Son iguales: " << (comparar(objA, objB) ? "Sí" : "No") << endl;
    return 0;
}
