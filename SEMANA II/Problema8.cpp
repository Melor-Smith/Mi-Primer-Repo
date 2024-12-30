#include <stdio.h>
#include <cmath>
int main(){
double la=3 ;
double lb=7;
double lc=5;
double sp=(la+lb+lc)/2;
double a=sqrt(sp*(sp-la)*(sp-lb)*(sp-lc));
printf("El semi perimetro triangulo es: %.1f\n", sp);
printf("El área del triangulo es: %.9f\n", a);
return 0;
}