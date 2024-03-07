#include <stdio.h>
#include <string.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	
	float soma, nota, media;
	int i;
	
	for(i = 1; i <=4; i++){
		printf("Digite a %iª Nota: ",i);
		scanf("%f",&nota);
		soma = soma + nota;
	}
	
	media = (soma)/4;
	
	
	printf("\nMédia do aluno: %.2f \n", media);
	
	return 0;
	
	
}
