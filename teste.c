#include <stdio.h>
#include <string.h>
#include <locale.h>




int main(){
	setlocale(LC_ALL, "");
	
	int numeroUsuario, qtdNotas = 0;
	float nota, soma = 0, media;
	char resposta;
	
	
	
	do{
		printf("Digite a %d� nota: ", qtdNotas + 1);
		scanf("%f",&nota);
		
		if(nota < 0){
			nota = 0;
		}
		
		soma = soma + nota;
		qtdNotas = qtdNotas +1;
		
	}while(nota > 0);
	
	qtdNotas = qtdNotas - 1;
	
	media = (soma)/qtdNotas;
	
	printf("M�dia: %.1f \n", media);
	printf("Quantidade de notas: %i \n", qtdNotas);
	printf("Soma: %.1f \n", soma);

	
}






/*Construa um algoritmo que calcule a m�dia artm�tica de v�rios valores inteiros positivos, inseritods pelo usu�rio.

o final da leitura aconter� quando for lido um valor negativo.

Mostre a m�dia artm�tica dos n�meros informados pelo usu�rio. */

