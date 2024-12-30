#include <iostream>
#include <iostream>
using namespace std;

void mostrar(int m[3][2]) {
    for(int i = 0; i < 3; i++) {  // Use ';' for loop continuation
        for(int j = 0; j < 2; j++) {
            cout << m[i][j] << " ";  // Use the correct variable name 'm'
        }
        cout << endl;
    }
}

int main() {
    int m[3][2] = {{3, 3}, {3, 7}, {5, 8}};
    cout << m[1][1] << endl;  // This will print '7'
    mostrar(m);  // Pass the correct array 'm'

    // The following lines are not defined in your original code
    // Uncomment or implement as needed
    // sumar(n1, n2, nr); // You need to define the 'sumar' function and its parameters

    return 0;
}
