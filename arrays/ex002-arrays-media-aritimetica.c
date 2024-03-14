#include <stdio.h>
#include <string.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	
	int numeros[3];
	float media;
	int i;
	
	
	for(i = 0; i < 3; i++){
		printf("Elemento %i: ", i + 1);
		scanf("%i",&numeros[i]);
	}
	
	for(i = 0; i < 3; i++){
		printf("elmento %i: %i\n", i+1,numeros[i]);
	}
	
	media = (numeros[0] + numeros[1] + numeros[2])/3;
	
	printf("MEDIA: %.1f",media);
}
