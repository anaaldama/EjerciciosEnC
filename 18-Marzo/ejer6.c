//18-03-21 Ana Paula Aldama
#include <stdio.h>
 
int main(){
	/*La primera condición es verdadera,
	 la tercera condicion es verdadera */
	int a=10;

	if(a>9){
		puts("la primera condicion es verdadera");
	}
	if(a>=9){
		puts("la segunda condicion es verdadera");
	}
	if(a==9+1){
		puts("la tercera condicion es verdadera");
	}
	
	return 0;
}
