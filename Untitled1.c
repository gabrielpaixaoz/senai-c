#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int numeroUsario, qtdNotas = 0;
	int i;
	float nota, soma = 0, media;
	char resposta;
	


do{
	fflush(stdin);
	printf("Deseja inserir uma nota?: ");
	scanf("%c",&resposta);
	
	if(resposta != 'N'){
		printf("Digite a %dª nota: ", qtdNotas + 1);
		scanf("%f",&nota);
		
		soma = soma + nota;
		qtdNotas = qtdNotas + 1;
		
	}}while(resposta != 'N');
	media = soma / qtdNotas;
		
	printf("Média %.1f \n", media);

	
}

