//2.	Realizar un programa que pida tres numeros y diga cuales son pares y cuales impares. 
//Ana Aldama 24/03/2021
#include <stdio.h>

void parImpar(int num);
int residuo=0;

int main(){
	
	int num1=0, num2=0, num3=0;

	puts("Ingresa el numero # 1:");
	scanf("%d",&num1);
	puts("Ingresa el numero # 2:");
	scanf("%d",&num2);
	puts("Ingresa el numero # 3:");
	scanf("%d",&num3);
	
	printf("\n");
	
	parImpar(num1);
	parImpar(num2);
	parImpar(num3);

	return 0;
}
void parImpar(int num){
	residuo=num%2;
	if(residuo==0){
		printf("El numero: %d es Par \n",num);
	}else{
		printf("El numero: %d es Impar \n",num);
	}
}