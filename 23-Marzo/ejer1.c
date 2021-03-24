#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void juego (int usuario, int pc);
/* En un arreglo garden los resultados de 10 partidas
gano la pc
el jugador
empate

arreglo [10]
0 empate
1 jugador
2 pc*/

int main(){
	
	/*
	 1 - piedra
	 2 - papel
	 3 - tijeras
	 
	 El usuario ingrese un numero entero 1 , 2 o 3
	 el programa ingrese 1 ,2 ,3
	 
	 si empataron, si gano el usuario o gano el pc
	 */
	int usuario, jugadas[10], puntosJugador=0, empate=0, puntosPC=0;
	
	for(int i=0; i<=9; i++){
		scanf("%d", &usuario);
		printf("El valor del usuario es: %d \n",usuario);
		puts("ingrese un número entero 1 y 3");
		srand(time(NULL));
		int pc = 1 + rand() %(4-1);
		printf("El valor de la pc es: %d \n",pc);
		 
		jugadas[i]=juego(usuario,pc);
	
	}
	for( int i=0; i<10; i++){
		if(jugada[i]==0){
			empate++;
		}
		if(jugada[i]==1){
			puntosJugador++;
		}
		if(jugada[i]==2){
			puntosPC++;
		}
	}
	printf("Empate: %lf \n",empate);
	printf("Puntos jugador: %lf \n",puntosJugador);
	printf("Puntos PC: %lf \n",puntosPC);
 
	return 0;	 
}
 
int juego(int usuario, int pc){
	/*
		1 - piedra
		2 - papel
		3 - tijeras
	*/	
	 int resultado=0;
 
	if(usuario == pc){
		puts("Es un empate");
		resultado=0;
	}
 
	if(usuario ==1 && pc==2){
		puts("piedra vs papel: Gana la PC");	
		resultado=2;
	}
	if(usuario ==1 && pc==3){
		puts("piedra vs tijeras: Gana el usuario");	
		resultado=1;
	}
	if(usuario ==2 && pc==1){
		puts("papel vs piedra: Gana el usuario");
		resultado=1;	
	}
	if(usuario ==2 && pc==3){
		puts("papel vs tijera: Gana la PC");
		resultado=2;	
	}
	if(usuario ==3 && pc==1){
		puts("papel vs tijera: Gana la PC");
		resultado=2;	
	}
	if(usuario ==3 && pc==2){
		puts("papel vs tijera: Gana el usuario");	
		resultado=1;
	}
}


