#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <string.h>


char* calcularMedia(float media){
	char resposta[200];
	if(media >= 7){
		strcpy(resposta, "APROVADO!");
	}else{
		strcpy(resposta, "REPROVADO!");
	}
	
	return resposta;
}
	
int main(){
	setlocale(LC_ALL, "");
	
	float media, primeiroNumero, segundoNumero;
	char resultado[200];
	
	
	
	printf("Digite um número: ");
	scanf("%f",&primeiroNumero);
	
	printf("Digite outro número: ");
	scanf("%f",&segundoNumero);
	
	media = (primeiroNumero + segundoNumero)/2;
	
	strcpy(resultado,calcularMedia(media));
	
	printf("Media: %.1f. \n",media);
	printf("Resultado: %s \n", resultado);
	
	
}
