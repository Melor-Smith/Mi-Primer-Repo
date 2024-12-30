#include <iostream>
#include <vector>
#include <limits>
using namespace std;
pair<int, int> encontrarMinMax(const vector<vector<int>>& matriz) {
    int minElemento = numeric_limits<int>::max();
    int maxElemento = numeric_limits<int>::min();
    for (const auto& fila : matriz) {
        for (int elemento : fila) {
            if (elemento < minElemento) {
                minElemento = elemento;
            }
            if (elemento > maxElemento) {
                maxElemento = elemento;
            }
        }
    }
    return {minElemento, maxElemento};
}
int main() {
    int n, m;
    cout << "Ingrese el número de filas (n): ";cin >> n;
    cout << "Ingrese el número de columnas (m): ";cin >> m;
    vector<vector<int>> matriz(n, vector<int>(m));
    cout << "Ingrese los elementos de la matriz:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matriz[i][j];
        }
    }
    auto [minElemento, maxElemento] = encontrarMinMax(matriz);
    cout << "El elemento mínimo es: " << minElemento << endl;
    cout << "El elemento máximo es: " << maxElemento << endl;
    return 0;
}
