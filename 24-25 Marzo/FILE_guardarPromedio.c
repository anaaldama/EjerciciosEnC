#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE* documento;
	documento=fopen("Calificaciones.txt","wt");
	int arreglo [5]; double promedio;
	
	fputs("Ejemplo de calificaciónes: \n", documento);
	for(int i=0; i<5; i++){
		printf("ingresa las calificaciones %d: ",i);
		scanf("%d",&arreglo[i],i);
		promedio+=arreglo[i];
		
		fprintf(documento, "La calificación %d, es:%d \n",i,arreglo[i]);
	}	
	fprintf(documento,"El promedio es: %lf \n", promedio/5);
	
	for(int i=0; i<5; i++){
		printf("Las calificaciones son: %d \n",arreglo[i]);
	}
	
	fclose(documento);
	return 0;
}
