#include<iostream>
using namespace std;
class persona
{
private:
 string nombre;
 int edad;
 int dni;
public:
  //constructor
 persona(string n,int e,int w):
 nombre(n),edad(e),dni(w){}
 //funciones:
 void setnombre(string x) {this->nombre=x;}
    string getnombre(){return this->nombre;}
 void setedad(int e) {this->edad=e;}
   int getedad(){return this->edad;}
 void setdni(int w) {this->dni=w;}
   int getdni(){return this->dni;}

};
void menu(){
cout<<"HOLA BUENOS DIAS\n";
}
int main(){
   menu();
   persona m ("Melor",18,60088593);
   cout<<"NOMBRE\n"<<m.getnombre()<<endl;
   cout<<"EDAD\n"<<m.getedad()<<"Años.\n";
   cout<<"DNI\n"<<m.getdni()<<endl;



    return  0;
}

  