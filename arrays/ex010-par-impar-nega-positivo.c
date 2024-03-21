#include <stdio.h>
#include <string.h>
#include <locale.h>
#define SIZE 5

int main(){
	setlocale(LC_ALL, "");
	
	int numero[SIZE], qtdPar = 0,qtdImpar = 0,qtdPositivo = 0 ,qtdNegativo = 0, qtdNumero = 0;
	int i;
	
	
	for (i = 0;i<SIZE;i++){
		printf("Digie o %iº número: ",i + 1);
		scanf("%i",&numero[i]);
		
		qtdNumero++;
		
		numero[i] % 2 == 0 ? qtdPar++ : qtdImpar++;
		
		numero[i] > 0 ? qtdPositivo++ : qtdNegativo++;
		
		
		/*if(numero[i] % 2 == 0){
			qtdPar++;
		}else{
			qtdImpar++;
		}
		
		fflush(stdin);
		
		if(numero[i] > 0){
			qtdPositivo++;
		}else{
			qtdNegativo++;
		}*/
		
	}
	
	
	
	printf("Quantidade de números Pares:%i \n",qtdPar);
	printf("Quantidade de números Impares:%i \n",qtdImpar);
	printf("Quantidade de números Positivos: %i\n",qtdPositivo);
	printf("Quantidade de números negativos: %i\n",qtdNegativo);
	printf("Quantidade de números inseridos: %i\n",qtdNumero);

}






/* crie um algoritmo que leia 5 numeros inteiros, em seguida, mostre na tela:

1. aquantidade de números pares e impares;
2. a quantidade de números positivos e negativos;
3. a quantidade de números inseridos. */
