/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
 
void cabecalho(){
    system("cls || clear");
    printf("=== SENAI === \n");
    setbuf(stdin, 0);
}

int somar(int n1, int n2){
    int soma;
    soma = n1 + n2;
    return soma;
}

int main(){
    int primeiroNumero , segundoNumero, soma;
    
    cabecalho();
    printf("Digite o primeiro número: ");
    scanf("%i",&primeiroNumero);
    
    cabecalho();
    printf("Digite o segundo número: ");
    scanf("%i",&segundoNumero);
    
    soma = somar(primeiroNumero, segundoNumero);
    
    cabecalho();
    printf("\nSoma: %i \n", soma);
}