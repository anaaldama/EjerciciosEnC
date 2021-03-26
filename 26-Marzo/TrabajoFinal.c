/*
Elaborar un programa que realice las siguientes operaciones:
Registre el nombre de la materia. 
Registre el nombre del maestro.
Registre el nombre de “n” alumnos con sus 5 calificaciones
El programa generará un archivo .txt con los siguientes requerimientos:
Los nombres con las calificaciones correspondientes y el promedio de cada alumno
Mensaje correspondiente al promedio obtenido
10 Felicidades
9 a 8 vas por buen camino
7 a 6 aprobado
menor que 6 reprobado.
Nombre de la materia.
Nombre del Maestro
*/
#include <stdio.h>

struct califAlumnos{
	char alumno[30];
	double calificaciones[5];
	double promedio;
	char* mensaje; // char mensaje[25]; //opcion2
};

char materia[30];
char maestro[30];
int cantAlumnos=0, suma=0;

	
void main(){
	//Archivo
	FILE*fichero;
	fichero=fopen("trabajoFinal.txt","wt");	
	
	//Solicitar Datos llenado del registro
	puts("REGISTRO DE CALIFICACIONES");
	puts("Escribe el nombre la materia:");
	scanf("%[^\n]",materia);
	fflush(stdin);
	puts("Escribe el nombre del maestro:");
	scanf("%[^\n]",maestro);
	fflush(stdin);
	puts("Ingrese la cantidad de alumnos a Registrar:");
	scanf("%d",&cantAlumnos);

	struct califAlumnos registro[cantAlumnos];
	
	for(int x=0; x<cantAlumnos;x++){
		printf("Ingrese el nombre del Alumno [%d]:\n",x+1);
		scanf("%s",&registro[x].alumno);
		for(int y=0; y<5;y++){
			printf("Ingrese la calificacion [%d]: \n",y+1);
			scanf("%lf",&registro[x].calificaciones[y]);
			suma+=registro[x].calificaciones[y];
		}
		registro[x].promedio=suma/5;
		suma=0;
	
		if(registro[x].promedio==10){
			//strcpy(registro[x].mensaje, "Felicidades"); //Opcion 2
			registro[x].mensaje="Felicidades";
		}else if(registro[x].promedio>=8 && registro[x].promedio<=9){
			registro[x].mensaje="Vas por buen camino";
		}else if(registro[x].promedio>=6 && registro[x].promedio<=7){
			registro[x].mensaje="Aprobado";
		}else if(registro[x].promedio<6){
			registro[x].mensaje="Reprobado";
		}
	}
	
	//Mostrar registro
	fputs("REGISTRO DE CALIFICACIONES \n",fichero);
	fprintf(fichero,"Maestro: %s \n",maestro);
	fprintf(fichero,"Materia: %s \n",materia);
	
	//Pantalla
	puts("\n REGISTRO DE CALIFICACIONES \n");
	printf("Maestro: %s \n",maestro);
	printf("Materia: %s \n",materia);
	
	for(int x=0; x<cantAlumnos;x++){
		//Archivo
		fputs("\n",fichero);
		fprintf(fichero,"Nombre del Alumno [%d]:%s \n",x+1,registro[x].alumno);
		
		//Pantalla
		puts("\n");
		printf("Nombre del Alumno [%d]:%s \n",x+1,registro[x].alumno);
		
		for(int y=0; y<5;y++){
			//Archivo
			fprintf(fichero,"Calificacion [%d]: %.2lf \n",y+1,registro[x].calificaciones[y]);
			//Pantalla
			printf("Calificacion [%d]: %.2lf \n",y+1,registro[x].calificaciones[y]);	
		}
		//Archivo
		fprintf(fichero,"Promedio: %.2lf \n",registro[x].promedio);
		fprintf(fichero,"Mensaje: %s \n",registro[x].mensaje);
			
		//Pantalla
		printf("Promedio: %.2lf \n",registro[x].promedio);
		printf("Mensaje: %s \n",registro[x].mensaje);	
	}
	
}

