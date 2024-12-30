#include <iostream>
using namespace std;
static void funcionEstatica() {
    cout << "Esta función es estática y solo se puede usar en este archivo." << endl;
}
int main() {
    funcionEstatica();
    return 0;
}
