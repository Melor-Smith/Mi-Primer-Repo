#include <iostream>
using namespace std;
int main() {
    int filas, columnas;
    cout << "Ingrese el número de filas: \n";
    cin >> filas;
    cout << "Ingrese el número de columnas: \n";
    cin >> columnas;

    int matriz[filas][columnas];
    cout << "Ingrese los elementos de la matriz:\n";
    for (int i = 0; i < filas; ++i)
        for (int j = 0; j < columnas; ++j)
            cin >> matriz[i][j];
    cout << "Matriz original:\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j)
            cout << matriz[i][j] << " ";
        cout << endl;
    }
    cout << "La matriz transpuesta es:\n";
    for (int j = 0; j < columnas; ++j) {
        for (int i = 0; i < filas; ++i)
            cout << matriz[i][j] << " ";
        cout << endl;
    }
    return 0;
}
