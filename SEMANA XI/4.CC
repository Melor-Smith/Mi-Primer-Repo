#include<iostream>
using namespace std;
class persona{
    string nombre;
    string direccion;
    public:
    persona(string name, string dir) : nombre(name), direccion(dir){} 

    friend class ubicacion;
};
class ubicacion{
    public:
    void actualizarubicacion(persona &p1, string nuevadireccion){
        p1.direccion=nuevadireccion;
        cout<<"la nueva dirección de "<<p1.nombre<<" es "<<p1.direccion<<endl;
    }
    void cambiarnombre(persona &p1, string nuevonombre){
        p1.nombre=nuevonombre;
        cout<<"el nuevo nombre: "<<p1.nombre<<endl;
    }
};
int main(){
    persona p1("Miguel", "bella durmiente");
    ubicacion u1;
    u1.actualizarubicacion(p1, "tingo maria");
    u1.cambiarnombre(p1, "luis");
}
