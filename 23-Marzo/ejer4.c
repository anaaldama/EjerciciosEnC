#include <stdio.h>
#include <stdlib.h>
 
void mult(int A[2][2],int B[2][2]);
 
int C[2][2];
 
 
int main()
{
 
int A[2][2]={{1,2},{3,4}};
int B[2][2]={{3,-2},{1,5}};
 
 
puts("Matriz A");
for(int i=0; i<=1;i++)
{
	for(int j=0; j<=1;j++)
	{
		printf("[%d]",A[i][j]);
 
	}
	printf("\n");
}
puts("Matriz B");
 for(int i=0; i<=1;i++)
{
	for(int j=0; j<=1;j++)
	{
		printf("[%d]",B[i][j]);
 
	}
	printf("\n");
}
 
 mult(A,B);
 
return 0;
 
}
 
 
void mult(int A[2][2],int B[2][2])
{
	for (int i = 0; i <= 1; i++) {//se itera através de cada fila de matriz1
           for (int j = 0; j <= 1; j++) {//se itera através de cada columna de matriz2
              int suma = 0;//es donde se almacenará el valor final
               for (int k = 0; k <= 1; k++) {
                   suma += A[i][k] * B[k][j];//se acumula en suma
               }
               C[i][j] = suma;
           }
       }
 
 
puts("**** resultado ***");   
for(int i=0; i<=1;i++)
{
	for(int j=0; j<=1;j++)
	{
		printf("[%d]",C[i][j]);
 
	}
	printf("\n");
}
 
 
}//fin función

