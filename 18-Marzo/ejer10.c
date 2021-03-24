//18-03-21 Ana Paula Aldama
#include <stdio.h>

int main(){
	int parcial1,parcial2, parcial3;
	double promedio;
	
	puts("Ingresa el primer parcial:\n");
	scanf("%d",&parcial1);
	puts("Ingresa el segundo parcial:\n");
	scanf("%d",&parcial2);
	puts("Ingresa el tercer parcial:\n");
	scanf("%d",&parcial3);
	
	promedio=(parcial1+parcial2+parcial3)/3;
	printf("El promedio es %lf \n",promedio);
	return 0; 
}
