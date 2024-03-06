#include <stdio.h>
#include <string.h>
#include <locale.h>






float calcularMedia(float n1, float n2){
	return (n1 + n2) / 2;
}


char* mostrarResultado(float media){
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
	

	media = calcularMedia(primeiroNumero, segundoNumero);
	
	strcpy(resultado,mostrarResultado(media));
	
	printf("Media: %.1f. \n",media);
	printf("Resultado: %s \n", resultado);
	
	
}
