#include <stdio.h>
#include <string.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	
	int numero;
	
	printf("Digite um número: ");
	scanf("%i",&numero);
	
	int i;
	
	printf("Tabuada de multiplicação do numero: %i",numero);
	for(i = 1; i <= 10; i++){
		printf("\n %i x %i = %i \n", numero, i, numero *i);
	}
	
	return 0;
	
	
}
