#include<iostream>
using namespace std;
class Reloj {
private:
    int hora;
    int minuto;
    int segundo;
public:
    Reloj(int h, int m, int s) : hora(h), minuto(m), segundo(s) {}
    void setHora(int h) { this->hora = h; }
    void setMinuto(int m) { this->minuto = m; }
    void setSegundo(int s) { this->segundo = s; }
    int getHora() { return this->hora; }
    int getMinuto() { return this->minuto; }
    int getSegundo() { return this->segundo; }
    void mostrarHora() {
        cout << "Hora: " << hora << ":" << minuto << ":" << segundo << endl;
    }
};
int main() {
    Reloj r(10, 30, 45);
    r.mostrarHora();

    return 0;
}
