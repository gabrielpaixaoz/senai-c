#include <stdio.h>
#include <string.h>
#include <locale.h>
#define SIZE 5


int main(){
	setlocale(LC_ALL, "");
	float numero = 0, soma = 0;
	int numeroNegativo = 0;
	int i = 0;
	
	for(i = 0; i < SIZE;i++){
		printf("Digite o %iº número: ", i +1);
		scanf("%f",&numero);
		
		
		
		
		if(numero < 0){
			numeroNegativo++;
		}else{
			soma += numero;
		}
		
	}
	
	printf("Quantidade de números negativos: %i \n",numeroNegativo);
	printf("Soma dos positivos: %1.f",soma);	
}
	

	
