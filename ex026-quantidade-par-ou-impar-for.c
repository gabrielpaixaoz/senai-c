#include <stdio.h>
#include <string.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	
	int i, nota, numeroPar = 0,numeroImpar = 0;
	
	for (i = 1; i <= 5;i++){
		printf("Digite a %iª nota: ",i);
		scanf("%i",&nota);
		if(nota % 2 == 0){
			numeroPar = numeroPar + 1;
		} else{
			numeroImpar = numeroImpar + 1;
		}
		
		
	}
	
	printf("\n=== Exibindo resultado === \n");
	printf("Par: %i \n", numeroPar);
	printf("Impar: %i \n", numeroImpar);

	
	
	return 0;
	
	
}
