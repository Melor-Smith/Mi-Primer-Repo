#include<iostream>
using namespace std;
int main(){
 int n;
 int sum1=0,sum2=0;
   cout<<"Ingresa el numero\n";
   cin>>n;
  for ( int i=1;i<=n;i++){
  if( i%2== 0){
    sum1+=i;
  }else{
    sum2+=i;
  }
  }
  cout<<"la suma de los numeros pares es:\n"<<sum1<<endl;
  cout<<"la suma de los numeros impares es:\n"<<sum2;
 return 0;
}