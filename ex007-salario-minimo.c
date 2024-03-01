/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float salarioMinimo = 1412, salarioUsuario, quantidadeSalario;
    
    printf("DIGITE SEU SALÁRIO: ");
    scanf("%f", &salarioUsuario);
    
    quantidadeSalario = salarioUsuario / salarioMinimo;
    
    printf("\n SALARIO INFORMADO: %.2f \n",salarioUsuario);
    printf("\n QUANTIDADE DE SALÁRIOS: %.2f \n",quantidadeSalario);
    
    return 0;
}
