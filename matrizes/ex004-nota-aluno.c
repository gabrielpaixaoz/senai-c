#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>
#define tam 3


int main(){
	setlocale(LC_ALL,"");
	int i,j;
	float notas[2][tam],  media;
	char nomes[2][200];
	


	for(i = 0; i < 2; i++){
		printf("Digite o nome da %iª pessoa: ", i + 1);
		scanf("%s",&nomes[i]);
		
		for(j = 0;j < tam;j++){
		printf("Digite a %iª Nota: ", j + 1);
		scanf("%f",&notas[i][j]);
		}
	}
	
	
	for(i = 0; i < 2; i++){
		printf("%iº Aluno: %s \n",i + 1, nomes[i]);
		
		for(j = 0; j < tam;j++){
			printf("%iª Nota: %1.f\n",j + 1, notas[i][j]);
		}
	}	
}
