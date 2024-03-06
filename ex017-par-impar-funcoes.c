#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <string.h>


char* verificarParOuImpar(int numero){
    char resposta[200];
    if(numero % 2 == 0 ){
        strcpy(resposta, "Par.");
    }else{
        strcpy(resposta, "Ímpar.");
    }
    
    return resposta;
}

int main(){
    setlocale(LC_ALL, "");
    
    int numero;
    char resultado[200];
    
    printf("Digite um número: ");
    scanf("%i",&numero);
    
    strcpy(resultado, verificarParOuImpar(numero));
    
    printf("Resultado: %s \n", resultado);
    
    return 0;
}
