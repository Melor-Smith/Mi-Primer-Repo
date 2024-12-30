#include<iostream>
using namespace std;
void mostrarvector(int v[]){
  
   for (int i=0;i<4;i++)
   {
       cout<<v[i]<<"\t";
   }
}
int main()
{
 int v[4] = {3, 5, 2, 6};  // Usar llaves para inicializar el array
    mostrarvector(v);         // Llamada a la función correcta
    return 0;
  
}