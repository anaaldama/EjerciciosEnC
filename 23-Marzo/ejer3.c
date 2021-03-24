#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void suma(int A[2][2], int B[2][2]);
void resta(int A[2][2], int B[2][2]);
int main(){
	int A[2][2];
	int B[2][2];
	//llenar los arregles con ciclos anidados
	for(int i=0; i<=1; i++){
		for(int j=0; j<=1; j++){
			A[i][j]=i+j;
			B[i][j]=i+j;
		}
	}
	for(int i=0; i<=1; i++){
		for(int j=0; j<=1; j++){
			printf("A[%d][%d]= %d \n",i,j,A[i][j]);
		}
	}
	suma( A, B);
	resta(A,B);
	return 0;
}
void suma(int A[2][2], int B[2][2]){
	int C[2][2];
	
	for(int i=0; i<=1; i++){
		for(int j=0; j<=1; j++){
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	puts("suma");
		
	for(int i=0; i<=1; i++){
		for(int j=0; j<=1; j++){
			printf("[%d]", C[i][j]);
		}
		printf("\n");
	}
}
void resta(int A[2][2], int B[2][2]){
	int C[2][2];
	
	for(int i=0; i<=1; i++){
		for(int j=0; j<=1; j++){
			C[i][j]=A[i][j]-B[i][j];
		}
	}
	puts("Resta");
		
	for(int i=0; i<=1; i++){
		for(int j=0; j<=1; j++){
			printf("[%d]", C[i][j]);
		}
		printf("\n");
	}
}
