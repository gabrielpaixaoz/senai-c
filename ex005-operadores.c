/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero1, numero2,soma,subtracao,multiplicacao,divisao;
    
    printf("DIGITE O PRIMEIRO NUMERO: ");
    scanf("%i",&numero1);
    
    fflush(stdin);
    
    printf("DIGITE O SEGUNDO NUMERO: ");
    scanf("%i",&numero2);
    
    soma = numero1 + numero2;
    
    subtracao = numero1 - numero2;
    
    multiplicacao = numero1 * numero2;
    
    divisao = numero1 / numero2;
    
    printf("\n=== Exibindo dados ===\n");
    printf("SOMA: %i \n", soma);
    printf("SUBTRACAO: %i \n",subtracao);
    printf("MULTIPLICACAO: %i \n",multiplicacao);
    printf("DIVISAO: %i \n",divisao);
    
        

    return 0;
}





/*Construa um algoritmo para ler dois números.

Em seguida, calcule a soma, a subtração, a multiplicação e a divisão
desses números, armazenando os resultados em variáveis com os
nomes listados abaixo:

- soma
- subtracao
- multiplicacao
- divisao

Mostre os dados iniciais e as variáveis com os resultados.*/