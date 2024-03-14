#include <stdio.h>
#include <string.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	
	int numeros[5];
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Elemento %d: ", i + 1);
		scanf("%d",&numeros[i]);
	}
	
	for(i = 0; i < 5; i++){
		printf("Eelmento %d: %d\n", i+1,numeros[i]);
	}
}
