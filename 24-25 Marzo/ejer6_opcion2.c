#include <stdio.h>
float pro;
int x,y,p[6][4], pta,pis,s=0;
int may=0;
char puerta;

int main(){
	for(x=0;x<=5;x++){
		for (y=0; y<=3;y++){
			printf("piso %d:",x); 
			scanf("%d",&p[x][y]);
			if(p[x][y>may]){
				may=p[x][y];
				pta=y;
				pis=x;
				if(pta==0) puerta='A';
				if(pta==1) puerta='B';
				if(pta==2) puerta='C';
				if(pta==3) puerta='D';
			}
			s+=p[x][y];
		}
		pro=s/4;
		printf("Media de habitantes del piso %d es %0.lf\n", x,pro);
		s=0;                                                
	}
	printf("Mayor numero de habitantes en piso %d y puerta %c\n", pis, puerta);
	return 0;
}