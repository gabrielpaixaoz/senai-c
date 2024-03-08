#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float primeiraNota, segundaNota,media;
	
	
do{
	printf("Digite a primeira nota: ");
	scanf("%f",&primeiraNota);
	
	printf("Digite a segunda nota: ");
	scanf("%f",&segundaNota);
	
	if(primeiraNota < 0 || primeiraNota > 10 || segundaNota < 0 || segundaNota > 10){
		printf("Nota invalída.\n");
	}
	
	fflush(stdin);
}while(primeiraNota < 0 || primeiraNota > 10 || segundaNota < 0 || segundaNota > 10);


media = (primeiraNota + segundaNota)/2;

printf("Média: %.1f",media);

return 0;
}
