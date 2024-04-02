#include <stdio.h>
#include <string.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"");
	int numero[10], maiorNumero= 0, menorNumero = 999;
	int i;
	
	for(i = 0; i < 10; i++){
		printf("Digite o %iº Número: ",i + 1);
		scanf("%i",&numero[i]);
		
		if(numero[i] > maiorNumero){
			maiorNumero = numero[i];
		}
		if(numero[i] < menorNumero){
			menorNumero = numero[i];
		}
	}
	
	
	printf("Maior número:  %i \n",maiorNumero);
	printf("Menor número: %i \n",menorNumero);
}
