#include <stdio.h>
#include<math.h>

//Declaracion de funciones
void tabla(int numero);

//Declaracio de variables globales
int num =0,i; 

int main(){
	puts("Ingresa un numero");
	scanf("%d", num);
	tabla(num);
	return 0;
}

void tabla(int n){
	for(i=1; i<=10; i++){
		printf("%d x %d = %d \n", n,i,i*n);
	}
}
