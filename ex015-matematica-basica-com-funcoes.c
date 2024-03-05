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

int calcularSoma(int n1, int n2){
    return n1 + n2 ;
}

int calcularSubtracao(int n1, int n2){
    return n1 - n2;
}

int calcularMultiplicacao(int n1, int n2){
    return n1 * n2;
}

float calcularDivisao(int n1,int   n2){
    return n1 / n2;
}
int main(){
    int primeiroNumero , segundoNumero, soma, subtracao, multiplicacao;
    float divisao;

    cabecalho();
    printf("Digite o primeiro número: ");
    scanf("%i",&primeiroNumero);
    
    cabecalho();
    printf("Digite o segundo número: ");
    scanf("%i",&segundoNumero);
    
    soma = calcularSoma(primeiroNumero, segundoNumero);
    subtracao = calcularSubtracao(primeiroNumero, segundoNumero);
    multiplicacao = calcularMultiplicacao(primeiroNumero, segundoNumero);
    divisao = calcularDivisao(primeiroNumero, segundoNumero);
    
    cabecalho();
    printf("\nSoma: %i \n", soma);
    printf("\nSubtracao: %i \n",subtracao);
    printf("\nMultiplicacao: %i \n",multiplicacao);
    printf("\nDivisão: %f \n", divisao);
}
