#include <stdio.h>
#include <string.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	
	int numeros[3];
	float media, soma = 0;
	int i;
	
	
	for(i = 0; i < 3; i++){
		printf("Elemento %i: ", i + 1);
		scanf("%i",&numeros[i]);

		soma += numeros[i];
	}
	
	for(i = 0; i < 3; i++){
		printf("elmento %i: %i\n", i+1,numeros[i]);
	}
	
	media = soma / i;
	
	printf("MEDIA: %.1f",media);
}
