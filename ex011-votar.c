/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade;
    
    printf("QUAL SUA IDADE?: ");
    scanf("%i",&idade);
    
    
    if(idade <= 17 || idade >64){
        printf("VOCE NÃO É OBRIGADO A VOTAR!");
    } else{
        printf("VOCE É OBRIGADO A VOTAR!");
    }
    
    return 0;
}
