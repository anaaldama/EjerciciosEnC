//3.	Realizar un programa que pida que se pulse la letra “C” si se pulsa cualquier otra
//tecla que no sea la “C”, dice “letra incorrecta” y vuelva a pedir que se pulse la 
//letra “C”. Cuando se pulsa la tecla “C” el programa dice “gracias” y termina. 
//Ana Aldama 24/03/2021
#include <stdio.h>

int main(){
	
	char letra;
	int repite=0;

	while(repite==0){
		
		printf("Ingresa una letra:");
		scanf("%s",&letra);

		
		if(letra=='C'){
			printf("gracias \n");
			printf("\n");
		}else{
			printf("letra incorrecta \n");
		}
	}
	return 0;
}
