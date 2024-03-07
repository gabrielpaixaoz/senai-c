#include <stdio.h>
#include <string.h>
#include <locale.h>



void verificarPositivoOuNegativo(numero){
	if (numero == 0){
	}else if(numero > 0){
		printf("Positivo.");
	}else{
		printf("Negativo");
	}
}


int main(){
	setlocale(LC_ALL, "");
	
	int numero;
	
	printf("Digite um número: ");
	scanf("%i",&numero);
	
	
	verificarPositivoOuNegativo(numero);
	
	return 0;
	}
	
