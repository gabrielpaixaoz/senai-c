#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int x[4],y[4],soma[4];
	int i;
	
	for (i = 0; i < 4;i++){
		printf("Digite o %iº Valor de x: ",i+1);
		scanf("%i",&x[i]);
	}
	
	printf("===Segunda fase===\n");
	
	for(i = 0; i < 4;i++){
		printf("Digite o %iº Valor de y: ",i+1);
		scanf("%i",&y[i]);
	}
	
	printf("===RESULTADOS===\n");
	
	for(i = 0;i < 4;i++){
		soma[i] = x[i] + y[i];
		printf("Soma: %i \n",soma[i]);
	}
	
	
}
