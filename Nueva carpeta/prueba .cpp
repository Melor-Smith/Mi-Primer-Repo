#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
    int nuc,intentos=100;
    srand(time(0));
    nuc= rand() % 100 + 1;
  int con;
  for ( int i=0;i<intentos;i++){
      cout<<"ingrese  la contasena\n";
      cin>>con;
      if (con<nuc){
        cout<<"el numero es mayor\n";
      }else if (con>nuc){
        cout<<"el numero es menor\n";
      }else {
       cout<<"FELISITACIONES ACERTASTE\n";
        break;
      }
    
  }

    return 0;
}