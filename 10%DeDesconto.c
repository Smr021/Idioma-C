#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	float valor, desconto;
	
	printf("Digite um valor: ");
	scanf("%f",&valor);
	
	desconto = valor * 0.10;
	valor = valor - desconto;
	
	system("cls || clear"); //limpa o terminal no windows e linux
	
	
	
	printf("\n=== exibindo resultados ===\n");
	printf("Desconto: R$ %.2f \n", desconto);
	printf("valor com desconto: %.1f \n", valor);

	
	return 0;
	
}



 
 
 
