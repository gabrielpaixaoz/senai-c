#include <stdio.h>
#include <string.h>
#include <locale.h>
#define SIZE 5


int main(){
	setlocale(LC_ALL, "");
	int numero[SIZE];
	int i = 0;
	
	for(i = 0; i < SIZE;i++){
		printf("Digite o %iº número: ", i +1);
		scanf("%i",&numero[i]);
		
		if(numero[i] < 0){
			numero[i] = 0;
		}
}

for(i = 0; i < SIZE; i++){
	printf("%iº Número: %i \n", i + 1,numero[i]);
}

}

	
