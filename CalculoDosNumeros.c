#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(){
	setlocale(LC_ALL,"");

	float primeiroNumero, segundoNumero, soma, subtracao, divisao, multiplicacao;



	printf("Digite um numero: ");
	scanf("%f",&primeiroNumero);

	printf("Digite um numero: ");
	scanf("%f",&segundoNumero);
	
	system("cls || clear");
	
	soma = primeiroNumero + segundoNumero;
	subtracao = primeiroNumero - segundoNumero;
	divisao = primeiroNumero / segundoNumero;
	multiplicacao = primeiroNumero * segundoNumero;
	
	
	//Mostrando dados
	printf("=== Exibindo Dados ===\n");
	printf("Soma : %.2f. \n",soma);
	printf("Subtração : %.2f. \n",subtracao);
	printf("Divisão : %.2f. \n",divisao);
	printf("Multiplicação : %2.f. \n",multiplicacao);
	







system("pause");

	
}
