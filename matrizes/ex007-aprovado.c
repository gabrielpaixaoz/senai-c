#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>
#define size_notas 2
#define size_disciplina 3




int main(){
	setlocale(LC_ALL,"");
	int i,j;
	
	float notas[size_disciplina][size_notas], media[size_disciplina], soma = 0;
	char disciplina[size_disciplina][200];
	
	
	for(i = 0; i < size_disciplina; i++){
		printf("Digite a %iª disciplina: ",i + 1);
		scanf("%s",&disciplina[i]);
		
		for(j = 0; j < size_notas; j++){
			printf("Digite a %iª Nota: ", j + 1);
			scanf("%f",&notas[i][j]);
			
			soma += notas[i][j];
			
		}
		
		media[i] = soma / j;
		soma = 0;
		
		printf("\n");
	}
	
	for(i = 0; i< size_disciplina; i++){
		printf("Nome da disciplina: %s \n",disciplina[i]);
		
		for(j = 0; j< size_notas; j++){
			printf("%iª Nota: %.1f \n",j + 1, notas[i][j]);
		}
		
		printf("Média: %.1f \n ",media[i]);

		if(media[i]>= 5 && media[i]< 7){
			printf("RECUPERAÇÃO");
		} else if(media[i] >= 7){
			printf("APROVADO!");
		} else{
			printf("REPROVADO!");
		}
		
		printf("\n");
	}


}


/* Crie um algoritmo que receba o nome de três disciplinas,
receba duas notas para cada disciplina e mostre:

- Exemplo:

Nome da disciplina: Lógica de programação
1a nota: 8,0
2a nota: 8,0
Média: 8,0

Verifique a situação do aluno considerando:

- Média maior ou igual a 7,0: Aprovado.
- Média maior igual a 5,0 e menor que 7,0: Recuperação.
- Média menor que 5,0: Reprovado. */
