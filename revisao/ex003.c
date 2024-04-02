#include <stdio.h>
#include <string.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"");
	int numero[6], maiorNumero= 0, menorNumero = 999;
	int i;
	
	for(i = 0; i < 6; i++){
		printf("Digite o %iº Número: ",i + 1);
		scanf("%i",&numero[i]);
	}
	
	for(i = 6 - 1; i >= 0; i--){
		printf("Número: %i \n",numero[i]);
	}
}
