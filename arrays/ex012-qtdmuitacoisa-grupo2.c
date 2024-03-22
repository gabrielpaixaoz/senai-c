#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>
#define tam 5

int main(){
	
	setlocale (LC_ALL,"");
	int numero[tam], qtdPar=0, qtdImpar=0,qtdPositivo=0,qtdNegativo = 0,qtdNumero,maiorNumero = 0,menorNumero = 9999;
	float mediaPar = 0, somaPar = 0,mediaImpar= 0, somaImpar = 0,mediaGeral = 0,somaGeral = 0;
	int i;
	
	for (i = 0; i < tam; i++){
		printf("Digite o %iº número: ", i + 1);
		scanf("%i",&numero[i]);
		qtdNumero++;
		
		somaGeral += numero[i];
		
		
		if(numero[i] % 2 == 0){
			qtdPar = qtdPar + 1;
			somaPar += numero[i];
		} else {
			qtdImpar++;
			somaImpar += numero[i];
		}
		
		if(numero[i] > 0){
			qtdPositivo++;
		}else{
			qtdNegativo++;
		}
		
		if(numero[i] > maiorNumero){
			maiorNumero = numero[i];
		}
		if(numero[i] < menorNumero){
			menorNumero = numero[i];
		}
		
	}
	
	mediaPar = somaPar/qtdPar;
	mediaImpar = somaImpar/qtdImpar;
	mediaGeral = somaGeral/qtdNumero;
	
	
	
	
	printf("Media de todas os numeros: %.1f \n",mediaGeral);
	printf("Menor número: %i \n", menorNumero);
	printf("Maior Número: %i \n", maiorNumero);
	printf("Média dos números impares %.1f \n", mediaImpar);
	printf("Média dos números pares %.1f \n", mediaPar);
	printf("Quantidade de número inseridos: %i \n",qtdNumero);
	printf("Quantidade de número par inseridos: %i \n", qtdPar);
	printf("Quantidade de número impar inseridos: %i \n", qtdImpar);
	printf("Quantidade de números positivos inseridos: %i \n", qtdPositivo);
	printf("Quantidade de número negativos inseridos: %i \n", qtdNegativo);
	for (i = tam - 1; i >= 0; i--){
		printf("%iº Número %i \n",i + 1, numero[i]);
	}
	return 0;
}
