#include <stdio.h>
double sueldo(double pago);
double suma(double a, double b);
double suma2(double a, double b, double c);

double num1=2, num2=3, num3=4;


int main(){
	num3+=suma(num1,num2);
	printf("%lf", suma2(num1, num2, num3));
	return 0;
}
double suma(double a, double b){
	double resultado1=a+b;
	return resultado1;
}

double suma2(double a, double b, double c){
	double resultado2=(a+b+num3)*c;
	return resultado2;
}

double sueldo(double sueldo){
	if(sueldo<1000){
		sueldo*=1.15;
	}
	return sueldo;
}
