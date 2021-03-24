#include <stdio.h>
//Declaracion de funciones
double imc(double peso, double altura);
//Declaracion de varibales globales
double peso=0; estatura=0; resultado=0;

int main(){
	// ****Calcular el IMC ***
	// imc=peso kg/altura;

	puts("Ingresa tu peso en Kg:");
	scanf("%lf", &peso);
	puts("Ingresa tu estatura en metros:");
	scanf("%lf", &estatura);
	
	resultado=imc(peso, estatura);
	printf("Tu IMC es:%lf \n",resultado);
	/*
	debajo de <18.5=bajo
	18.5 a 24.9 =peso normal
	25 a 29.9 =sobrepeso
	30 o mas obeso
	*/
	if(resultado<18.5){
		puts("Bajo peso");
	}elseif(resultado>=18.5 && resultado<=24.9){
		puts("Peso Normal");
	}elseif(resultado>=25 && resultado<=29.9){
		puts("Sobrepeso");
	}else{
		puts("Obeso");
	}
	
	return 0;
}
double imc(double peso, double altura){
	double imc= peso/(pow(estatura, 2));
	return imc;
}


