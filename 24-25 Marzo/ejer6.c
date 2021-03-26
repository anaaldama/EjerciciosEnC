/* Ana Aldama 24/03/2021
4.	Se quiere controlar el numero de habitantes de un edificio con 6 pisos y 4 puertas (A, B, C, y D) 
en cada piso. Realizar un programa que pida al usuario que introduzca el numero de habitantes de cada puerta del edificio
a.	 El programa debe decir la vivienda (piso y puerta) que mas habitantes tiene del edificio. 
b.	El piso que mas habitantes tiene de todo el edificio.
c.	Mostrar la media de habitantes de cada piso */

#include <stdio.h>
void ingresaHabitantes(int edificio[6][4]);
void mostrarHabitantes(int edificio[6][4]);
void mayorPorPiso(int edificio[6][4]);
void mostrarControl(double habitantesxPiso[6]);

	
	int habitantes=0, mayorxPiso=0, piso=0, puerta=0, comparaPisos=0;
	char letrapuerta;
	double habitantesxPiso[6];
	
int main(){
	int edificio[6][4];
	ingresaHabitantes(edificio);
	return 0;
}

void ingresaHabitantes(int edificio[6][4]){
	habitantes=0;
			
	for(int i=1; i<=6; i++){//Piso
		for(int j=1; j<=4; j++){//Puerta
			switch(j){
				case 1: printf("Ingrese el numero de habitantes del piso %d puerta A: ", i);
				 break;
				case 2: printf("Ingrese el numero de habitantes del piso %d puerta B: ", i);
				 break;
				case 3: printf("Ingrese el numero de habitantes del piso %d puerta C: ", i);
				 break;
				case 4: printf("Ingrese el numero de habitantes del piso %d puerta D: ", i);
				 break;
			}
			scanf("%d",&habitantes);
			edificio[i][j]=habitantes;
		}
	}	
	//mostrarHabitantes(edificio);
	mayorPorPiso(edificio);
}

void mayorPorPiso(int edificio[6][4]){
	puts("\n");
	puts("Mayor cantidad de habitantes por piso: \n");
	
	for(int i=1; i<=6; i++){//Piso
		for(int j=1; j<=4; j++){//Puerta
			if(	(i==1 && j==1) || (i==2 && j==1) ||
				(i==3 && j==1) || (i==4 && j==1) || 
				(i==5 && j==1) || (i==6 && j==1)){
				//Si es el primer piso y puerta inicializo asigno el primer valor
				piso=i;
				puerta=j;
				mayorxPiso=edificio[i][j];
			}else if(mayorxPiso<edificio[i][j]){
				piso=i;
				puerta=j;
				mayorxPiso=edificio[i][j];
			}
			//suma cantidad de habitantes por piso
			habitantesxPiso[i]+=edificio[i][j]; 
		}
		switch(puerta){
			case 1: letrapuerta='A'; break;
			case 2: letrapuerta='B'; break;
			case 3: letrapuerta='C'; break;
			case 4: letrapuerta='D'; break;
		}
		printf("Piso: %d puerta: %c \n", piso,letrapuerta, edificio[piso][puerta]);
	}
	mostrarControl(habitantesxPiso);
}
void mostrarControl(double habitantesxPiso[6]){
	puts("\n");
	comparaPisos=0;
	for(int i=1; i<=6; i++){//Piso
		printf("Piso %d Total:%.0lf Media: %.2lf\n", i, habitantesxPiso[i], (habitantesxPiso[i]/4));
		if(i==1){
			comparaPisos=habitantesxPiso[i];
			piso=i;
		}else if(comparaPisos<habitantesxPiso[i]){
			comparaPisos=habitantesxPiso[i];
			piso=i;
		}
	}
	puts("\n");
	printf("Mayor habitantes Piso: %d Total: %.0lf\n", piso,habitantesxPiso[piso]);
}

void mostrarHabitantes(int edificio[6][4]){
	for(int i=1; i<=6; i++){//Piso
		for(int j=1; j<=4; j++){//Puerta
			switch(i){
				case 1: printf("Habitantes del dificio piso %d puerta A: %d", i, edificio[i][j]);
						break;
				case 2: printf("Habitantes del dificio piso %d puerta B: %d", i, edificio[i][j]);
						break;
				case 3: printf("Habitantes del dificio piso %d puerta C: %d", i, edificio[i][j]);
						break;
				case 4: printf("Habitantes del dificio piso %d puerta D: %d", i, edificio[i][j]);
						break;
			}
		}
	}	
}