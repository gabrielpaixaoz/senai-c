#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float notaAluno;

	
	do{
	printf("Qual a sua nota?: ");
	scanf("%f",&notaAluno);
	fflush(stdin);

}while(notaAluno < 0 || notaAluno > 10);

	printf("Sua nota é: %.1f", notaAluno);
	
	return 0;
	
}


/* int main(){
	setlocale(LC_ALL, "");
	
	float nota;
	
	do{
		printf("Digite uma nota: ");
		scanf("%f",&nota);
	}while(nota < 0 || nota > 10);
	
		printf("Nota informada: %f \n", nota);
	return 0;
	
} */

