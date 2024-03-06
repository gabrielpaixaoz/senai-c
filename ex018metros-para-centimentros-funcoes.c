#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <string.h>



float conversorCentimentros(float numero){
    return numero * 100;
}

int main(){
    setlocale(LC_ALL, "");
    
    float numero, resultado;    
    
    printf("Digite um número: ");
    scanf("%f",&numero);
    
    resultado = conversorCentimentros(numero);
    
    printf("Resultado: %f \n", resultado);
    
    return 0;

}
