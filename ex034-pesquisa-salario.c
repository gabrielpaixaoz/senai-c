
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int idade = 1, qtdMA5000 = 0, qtdPessoa = 0, resposta = 0, maiorIdade = 0, menorIdade = 999;
	float salario, mediaGrupo = 0, somaGrupo, salarioM;
	char sexo;
	do{
	printf("1 OU 2?");
	scanf("%i",&resposta);
	
		
		
		
		switch(resposta){
			case 1:
		printf("Digite a idade da %dª Pessoa: ",qtdPessoa + 1);
		scanf("%i",&idade);
		
		fflush(stdin);
		
		printf("Sexo: ");
		scanf("%c",&sexo);
		
		
		sexo = toupper(sexo);
		
		fflush(stdin);

		printf("Salário: ");
		scanf("%f",&salario);
		
		somaGrupo += salario;
		
		qtdPessoa++;
		
		if(idade > maiorIdade){
			maiorIdade = idade;
		}
		
		if(idade < menorIdade){
			menorIdade = idade;
		}
		
		if(sexo == 'F' && salario >= 5000){
			qtdMA5000++;
		}

	
		break;
		case 2:
			
		mediaGrupo = (somaGrupo)/qtdPessoa;
		
		
		printf("Média do grupo:: R$%.2f \n",mediaGrupo);
		printf("Maior idade do grupo: %i \n",maiorIdade);
		printf("Menor idade do grupo: %i \n",menorIdade);
		printf("Mulheres com salários maiores que 5 mil: %i \n",qtdMA5000);
		break;
		
	default:
		printf("Opção inválida.");
}
	}while (resposta != 2);

		}
	
	

/*
int main(){
	setlocale(LC_ALL, "");
	
	int idade = 1, qtdMA5000, qtdPessoa = 0, resposta = 0;
	float salario, mediaGrupo = 0, somaGrupo, salarioM;
	char sexo;
	
	printf("1 OU 2?");
	scanf("%i",&resposta);
	
		while(resposta == 1){
		printf("Digite a idade da %dª Pessoa: ",qtdPessoa + 1);
		scanf("%i",&idade);
		
		fflush(stdin);
		
		printf("Sexo: ");
		scanf("%c",&sexo);
		
		fflush(stdin);

		printf("Salário: ");
		scanf("%f",&salario);
		
		if(idade > 0){
			somaGrupo = somaGrupo + salario;
			qtdPessoa = qtdPessoa + 1;
		}
		
		if(sexo == 'M'){
			salarioM = salarioM + salario;
			
		}
		if(salarioM >= 5000){
			qtdMA5000++;
		}
		
		printf("1 OU 2?");
		scanf("%i",&resposta);
		
	}
	
	mediaGrupo = (somaGrupo)/qtdPessoa;

		printf()
		printf("MEDIA DO GRUPO: R$%.2f",mediaGrupo);

	}
	
	
	







Foi feita uma pesquisa entre os habitantes de uma região.
Foram coletados os dados de idade,sexo(M/F) e salário.
faça um algoritmo que informe:

a) a média de salário do grupo;
b) maior e menor idade do grupo;
c) quantidade de mulheres com salário a partir de R$ 5.000,00.

Crie um menu com duas opções.

Código | Descrição
1      | Adicionar pessoa
2      | Exibir resultados e sair

O final da leitura de dados se dará com quando o usuário digitar o número código 2. 
*/
