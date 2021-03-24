//Declarar función
void suma(int a, int b);
double sueldo(double pago);
double suma2(double a, double b, double c);
//Variables globales
double num1=2, num2=3, num3=4;

int main(){
	//*** SUMA ***
	int a=5, b=8;
	suma(a,b);
	//*** SUELDO ***
	double pago=100, pago2;
	printf("El sueldo es:%lf \n",sueldo(pago));
	pago2=sueldo(200);
	printf("El sueldo es:%lf \n",sueldo(pago2));
	return 0;	
}

void suma(int a, int b){
	int resultado=a+b;
	printf("%d \n",resultado);
}

double sueldo(double sueldo){
	if(sueldo<1000){
		sueldo*=1.15; //sueldo*1.15
	}
	return sueldo;
}
double suma2(double a, double b, double c){
	double resultado2=(a+b+num3)*c
	return resultado2;
}


