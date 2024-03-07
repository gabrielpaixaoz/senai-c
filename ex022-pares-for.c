#include <stdio.h>
#include <string.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	

	int i;
	
	printf("Tabuada de multiplicação do numero:");
	for(i = 100; i <= 120; i++){
		if(i % 2 == 0){
		printf("%d \n",i);
		}
	}
	
	return 0;
	
	
}
