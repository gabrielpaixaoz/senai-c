#include <stdio.h>
#include <string.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	
	char usuario[200] ="Zodan",senha[200] ="senai123",usuarioInserido[200], senhaInserido[200];
	
	
	
	
	
	do{;	
		printf("Digite o usuário: ");
		scanf("%s",&usuarioInserido);
	
		printf("Digite a senha: ");
		scanf("%s",&senhaInserido);
		
		
	}while(strcmp(usuarioInserido, usuario) != 0 || strcmp(senhaInserido, senha) != 0);
	
	
	printf("LOGIN ACESSADO!");
}
