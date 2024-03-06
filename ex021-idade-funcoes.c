#include <stdio.h>
#include <string.h>
#include <locale.h>


int calcularAno(ano){
	return 2024 - ano;
}


int main(){
	setlocale(LC_ALL, "");
	int ano, idade;
	
	printf("Digite seu ano de nascimento: ");
	scanf("%i",&ano);
	
	idade = calcularAno(ano);
	
	printf("Sua idade: %i \n ",idade);
	
	
}
