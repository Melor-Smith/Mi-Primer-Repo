#include <iostream>
using namespace std;

void mostrar(int m[10][10], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

void suma(int a[10][10], int b[10][10], int resultado[10][10], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = a[i][j] + b[i][j];
        }
    }
}

void resta(int a[10][10], int b[10][10], int resultado[10][10], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = a[i][j] - b[i][j];
        }
    }
}

void multiplicacion(int a[10][10], int b[10][10], int resultado[10][10], int filasA, int columnasA, int columnasB) {
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasB; j++) {
            resultado[i][j] = 0;  // Inicializar el resultado
            for (int k = 0; k < columnasA; k++) {
                resultado[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void transponer(int m[10][10], int resultado[10][10], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[j][i] = m[i][j];
        }
    }
}

int main() {
    int filas, columnas;
    cout << "Ingrese la cantidad de filas: ";
    cin >> filas;
    cout << "Ingrese la cantidad de columnas: ";
    cin >> columnas;

    int a[10][10], b[10][10], resultado[10][10];

    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cin >> b[i][j];
        }
    }

    // Suma
    suma(a, b, resultado, filas, columnas);
    cout << "Resultado de la suma:" << endl;
    mostrar(resultado, filas, columnas);

    // Resta
    resta(a, b, resultado, filas, columnas);
    cout << "Resultado de la resta:" << endl;
    mostrar(resultado, filas, columnas);

    // Multiplicación
    if (columnas == filas) { // Solo se puede multiplicar si la matriz es cuadrada
        multiplicacion(a, b, resultado, filas, columnas, columnas);
        cout << "Resultado de la multiplicación:" << endl;
        mostrar(resultado, filas, columnas);
    } else {
        cout << "La multiplicación no es posible, las matrices deben ser cuadradas." << endl;
    }

    // Transposición
    transponer(a, resultado, filas, columnas);
    cout << "Transposición de la primera matriz:" << endl;
    mostrar(resultado, columnas, filas); // Mostrar transpuesta

    return 0;
}
