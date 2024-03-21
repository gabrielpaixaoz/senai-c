#include <stdio.h>
#include <string.h>
#include <locale.h>
#define SIZE 6


int main(){
	setlocale(LC_ALL, "");
	
	int numero[SIZE];
	int i;
	
	
	for(i = 0; i < SIZE; i++){
	do{
		printf("Digite o %iº número: ",i + 1);
		scanf("%i",&numero[i]);
		
	}while(numero[i] < 0 || numero[i] % 2 != 0);
}

for(i = SIZE - 1; i >= 0; i--){
	printf("%iº Número: %i \n",i + 1,numero[i]);
}



}
