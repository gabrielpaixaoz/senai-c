#include <stdio.h>
#include <string.h>
#include <locale.h>
#define SIZE 5

int main(){
	setlocale(LC_ALL, "");
	
	
	int numero[SIZE],qtdPositivo = 0,qtdNegativo = 0,qtdPar = 0,qtdImpar = 0, qtdNumero = 0,maiorNumero = 0, menorNumero = 999,mediaPar = 0,mediaImpar = 0,somaImpar = 0,somaPar = 0;;
	int i;
	

	
	
	for(i = 0; i < SIZE;i++){
		printf("Digite o %iº Número: ",i+1);
		scanf("%i",&numero[i]);
		qtdNumero++;
		
		if(numero[i] % 2 == 0){
			qtdPar++;
			somaPar += numero[i];
		}else{
			qtdImpar++;
			somaImpar += numero[i];
		}
		
		numero[i] > 0 ? qtdPositivo++ : qtdNegativo++;
		
		if (numero[i] > maiorNumero){
			maiorNumero = numero[i];
		}
		if(numero[i] < menorNumero){
			menorNumero = numero[i];
		}
		
		
		mediaPar = somaPar/qtdPar;
		mediaImpar = somaImpar/qtdImpar;
	}
	

	
	printf("Quantidade de pares: %i \n",qtdPar);
	printf("Quantidade de ímpares: %i \n", qtdImpar);
	printf("Quantidad de negativos: %i \n",qtdNegativo);
	printf("Quantidade de números positivos: %i \n",qtdPositivo);
	printf("Quantidade de números inseridos: %i\n",qtdNumero);
	printf("Maior número: %i \n",maiorNumero);
	printf("Menor número: %i \n",menorNumero);
	printf("A média dos números pares é: %i \n",mediaPar);
	printf("A média dos números impares é : %i \n",mediaImpar);
	
	
	
	
	
	

}





	/*do{
		printf("Digite o %iº Número: ",qtdNumero + 1);
		scanf("%i",&numero);
		qtdNumero++;
		
		
		if(numero > 0 && numero % 2 == 0){
			qtdPositivoPar++;
		}else if(numero > 0 && numero % 2 != 0){
			qtdPositivoImpar++;
		}
		
		
		numero > 0 ? qtdPositivo++ : qtdNegativo++;
		
		if (numero > maiorNumero){
			maiorNumero = numero;
		}
		if(numero < menorNumero){
			menorNumero = numero;
		}
		
		
		
		
		
	}while(numero != 0);
	*/
