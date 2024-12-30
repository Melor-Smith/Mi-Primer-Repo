#include<iostream>
using namespace std;
int main(){
    int n;
    printf("ingrese el numero \n");
    cin>>n;
    int suma=0;
    n=abs(n);
  //  while(n>0){
   //   suma+=n %10;
   //   n/=10;
    //}

    for(;n>0;n/=10){
        suma+=n %10;
    }
    cout<<"la suma es \n"<<suma;



    return 0;
}