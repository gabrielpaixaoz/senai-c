/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   
    
    char nome[200];
    float nota1,nota2,nota3, media;
    
    printf("DIGITE SEU NOME: ");
    scanf("%s",&nome);
    
    printf("DIGITE A NOTA 1: ");
    scanf("%f",&nota1);
    
    printf("DIGITE A NOTA 2: ");
    scanf("%f",&nota2);
    
    printf("DIGITE A NOTA 3: ");
    scanf("%f",&nota3);
    
    media = (nota1 + nota2+ nota3) / 3;
    
    
    printf("NOME DE USUÁRIO: %s\n",nome);
    
    if(media >= 7){
        printf("APROVADO");
    } else{
        printf("REPROVADO");
    }
    
    
    return 0;
}
