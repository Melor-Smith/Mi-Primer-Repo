#include<iostream>
using namespace std;
int main(){

   int numero[5],i;
   for(i=0;i<5;i++){
      numero[i]=i*10;
   }
 for(i=0 ;i<5;i++){

    cout<< numero[i] <<" ";
 }
 
    return 0;
}
/*
#include <iostream>
using namespace std;

int main() {
    int numero[5], i;

    // Cambia 1 por 0 en la condición de inicio
    for (i = 0; i < 5; i++) {
        numero[i] = i * 10; // Esto asigna 0, 10, 20, 30, 40
    }

    for (i = 0; i < 5; i++) {
        cout << numero[i] << " "; // Imprime los números en una línea
    }
    
    return 0;
}
*/