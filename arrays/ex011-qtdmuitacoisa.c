#include <stdio.h>
#include <string.h>
#include <locale.h>
#define SIZE 5

int main(){
	setlocale(LC_ALL, "");
	
	
	int numero = 0,qtdPositivo = 0,qtdNegativo = 0,qtdPar = 0,qtdImpar = 0, qtdNumero = 0,qtdPositivoPar = 0,qtdPositivoImpar = 0;
	
	
	do{
		printf("Digite o %iº Número: ",qtdNumero + 1);
		scanf("%i",&numero);
		qtdNumero++;
		
		numero > 0 && numero % 2 == 0 ? qtdPositivoPar++ : qtdPositivoImpar;
		
		
	}while(numero != 0);
	
	
	printf("Quantidade de positivos pares: %i \n",qtdPositivoPar);
	printf("Quantidade de positivos ímpares: %i \n", qtdPositivoImpar);
	printf("Quantidade de números inseridos: %i\n",qtdNumero - 1);

}






/* crie um algoritmo que leia 5 numeros inteiros, em seguida, mostre na tela:

1. aquantidade de números pares e impares;
2. a quantidade de números positivos e negativos;
3. a quantidade de números inseridos. */
