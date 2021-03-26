#include <stdio.h>
#include <stdlib.h>

void main(){
	double promedio=9.9;
	
	FILE*fichero;
	fichero=fopen("trabajoFinal.txt","wt");	
	fputs("Guardar una cadena de texto \n",fichero);
	fprintf(fichero,"Cadena de texto o variable %lf \n", promedio);
	fclose(fichero);
	
	puts ("Datos Guardados");
}
