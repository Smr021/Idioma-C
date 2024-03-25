#include <stdio.h>  // * entrada e saida de dados
#include <locale.h> // * adptação de um idioma 
#include <string.h> // * 

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i;
	int n1, soma=0, numero=0;
	
	printf("=== Soma dos Numeros ===\n");
	
	for (i=numero; i<=4; i++){
		printf("Digite o %d° numero:\n",numero ,numero++);
		scanf("%d",&n1);
		soma = soma + n1;
	}
	
	printf("A soma dos numeros: %d \n",soma);
		
	printf("=======================\n");

		
	system ("pause");
	return 0;
}
