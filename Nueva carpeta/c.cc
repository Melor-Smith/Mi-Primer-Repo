#include<iostream>
using namespace std;

struct estudiante{
  string nombre;
  float promedio;
  bool inscrito;

};
struct producto{
  string nombre;
  int c;
  float p;

};

int main(){

 estudiante  estudiante1;
 estudiante1.nombre="melor smith yanac osorio";
 estudiante1.promedio=12.34;
 estudiante1.inscrito=true;
  cout<<estudiante1.nombre<<endl;
  cout<<estudiante1.promedio<<endl;
   cout << "Inscritos: " << (estudiante1.inscrito? "Sí" : "No") << endl;

 estudiante estudiante2;
 estudiante2.nombre="Ingrid yanac osrio";
 estudiante2.promedio=13.55;
 estudiante2.inscrito=false;
  cout<<estudiante2.nombre<<endl;
  cout<<estudiante2.promedio<<endl;
   cout << "Inscritos: " << (estudiante2.inscrito ? "Sí" : "No") << endl;
   producto producto1;
   producto1.nombre=" leche  sin lactosa\n";
   producto1.c= 50;
   producto1.p= 12,4;
   cout<<producto1.nombre<<endl;
    cout<<producto1.c<<endl;
     cout<<"PRECIO: "<<producto1.p<<endl;
      
 return 0;
}
