//Ana Aldama 24/03/2021
#include <stdio.h>

int main(){
	
	double precio1=0, precio2=0, precio3=0, media=0;
	
	printf("Introduzca el precio del producto en el establecimiento numero 1, en euros: ");
	scanf("%lf",&precio1);
	printf("Introduzca el precio del producto en el establecimiento numero 2, en euros: ");
	scanf("%lf",&precio2);
	printf("Introduzca el precio del producto en el establecimiento numero 2, en euros: ");
	scanf("%lf",&precio3);
	
	media=(precio1+precio2+precio3)/3;
	printf("El precio medio del producto es %.2lf",media," Euros");
	
	return 0;
}