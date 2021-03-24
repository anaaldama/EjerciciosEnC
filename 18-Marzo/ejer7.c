//18-03-21 Ana Paula Aldama
#include <stdio.h>
 
int main(){
	int numero1,numero2, resultado;
	puts("Ingrese un valor 1");
	scanf("%d,",&numero1);
	printf("El valor ingresado es %d", numero1);
	
	puts("Ingrese un valor 2");
	scanf("%d,",&numero2);
	printf("El valor ingresado es %d", numero2);
	
	resultado=numero1+numero2;
	printf("El valor ingresado es %d", resultado);
	return 0;
}
