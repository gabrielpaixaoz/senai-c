#include <stdio.h>
#include <string.h>
#include <locale.h>
#define SIZE 6


int main(){
	setlocale(LC_ALL, "");
	
	int numero[SIZE],numeroPar = 0, numeroImpar = 0;
	int i;
	
	for(i = 0; i < SIZE; i++){
		printf("Digite o %iº número: ",i + 1);
		scanf("%i",&numero[i]);
		
		if(numero[i] % 2 == 0){
			numeroPar++;
		}else{
			numeroImpar++;
		}
		
		
	}
	
		printf("Numeros Pares: %i \n",numeroPar);
		printf("Numeros Impares: %i \n",numeroImpar);
	
	}
	

	


/*if(idade > maiorIdade){
			maiorIdade = idade;
		}
		
		if(idade < menorIdade){
			menorIdade = idade;
		}*/
