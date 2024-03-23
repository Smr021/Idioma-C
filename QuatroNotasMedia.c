#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>


int main (){
	setlocale(LC_ALL,"portuguese");
	
	char nome[200];
	float idade, primeiraNota, segundaNota, terceiraNota, quartaNota, media;
	
	
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	
	printf("Digite sua idade: ");
	scanf("%f",&idade);
	
	printf("Digite sua primeira nota: ");
	scanf("%f",&primeiraNota);
	
	printf("Digite sua segunda nota: ");
	scanf("%f",&segundaNota);
	
	printf("Digite sua terceira nota: ");
	scanf("%f",&terceiraNota);
	
	printf("Digite sua quarta nota: ");
	scanf("%f",&quartaNota);
	
	system("cls || clear");
	
	media = (primeiraNota + segundaNota + terceiraNota + quartaNota) / 4;
	
	printf("Nome: %s \n",nome);
	printf("Idade: %.2f.\n",idade);
	printf("Primeira Nota: %.2f.\n",primeiraNota);
	printf("Segunda Nota: %.2f.\n",segundaNota);
	printf("Terceira Nota: %.2f.\n",terceiraNota);
	printf("Quarta Nota: %.2f.\n",quartaNota);
	printf("Media: %.2f.\n",media);
	
	
	
	
	
	
	  
	
	
	
	system("pause");

return 0;
}
