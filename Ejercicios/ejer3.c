//1.	Realizar un programa que pida al usuario dos numeros y diga cuál es el mayor y cual el menor.
//Ana Aldama 24/03/2021
#include <stdio.h>

int main(){
	
	int num1=0, num2=0, repite=0;

	while(repite==0){
		
		printf("Ingresa un numero entero:");
		scanf("%d",&num1);
		printf("Ingresa otro numero entero:");
		scanf("%d",&num2);
		
		if(num1==num2){
			printf("Los numeros son iguales, ingresar otros numeros \n");
			printf("\n");
		}else if(num1>num2){
			printf("El valor de num1=%d  es mayor y el valor de num2=%d es menor.\n",num1, num2);
			repite=1;
		}else{
			printf("El valor de num2=%d es mayor y el valor de num1=%d es menor.\n",num2, num1);
			repite=1;
		}
	}
	return 0;
}