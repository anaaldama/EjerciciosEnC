#include <stdio.h>
double num;

int main(void){
	puts("Ingrese un numero");
	scanf("%lf",&num);
	
	num=pow(num,3);
	printf("El cubo es %.2lf", num);
	
	return 0;
}
