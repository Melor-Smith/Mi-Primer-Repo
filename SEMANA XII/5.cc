#include<iostream>
using namespace std;

class coche{
private:
string marca;
string modelo;
int anio;
public:
//constructor
coche(string m,string mo,int a ):marca(m),modelo(mo),anio(a) {}
void setmarca(string m) { this->marca=m;}
void setmodelo(string mo){   this->modelo=mo;}
void setanio(int a){ this->anio=a;}
string getmarca(){
    return this->marca;
}
string getmodelo(){
    return this->modelo;
}
int getanio(){

    return this->anio;
}
};

int main(){
    coche p("ferrary","turbo",2025);
 
    cout<<"MARCA :\t"<<p.getmarca()<<endl;
    cout<<"MODELO: \t"<<p.getmodelo()<<endl;
    cout<<"ANIO:\t"<<p.getanio()<<endl;

    return 0;
}