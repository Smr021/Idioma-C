#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");	
	
	//char nome[200];
	float maca = 1.30;
	float custoTotal;
	int macaCompradas;
	float desconto;
		
	
	printf("=== Venda de Ma��s === \n");
	printf("Digite quantas ma��s deseja: \n");
	scanf("%i",&macaCompradas);
	
	system("cls || clear ");
	
	if (macaCompradas <= 12){
		custoTotal = maca * macaCompradas;
		desconto = 1.30;
		
	} else {
		custoTotal = 1.00 * macaCompradas;
		desconto = 1.00;
	}
	
	printf("Numero de Ma��s compradas: %i \n",macaCompradas);
	printf("Valor a para cada Ma��: %.2f. \n",desconto);
	printf("Custo total: %.2f. \n",custoTotal);
	
	
	
	return 0;
	
}
