#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int i;

float nota, soma = 0,media;

for(i = 1; i <= 3; i++){
	do{
		
		printf("Digite a %dª nota: ",i);
		scanf("%f",&nota);
		
	}while(nota < 0 || nota > 10);
	
	soma = soma + nota;
}

media = (soma) / 3;

if(media >= 5 && media <= 6.5){
	
	printf("RECUPERAÇÃO!");
	
} else if(media >= 7){
	
	printf("APROVADO!");
	
}else{
	
	printf("REPROVADO!");
}

printf("\nMÉDIA: %.1f \n",media);

return 0;
}

