#include <stdio.h>
#include <string.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	
	int i;
	float nota, soma;
	
	for (i = 1; i <= 5;i++){
		printf("Digite a %iª nota: ",i);
		scanf("%f",&nota);
		soma = soma + nota;
	}
	
	printf("\n=== Exibindo resultado === \n");
	printf("Soma: %.1f \n", soma);
	
	
	return 0;
	
	
}
