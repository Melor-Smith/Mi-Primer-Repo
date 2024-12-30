#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> transpuesta(const vector<vector<int>>& matriz) {
    int n = matriz.size();
    int m = matriz[0].size();
    vector<vector<int>> transpuestaMatriz(m, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            transpuestaMatriz[j][i] = matriz[i][j];
        }
    }
    return transpuestaMatriz;
}
int main() {
    int n, m;
    cout << "Ingrese el número de filas (n): ";
    cin >> n;
    cout << "Ingrese el número de columnas (m): ";
    cin >> m;
    vector<vector<int>> matriz(n, vector<int>(m));
    cout << "Ingrese los elementos de la matriz:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matriz[i][j];
        }
    }
    vector<vector<int>> transpuestaMatriz = transpuesta(matriz);
    cout << "Matriz transpuesta:\n";
    for (const auto& fila : transpuestaMatriz) {
        for (int elemento : fila) {
            cout << elemento << " ";
        }
        cout << endl;
    }
    return 0;
}
