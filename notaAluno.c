#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main(){
	setlocale(LC_ALL,"portuguese");	
	
	char nome[200];
	char conceito;
	char situacao [200];
	float primeiraNota, segundaNota, media;
	
	
		
	
	printf("=== Aluno === \n");
	printf("Digite seu nome: \n");
	scanf("%s",&nome);
	
	printf("Digite sua primeira nota: ");
	scanf("%f",&primeiraNota);
	
	printf("Digite sua segunda nota: ");
	scanf("%f",&segundaNota);
	
		
	system("cls || clear ");
	
	media = (primeiraNota + segundaNota)/2;
	
	if (media >= 9) {
		conceito = 'A';
	    strcpy(situacao, "Aprovado!!");
	} 
	
	else if  (media >= 7.5 && media < 9){
		conceito = 'B';
		strcpy(situacao, "Aprovado!!");
		
	} else if  (media >= 6 && media < 7.5){
		conceito = 'C';
		strcpy(situacao, "Aprovado!!");
		
	} else if  (media >= 4 && media < 6){
		conceito = 'D';	
		strcpy(situacao, "Reprovado!!");
		
	} else if  (media < 4){
		conceito = 'E';
		strcpy(situacao, "Reprovado!!");
		
	} 
	
	printf("Nome do Aluno: %s \n",nome);
	printf("Conceito: %c. \n",conceito);
	printf("Situação: %s. \n",situacao);
	
	
	
	return 0;
	
}
