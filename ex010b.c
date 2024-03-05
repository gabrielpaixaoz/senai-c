/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
 void cabecalho(){
    system("cls || clear");//limpa o terminal
    printf("\n============= \n");
    printf("\n=== SENAI ===\n");
    printf("\n============= \n");
    setbuf(stdin, 0);
    // Limpa o cache de input. no online GDB -> setbuf(stdin, 0);
}

int main (){
    char usuario[200] = "ZODAN", senha[200] = "senai123", usuarioInserido[200], senhaInserido[200];
    
    cabecalho();
    printf("DIGITE O USUÁRIO: ");
    scanf("%s",&usuarioInserido);
    
    
    cabecalho();
    printf("DIGITE A SENHA: ");
    scanf("%s",&senhaInserido);
    
    
    if(strcmp(usuarioInserido, usuario ) == 0 && strcmp(senhaInserido, senha ) == 0){
        cabecalho();
        printf("LOGIN ACESSADO!");
    }else{
        cabecalho();
      printf("LOGIN NEGADO!");
    }
    return 0;
}

