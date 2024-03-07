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
		printf("%i x %i = %i \n", 2, i, 2 *i);
	}
	
	return 0;
	
	
}
