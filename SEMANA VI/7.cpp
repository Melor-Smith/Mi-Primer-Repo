 #include<iostream>
 using namespace std;
 int main(){
 int a,n;
 double resultado =1.0;
   cout<<"escribir el numero de basa\n";
   cin>>a;
   cout<<"Escribir el exponente\n";
   cin>>n;
   for(int i=1;i<=n;i++){

    resultado*=a;
   }
   cout<<"el resultao de elevar"<< a << "ala" << n << "es :\n"<<resultado;
    return 0;
 }