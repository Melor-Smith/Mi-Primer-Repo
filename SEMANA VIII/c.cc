#include<iostream>
using namespace std;

class perro {
private:
    string nombre, raza;
    int edad;

public:
    perro(string n, string nom, int x) : nombre(n), raza(nom), edad(x) {}

    void setnombre(string n) { this->nombre = n; }
    void setraza(string nom) { this->raza = nom; }
    void setedad(int x) { this->edad = x; }

    string getnombre() { return this->nombre; }
    string getraza() { return this->raza; }
    int getedad() { return this->edad; }
};

int main() {
    perro p1("Duke", "Criollo", 5); 
    cout << p1.getnombre() << endl;
    cout << p1.getraza() << endl;
    cout << p1.getedad() << endl;
   perro p2("piero", "Criollo", 4); 
    cout <<"NOMBRE:\n"<< p2.getnombre() << endl;
    cout << "RAZA:\n"<< p2.getraza() << endl;
    cout << "EDAD:\n"<< p2.getedad() << endl;

    return 0;
}
