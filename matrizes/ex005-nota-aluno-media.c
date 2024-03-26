#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>
#define tam 3
#define size 2


int main(){
	setlocale(LC_ALL,"");
	int i,j;
	float notas[size][tam],  media[size], soma = 0;
	char nomes[size][200];
	


	for(i = 0; i < size; i++){
		printf("Digite o nome da %iª pessoa: ", i + 1);
		scanf("%s",&nomes[i]);
		
		for(j = 0;j < tam;j++){
		printf("Digite a %iª Nota: ", j + 1);
		scanf("%f",&notas[i][j]);
		
		soma += notas[i][j];
		}
		media[i] = soma / j;
		soma = 0;
		
		printf("\n");
	}
	
	
	for(i = 0; i < size; i++){
		printf("%iº Aluno: %s \n",i + 1, nomes[i]);
		
		for(j = 0; j < tam;j++){
			printf("%iª Nota: %.1f\n",j + 1, notas[i][j]);
		}
		printf("Média: %.1f \n," ,media[i]);
		
		printf("\n");
	}	
}
