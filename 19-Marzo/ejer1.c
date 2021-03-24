#include <stdio.h>
#include <math.h>
double A;
double B;
double C;
double X1,X2;

int main(void){
	puts("Ingresa valor de A:");
	scanf("%lf",&A);
	puts("Ingresa valor de B:");
	scanf("%lf",&B);
	puts("Ingresa valor de C:");
	scanf("%lf",&C);
	//sqrt() raíz cuadrada, funcion pow(valor,exponente)
	X1=(-B+sqrt(pow(B,2)-4*A*C))/(2*A);
	X2=(-B-sqrt(pow(B,2)-4*A*C))/(2*A);
	
	printf("X1: %lf",X1);
	printf("X2: %lf",X2);
	
	return 0;
}
