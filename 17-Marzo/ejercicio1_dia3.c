//19/03/2021 CNAD
#include <stdio.h>
#include <math.h>
double A, B, C, X1,X2;
int main(){
	puts("Ingresa valor de A:");
	scanf("%lf",&A);
	puts("Ingresa valor de B:");
	scanf("%lf",&B);
	puts("Ingresa valor de C:");
	scanf("%lf",&C);
	
	X1=(-B+sqrt(pow(B,2)-4*A*C))/(2*A);
	X2=(-B-sqrt(pow(B,2)-4*A*C))/(2*A);
	
	printf("X1:%lf \n",X1);
	printf("X2:%lf \n",X2);
	return 0;
}
