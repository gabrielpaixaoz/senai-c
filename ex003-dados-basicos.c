#include <stdio.h>

int main(){
//Declarando varáveis
char sexo;
char nome[200];
int idade;
float peso;

//Solicitando dados para o usuário.
printf("Digite seu nome: ");
scanf("%s",&nome);

fflush(stdin);

printf("Informe o sexo com: F ou M: ");
scanf("%c",&sexo);

fflush(stdin);

printf("Digite sua idade: ");
scanf("%i",&idade);

printf("Digite seu peso: ");
scanf("%f",&peso);

// Exibindo dados para o usuário.

printf("\n=== Exibindo dados === \n");
printf("Nome: %s \n", nome); // string
printf("Sexo: %c \n", sexo); // caracter
printf("Idade: %i \n", idade); // int
printf("Peso: %f \n", peso); // float



}
