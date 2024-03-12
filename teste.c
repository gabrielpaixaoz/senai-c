#include <stdio.h>
#include <string.h>
#include <locale.h>




int main(){
	setlocale(LC_ALL, "");
	
	int numeroUsuario, qtdNotas = 0;
	float nota, soma = 0, media;
	char resposta;
	
	
	
	do{
		printf("Digite a %dª nota: ", qtdNotas + 1);
		scanf("%f",&nota);
		
		if(nota < 0){
			nota = 0;
		}
		
		soma = soma + nota;
		qtdNotas = qtdNotas +1;
		
	}while(nota > 0);
	
	qtdNotas = qtdNotas - 1;
	
	media = (soma)/qtdNotas;
	
	printf("Média: %.1f \n", media);
	printf("Quantidade de notas: %i \n", qtdNotas);
	printf("Soma: %.1f \n", soma);

	
}






/*Construa um algoritmo que calcule a média artmética de vários valores inteiros positivos, inseritods pelo usuário.

o final da leitura aconterá quando for lido um valor negativo.

Mostre a média artmética dos números informados pelo usuário. */

