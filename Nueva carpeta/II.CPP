#include <iostream>
#include <vector>

using namespace std;

// Función para multiplicar dos matrices
vector<vector<int>> multiplicarMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int n = A.size();        // Número de filas de A
    int m = A[0].size();     // Número de columnas de A (también filas de B)
    int p = B[0].size();     // Número de columnas de B

    // Crear la matriz resultado inicializada a 0
    vector<vector<int>> C(n, vector<int>(p, 0));

    // Multiplicación de matrices
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j) {
            for (int k = 0; k < m; ++k) {
                C[i][j] += A[i][k] * B[k][j]; // Multiplicación y suma
            }
        }
    }

    return C;
}

int main() {
    int n, m, p;

    // Entradas del usuario
    cout << "Ingrese el número de filas de la matriz A (n): ";
    cin >> n;
    cout << "Ingrese el número de columnas de la matriz A (m): ";
    cin >> m;
    cout << "Ingrese el número de columnas de la matriz B (p): ";
    cin >> p;

    vector<vector<int>> A(n, vector<int>(m));
    vector<vector<int>> B(m, vector<int>(p));

    cout << "Ingrese los elementos de la matriz A:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> A[i][j];
        }
    }

    cout << "Ingrese los elementos de la matriz B:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            cin >> B[i][j];
        }
    }

    // Realizar la multiplicación
    vector<vector<int>> C = multiplicarMatrices(A, B);

    // Imprimir la matriz resultado
    cout << "Matriz resultado C (A * B):\n";
    for (const auto& fila : C) {
        for (int elemento : fila) {
            cout << elemento << " ";
        }
        cout << endl;
    }

    return 0;
}

