//18-03-21 Ana Paula Aldama
#include <stdio.h>
#include <math.h>
 /*Ingresa un numero y lo regresa elevado al cuadrado*/
int main(){
	double num;
	puts("Ingresa un numero:");
	scanf("%lf",&num);
	
	printf("El cuadrado del numero %lf es %lf \n", num, num*num);
	printf("Opcion 2 utilizando la funcion pow: %lf \n", pow(num,2));
	return 0;
}
