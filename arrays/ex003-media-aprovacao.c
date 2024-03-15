#include <stdio.h>
#include <string.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	

	float media, soma = 0, numeros[4];
	int i;
	
	
	for(i = 0; i < 4; i++){
		printf("Elemento %i: ", i + 1);
		scanf("%f",&numeros[i]);

		soma += numeros[i];
	}
	
	
	
	for(i = 0; i < 4; i++){
		printf("Nota %i: %.1f\n", i+1,numeros[i]);
	}
	
	media = soma / i;
	
	
	if(media >= 7){
		printf("Aprovado! \n");
	}else if(media <= 4.9){
		printf("Reprovado! \n");
	}else if(media >= 5 || media <=6.9){
		printf("Recuperação! \n");
}


	printf("MEDIA: %.1f",media);
}
