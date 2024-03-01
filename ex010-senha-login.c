/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    char usuario[200] = "ZODAN", senha[200] = "senai123", usuarioInserido[200], senhaInserido[200];
    
    
    printf("DIGITE O USUÁRIO: ");
    scanf("%s",&usuarioInserido);
    
    printf("DIGITE A SENHA: ");
    scanf("%s",&senhaInserido);
    
    
    if(strcmp(usuarioInserido, usuario ) == 0 && strcmp(senhaInserido, senha ) == 0){
        printf("LOGIN ACESSADO!");
    }else{
      printf("LOGIN NEGADO!");
    }
    return 0;
}

    //if(usuario == usuarioInserido && senha == senhaInserido)
