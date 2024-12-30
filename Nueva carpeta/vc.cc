#include<iostream>
using namespace std;
void numero(){
    int nm[10]={ 0 };
 for( int i=0; i<10;i++){
  cout<<"ingrsea el  numero para el array en la psicion  "<< i << " : \n";
  cin>>nm[i];
 }
 cout<<"LOS NJUMEROS DEL ARAY SON\n";
 for(int i=0;i<10;i++){
    cout<<"los numeros el la posicion "<< i <<" son :\n"<<nm[i];
 }
 
}

int main(){

    numero();

 return 0;
}
