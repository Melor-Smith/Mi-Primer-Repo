#include<iostream>
using namespace std;
int main(){
   
   int digito,n;
   int imvertido = 0;
   cout<<"ingrese el numero:\n";
   cin>>n;
   n=abs(n);
   do{
     
     int digito=n %10;
      imvertido=imvertido *10 + digito;
      n/=10;
   }while(n>0);
  
  cout<<"el numero imvertido \n"<<imvertido;
 return 0;
}
/*
while(n>0){
    int digito = n % 10;
    imvertido=imvertido * 10 +digito;
    n/=10;
  }*/
 /* 
 // Usar un bucle for para invertir los dígitos
    for (; numero > 0; numero /= 10) {
        int digito = numero % 10;  // Obtener el último dígito
        invertido = invertido * 10 + digito;  // Agregar el dígito a la nueva variable
    }*/