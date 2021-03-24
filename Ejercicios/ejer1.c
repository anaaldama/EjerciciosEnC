//Ana Aldama 24/03/2021
#include <stdio.h>
#include <math.h>
int main(){
	
	int D=0, H=0, R=0;
	double V=0, PI=3.141593;
	
	printf("Introduzca el diametro en Mts.");
	scanf("%d",&D);
	printf("Introduzca la altura en Mts.");
	scanf("%d",&H);
		
	R = D/2;
	V = PI * (pow(R,2)) * H;
	
	printf("El volumen del cilindro es de %.2lf", V," metros cúbicos");
	return 0;
}