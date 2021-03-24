#include <stdio.h>//Ana Aldama 19-03-2021
#include <math.h>

//Declaración de funciones
double imc (double peso, double altura);
//Declaracion de variables
double peso=0, estatura=0, resultado=0;

int main(){
	//Calcular el IMC imc=peso kg/altura m^2
	puts("Ingresa el peso en kg");
	scanf("%lf", &peso);
	puts("Ingresa el estatura en mts");
	scanf("%lf", &estatura);
	
	resultado=imc(peso,estatura);
	printf("Tu IMC es: %.2lf \n", resultado);
	
	//Debajo de <18.5 =bajo
	//18.5 a 24.9= peso normal
	//25 a 29.9=sobrepeso
	//30 o mas obeso

	if(resultado <18.5){
		puts(" Bajo peso");
	}else if(resultado >=18.5 && resultado<=24.9){
		puts(" Peso Normal");
	}else if(resultado >=25 && resultado<=29.9){
		puts(" sobrepeso");
	}else if(resultado>=30){
		puts(" obeso");
	}
	return 0;
}
double imc (double peso, double altura){
	double imc =peso/(pow(altura,2));
	return imc;
}
