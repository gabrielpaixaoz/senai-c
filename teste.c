#include <stdio.h>
#include <string.h>
#include <locale.h>




#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int idade = 1, qtdMA5000, qtdPessoa = 0, resposta = 0;
	float salario, mediaGrupo = 0, somaGrupo;
	char sexo;
	
	printf("1 OU 2?");
	scanf("%i",&resposta);
	
		while(resposta == 1){
		printf("Digite a idade da %d� Pessoa: ",qtdPessoa + 1);
		scanf("%i",&idade);
		
		fflush(stdin);
		
		printf("Sexo: ");
		scanf("%c",&sexo);
		
		fflush(stdin);

		printf("Sal�rio: ");
		scanf("%f",&salario);
		
		if(idade > 0){
			somaGrupo - somaGrupo + salario;
			qtdPessoa = qtdPessoa + 1;
		}
		
		printf("1 OU 2?");
	scanf("%i",&resposta);
		
	}

	
		printf("media: %f",mediaGrupo);

	}
	
	
	







/*Foi feita uma pesquisa entre os habitantes de uma regi�o.
Foram coletados os dados de idade,sexo(M/F) e sal�rio.
fa�a um algoritmo que informe:

a) a m�dia de sal�rio do grupo;
b) maior e menor idade do grupo;
c) quantidade de mulheres com sal�rio a partir de R$ 5.000,00.

Crie um menu com duas op��es.

C�digo | Descri��o
1      | Adicionar pessoa
2      | Exibir resultados e sair

O final da leitura de dados se dar� com quando o usu�rio digitar o n�mero c�digo 2. 
*/

