#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
volatile bool interrupcion = false;
void simularInterrupcion() {
    this_thread::sleep_for(chrono::seconds(1));
    interrupcion = true;
}
int main() {
    thread t(simularInterrupcion);
    while (!interrupcion) {
        cout << "Esperando interrupción..." << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }
    cout << "Interrupción recibida!" << endl;
    t.join();
    return 0;
}
