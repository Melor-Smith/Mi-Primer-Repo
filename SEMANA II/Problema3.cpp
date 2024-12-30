#include <stdio.h>
#include <cmath>
int main(){
double dMayor = 8;
double dMenor = 6;
double area = (dMayor * dMenor) / 2;
double lado = sqrt((dMayor / 2) * ( dMayor / 2) + (dMenor / 2) * (dMenor / 2));
double perimetro = 4 * lado;
printf("El área del rombo es: %.0f\n", area);
printf("La longitud de cada lado del rombo es: %.0f\n", lado);
printf("El perímetro del rombo es: %.0f\n", perimetro);
return 0;

}