#include <stdio.h>
#include <string.h>
#include <locale.h>
#define SIZE 5

int main(){
	setlocale(LC_ALL, "");
	int numeros[2][2];
	int i,j;
	
	printf("Digite o elementos para matriz: \n");
	for(i=0;i<2;i++){
		for(j = 0; j<2;j++){
			printf("Elemento da linha %i coluna %i", i + 1, j + 1);
			scanf("%i",&numeros[i][j]);
		}
	}
	
	printf("%i",numeros[0][0]);

}


