//Ana Aldama 24/03/2021
/*
4.	Se quiere controlar el numero de habitantes de un edificio con 6 pisos y 4 puertas (A, B, C, y D) 
en cada piso. Realizar un programa que pida al usuario que introduzca el numero de habitantes de cada puerta del edificio
a.	 El programa debe decir la vivienda (piso y puerta) que mas habitantes tiene del edificio. 
b.	El piso que mas habitantes tiene de todo el edificio.
c.	Mostrar la media de habitantes de cada piso
*/
#include <stdio.h>
void ingresaHabitantes(int edificio[6][4]);
void mostrarHabitantes(int edificio[6][4]);

int main(){
	int A[6][4];
	int B[6][4];
	int C[6][4];
	int D[6][4];

	ingresaHabitantes(A);
	return 0;
}

void ingresaHabitantes(int edificio[6][4]){
	int habitantes=0;
	
	for(int i=1; i<=6; i++){
		for(int j=1; j<=4; j++){
			printf("Ingrese el numero de habitantes del piso %d puerta %d: ", i, j);
			scanf("%d",&habitantes);
			edificio[i][j]=habitantes;
		}
	}
	
	mostrarHabitantes(edificio);
}
void mostrarHabitantes(int edificio[6][4]){
	int habitantes=0;
	
	for(int i=1; i<=6; i++){
		for(int j=1; j<=4; j++){
			printf("Habitantes del dificio piso %d puerta %d  es: %d.\n", i, j,edificio[i][j]);
		}
	}	
}