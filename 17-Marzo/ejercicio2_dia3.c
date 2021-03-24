#include <stdio.h>
#include <math.h>
int main(){
	double num;
	puts ("Ingrese un dato:\n");
	scanf("%lf",&num);
	num=pow(num,3);
	printf("El cubo es: %.2lf \n", num);
	
	return 0;
}
