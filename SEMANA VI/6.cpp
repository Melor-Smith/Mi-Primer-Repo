#include<iostream>
using namespace std;
int main(){
    int n;
   cout<< "ingrese el numeros del multiplo desseado\n";
   cin>>n;
   cout<<"LOS MULTIPLOS SON:\n";
  for( int i=0;i<=100;i++){
   if(i%n==0){
     cout<<i<<endl;
   }
   }
  
    return 0;
}