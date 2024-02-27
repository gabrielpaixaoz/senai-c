#include <stdio.h>

int main() {
	//Declarando variaveis
	char sexo = 'm';//char=caracter quando nn tem nada do lado entra apenas 1 caracter
	char nome [200] = "Lucas";//o par de cochetes signfica quantas letras a variavel caracter  pode aceitar nesse caso 200 letras/pode ser entendido como cadeia
	int idade = 14;//int=Inteiro
	float peso = 67.7;//float=Real
	
	//Exibindo dados
	printf("\n=== Exibindo dados ===\n");
	printf("Nome: %s \n",nome);//tem que colocar o percentual pra indicar aonde o conteudo da variavel vai aparecer
	printf("Sexo:%c \n",sexo);
	printf("Idade:%i \n",idade);
	printf("Peso: %f \n",peso);
	
	return 0;
}

//%s=Stringer=uma cadeia
//%c=um caracter
//%i=int=inteiro
//%f=float=real
