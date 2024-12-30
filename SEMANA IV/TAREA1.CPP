#include <iostream>
using namespace std;
int main() {
    float num[10], suma = 0, promedio;
    int mayores = 0;
    for (int i = 1; i < 10; i++) {
        cout<<"ingresa el: "<< i <<" numero \n";
        cin >> num[i];
        suma += num[i];
    }
    promedio = suma / 10;
    cout << "Promedio: " << promedio << endl;
    cout << "Los Números mayores al promedio son: ";
    for (int i = 0; i < 10; i++) {
        if (num[i] > promedio) {
            cout << num[i] << " ";
            mayores++;
        }
    }
    cout << endl << "Cantidad de números mayores al promedio: " << mayores << endl;
    
    return 0;
}


