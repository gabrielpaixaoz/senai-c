/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
        int opcao;
        
        printf("DIGITE UMA OPÇÃO: ");
        scanf("%i", &opcao);
        
        
       
        switch(opcao){
            case 1: 
                printf("Picanha");
                break;
                
            case 2:
                printf("Lasanha");
                break;
                
            case 3:
                printf("Strogonoff");
                break;
            
            case 4:
                printf("Bife Acebolado");
                break;
            
            case 5:
                printf("Pão com ovo");
                break;
            
            default:
                printf("Invalido");
                
        }
    return 0;
}
