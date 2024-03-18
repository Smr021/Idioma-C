#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	float valor, desconto,;
	
	printf("Digite o nome do aluno: ");
	scanf("%f",&nome);
	
	printf("Digite a Idade: ")
	scanf("%f",&idade);
	
	printf("Digite a primeira nota: ")
	scanf("%f",&primeiraNota);
	
	printf("Digite a segunta nota: ")
	scanf("%f",&segundaNota);
	
	printf("Digite a terceira nota: ")
	scanf("%f",&terceiraNota)
	
	desconto = valor * 0.10;
	valor = valor - desconto;
	
	system("cls || clear"); //limpa o terminal no windows e linux
	
	
	
	printf("\n=== exibindo resultados ===\n");
	printf("Desconto: R$ %.2f \n", desconto);
	printf("valor com desconto: %.1f \n", valor);

	
	return 0;
	
}



 
 
 
