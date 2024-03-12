#include <stdio.h>
#include <string.h>
#include <locale.h>




int main(){
	setlocale(LC_ALL, "");
	
	int qtdImpar = 0, qtdPar = 0, qtdNotas = 0, nota = 1;
	float mediaPar, mediaGeral, soma = 0, somaPar= 0;
	
	
	while(nota > 0){
		printf("Digite a %d nota: ",qtdNotas + 1);
		scanf("%i",&nota);
		
		if(nota > 0){
			soma = soma + nota;
			qtdNotas = qtdNotas + 1;
		}
		
		
		if(nota % 2 == 0){
			qtdPar++;
			somaPar = somaPar + nota;
		}else{
			qtdImpar++;
		}
		

		
	}
	
	if(qtdNotas == 0){
		printf("Não foi informado um número acima de 0.");
	}else{
		qtdPar = qtdPar - 1;
	
	mediaPar = (somaPar)/qtdPar;
	mediaGeral = (soma)/qtdNotas;

	printf("Quantidade de notas Par: %i \n",qtdPar);
	printf("Quantidade de notas Impares: %i\n",qtdImpar);
	printf("Média geral dos números pares: %.1f \n", mediaPar);
	printf("Média geral dos números lidos: %.1f \n", mediaGeral);
	}
	
	return 0;
}






/* Faça um algoritimo que leia uma quantidade não determianda de números inteiros e positivos.Calcule:
a) quantidade de números pares e impares;
B) média de valores pares
c) média geral dos números lidos.

O número que encerrerá a letirua será o número zero.*/

