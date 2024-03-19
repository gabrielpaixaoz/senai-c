#include <stdio.h>
#include <string.h>
#include <locale.h>
#define SIZE 5


int main(){
	setlocale(LC_ALL, "");
	
	char nome[SIZE][200];
	int idade[SIZE];	
	int i;
	
	for(i = 0; i < SIZE;i++){
		printf("Digite o nome da %iª pessoa: ",i + 1);
		scanf("%s",&nome[i]);
		fflush(stdin);
		printf("Digite a idade da %iª pessoa: ",i + 1);
		scanf("%i",&idade[i]);
		fflush(stdin);
		
	}
	
	for(i = 0; i < SIZE; i++){
		fflush(stdin);
		printf("Idade e Nome da %iª Pessoa: %s %i \n",i + 1,nome[i],idade[i]);
	}
	
}
	

	
