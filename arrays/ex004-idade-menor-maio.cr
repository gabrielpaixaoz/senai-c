#include <stdio.h>
#include <string.h>
#include <locale.h>
#define SIZE 5


int main(){
	setlocale(LC_ALL, "");
	
	int idade[SIZE], maiorIdade = 0, menorIdade = 999;
	int i;
	
	for(i = 0; i < SIZE; i++){
		do{
		printf("Elemento %i: ", i + 1);
		scanf("%i",&idade[i]);
		
		if(idade[i] > maiorIdade){
			maiorIdade = idade[i];
		}
		if(idade[i] < menorIdade){
			menorIdade = idade[i];
		}
		
		
	}while(menorIdade > 999);
	

	
	}
	
	printf("Maior idade: %i \n",maiorIdade);
	
	printf("Menor idade: %i \n",menorIdade);
	
}

/*if(idade > maiorIdade){
			maiorIdade = idade;
		}
		
		if(idade < menorIdade){
			menorIdade = idade;
		}*/
