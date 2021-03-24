//18-03-21 Ana Paula Aldama
#include <stdio.h>
	int main(){
	float valor=14.0;
	//double valor2=10.1;
	float valor2=5;
	float valor3=34.0;
	float valor4=0.00181;
	float resultado=0.0;
	//operador modulo %
	resultado=(valor+valor2)*valor3/valor4;
	printf("El resultado es %f \n", resultado);
	
	//++variables
	int numero=0;
	printf("El numero es %d \n", numero);
	printf("El numero es %d \n", ++numero);
	printf("El numero es %d \n", numero++);
	printf("El numero es %d \n", numero);
	
	puts("***********************************");
	int numero2=10;
	printf("El numero es %d \n", numero2);
	printf("El numero es %d \n", --numero2);
	printf("El numero es %d \n", numero2--);
	printf("El numero es %d \n", numero2);
	return 0;
}
