#include <iostream>

using namespace std;
union Valor {
    int entero;
    float decimal;
    char caracter;
};
enum Tipo {
    ENTERO,
    DECIMAL,
    CARACTER
};
struct Dato {
    Valor valor;
    Tipo tipo;
};
int main() {
    Dato dato;
    dato.tipo = ENTERO;
    dato.valor.entero = 10;

    if (dato.tipo == ENTERO) {
        cout << "Valor entero: " << dato.valor.entero << endl;
    }
    dato.tipo = DECIMAL;
    dato.valor.decimal = 3.14f;
    if (dato.tipo == DECIMAL) {
        cout << "Valor decimal: " << dato.valor.decimal << endl;
    }
    dato.tipo = CARACTER;
    dato.valor.caracter = 'C';
    if (dato.tipo == CARACTER) {
        cout << "Valor caracter: " << dato.valor.caracter << endl;
    }

    return 0;
}
