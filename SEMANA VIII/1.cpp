#include <iostream>
#include <vector>
#include <limits>
using namespace std;
void encontrarMinMax(const vector<vector<int>>& matriz, int& minimo, int& maximo) {
    minimo = numeric_limits<int>::max();
    maximo = numeric_limits<int>::min(); 

    for (const auto& fila : matriz) {
        for (int elemento : fila) {
            if (elemento < minimo) {
                minimo = elemento; 
            }
            if (elemento > maximo) {
                maximo = elemento;
            }
        }
    }
}

int main() {
    int n, m;
    cout << "Ingrese el número de filas (n): ";
    cin >> n;
    cout << "Ingrese el número de columnas (m): ";
    cin >> m;

    vector<vector<int>> matriz(n, vector<int>(m));

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matriz[i][j];
        }
    }

    int minimo, maximo;
    encontrarMinMax(matriz, minimo, maximo);

    cout << "Mínimo = " << minimo << ", Máximo = " << maximo << endl;

    return 0;
}
