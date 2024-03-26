#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	float notas[3][3], soma = 0, mediaP[3];
	char disciplinas[3][200];
	int i, j;
	float media;
	
	for(i = 0; i < 3; i++){

		printf("Digite a %iª Disciplina: ",i +1);
		scanf("%s",&disciplinas[i]);
		
			for(j = 0; j < 3; j++){
			do{
			printf("Digite a %iª Nota ", j + 1);
			scanf("%f",&notas[i][j]);
			
			soma = (3 * notas[i][0]) + (3 * notas[i][1]) + (4 * notas[i][2]);
			}while(notas[i][j] < 0 || notas[i][j] > 10);
			

		}
		
	
		
		mediaP[i] = soma / 10;
		
	}
	
	for(i = 0; i < 3; i++){
		printf("Nome da disciplina: %s \n",disciplinas[i]);
		
		for(j = 0;j < 3;j++){
			printf("%iª Nota: %.1f \n",j + 1,notas[i][j]);
		}
		printf("Média ponderada: %.1f\n",mediaP[i]);

	}
	
	

	return 0;
}
