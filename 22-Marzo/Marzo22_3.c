#include <stdio.h>
int main(){
	float calificacion[5];
	float suma;
	float promedio;
	int i=0; int cantidad;
	
	printf("Ingrese la cantidad de calificación: ");
		scanf("%d",&cantidad );
	for (i=0; i<cantidad; i++){
		printf("Ingrese las calificacion %d:",i);
		scanf("%f",&calificacion[i]);
		suma=suma+calificacion[i];
		if(i==(cantidad-1)){
			promedio=suma/cantidad;
		}
	}
	printf("El promedio es %f \n", promedio);
	return 0;
}
