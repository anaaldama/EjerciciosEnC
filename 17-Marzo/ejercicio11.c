//17-03/2021 Ana Paula Aldama
#include <stdio.h>
int main(void) {
 /*
 Rendimiento esperado: 
Days in the first half of the current year: 182 
Days in the second half of the current year: 184 
Days in the current year: 366 
Days in the first half of the current year: 181 
Days in the second half of the current year: 184 
Days in the current year: 365 
 */
 	int dias_febrero_actual 	= 28;
	int dias_enero  		 	= 31;
	int dias_febrero 			= dias_febrero_actual;
	int dias_marzo 				= 31;
	int dias_abril 				= 30;
	int dias_mayo 				= 31;
	int dias_junio 				= 30;
	int dias_julio 				= 31;
	int dias_agosto 			= 31;
	int dias_septiembre 		= 30;
	int dias_octubre 			= 31;
	int dias_nov 				= 30;
	int dias_dic 				= 31;
	int primer_semestre =dias_enero+dias_febrero+dias_marzo+dias_abril+dias_mayo+dias_junio;
	int segundo_semestre=dias_julio+dias_agosto+dias_septiembre+dias_octubre+dias_nov+dias_dic;
	printf("Dias en el primer semestre: %d\n", primer_semestre);
	printf("Dias en el segundo semestre:: %d\n", segundo_semestre);
	printf("Cantidad de dias en el año: %d\n", primer_semestre + segundo_semestre);
 return 0;
}
