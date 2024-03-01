#include <stdio.h>

int main(){
	int idade;
	char nome[200];
	float nota1;
	float nota2;
	float media;
	
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	
	fflush(stdin);
	
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	
	printf("Digite a primeira nota: ");
	scanf("%f",&nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f",&nota2);
	
	media = (nota1 + nota2)/2;


	printf("\n=== Exibindo dados === \n");
	printf("Nome: %s \n", nome);
	printf("Idade: %i \n", idade);
	printf("Nota 1: %f \n",nota1);
	printf("Nota 2: %f \n", nota2);
	printf("Media: %f \n", media);

	
}
