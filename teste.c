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
		printf("N�o foi informado um n�mero acima de 0.");
	}else{
		qtdPar = qtdPar - 1;
	
	mediaPar = (somaPar)/qtdPar;
	mediaGeral = (soma)/qtdNotas;

	printf("Quantidade de notas Par: %i \n",qtdPar);
	printf("Quantidade de notas Impares: %i\n",qtdImpar);
	printf("M�dia geral dos n�meros pares: %.1f \n", mediaPar);
	printf("M�dia geral dos n�meros lidos: %.1f \n", mediaGeral);
	}
	
	return 0;
}






/* Fa�a um algoritimo que leia uma quantidade n�o determianda de n�meros inteiros e positivos.Calcule:
a) quantidade de n�meros pares e impares;
B) m�dia de valores pares
c) m�dia geral dos n�meros lidos.

O n�mero que encerrer� a letirua ser� o n�mero zero.*/

