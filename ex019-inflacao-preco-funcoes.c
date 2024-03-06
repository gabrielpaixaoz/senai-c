#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <string.h>


float inflacionarPreco(float preco){
	float novoPreco;
	
	if(preco < 100){
		novoPreco = preco * 1.1;
	} else{
		novoPreco = preco * 1.2;
	}
	return novoPreco;
}

int main(){
	setlocale(LC_ALL, "");
	
	float precoProduto, resultado;
	
	printf("Digite o preço do produto: ");
	scanf("%f",&precoProduto);
	
	resultado = inflacionarPreco(precoProduto);
	
	printf("Resultado: %.1f. \n", resultado);
	
	return 0;
}
