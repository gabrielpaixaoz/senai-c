#include <stdio.h>
#include <string.h>
#include <locale.h>
#define SIZE 4


int main(){
	setlocale(LC_ALL, "");
	

	float media, soma = 0, numeros[4];
	char resultado[200];
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
		strcpy(resultado,"Aprovado! \n");
	}else if(media >= 5){
		strcpy(resultado,"Recuperação! \n");
	}else{
		strcpy(resultado,"Reprovado! \n");
	}


	printf("Resultado: %s \n",resultado);
	printf("MEDIA: %.1f",media);
}
