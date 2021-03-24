#include <stdio.h>
#include <time.h>

int main(){
	int arreglo [30];
	int i;
	for (i=1; i<=30; i++){
		arreglo[i]=i;
		printf("El valor es %d \n", arreglo[i]);
	}
	for (i=1; i<=30; i++){
		printf(" %d \n", arreglo[i]=i);
	}
	return 0;
}
