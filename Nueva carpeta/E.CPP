#include <iostream>
#include <vector>
using namespace std;
pair<int, int> sumaDiagonales(const vector<vector<int>>& matriz) {
    int n = matriz.size();
    int sumaDiagonalPrincipal = 0;
    int sumaDiagonalSecundaria = 0;
    for (int i = 0; i < n; ++i) {
        sumaDiagonalPrincipal += matriz[i][i];
        sumaDiagonalSecundaria += matriz[i][n - 1 - i];
    }
    return {sumaDiagonalPrincipal, sumaDiagonalSecundaria};
}
int main() {
    int n;
    cout << "Ingrese el tamaño de la matriz (n x n): ";
    cin >> n;
    vector<vector<int>> matriz(n, vector<int>(n));
    cout << "Ingrese los elementos de la matriz:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matriz[i][j];
        }
    }
    auto [sumaPrincipal, sumaSecundaria] = sumaDiagonales(matriz);
    cout << "Suma de la diagonal principal: " << sumaPrincipal << endl;
    cout << "Suma de la diagonal secundaria: " << sumaSecundaria << endl;
    return 0;
}
