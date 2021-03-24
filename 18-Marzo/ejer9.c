//18-03-21 Ana Paula Aldama
#include <stdio.h>

int main(){
	 int dia = 20;
	 int mes = 2;
	 int year = 2021;
	 
	 printf(" %04d - %02d - %02d - YYYY-MM-DD formato - ISO 8601 \n",year, mes, dia);
	 printf(" %02d - %02d - %04d-MM - DD - YYYY format \n " , mes,dia, year);
	 printf(" %02d - %02d - %04d - DD - MM - YYYY format \n " , dia, mes, year);
	  printf("%d- %d- %d - D -M - Y format \n " , dia, mes, year);
	return 0;
	 
}

