#include<iostream>
using namespace std;
int numeros[10];
int main (){
  for(int i=0;i<10;i++){
    cout<<"ingrese el valor del aray`el la posicion "<< i << " : ";
    cin>>numeros[i];
  }
   for(int i=0;i<10;i++){
    cout<<"["<< i+1 << " ]= "<<numeros[i]<<"\n ";
  }

    return 0;
}