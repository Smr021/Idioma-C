#include <stdio.h>  // * entrada e saida de dados
#include <locale.h> // * adptação de um idioma 
#include <string.h> // * 

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// * Declarando variáveis.
	int i,n1,numero = 0, soma;
	float media;
	
	// * Coletando dados.
	printf("=== Soma dos Numeros ===\n");
	
	// * Calculando dados.
	for (i=numero; i<=3; i++){
		printf("Digite a %d° nota:\n",numero ,numero++);
		scanf("%d",&n1);
			if (n1 > 0){
				soma = soma + n1;
				}
	}
	media = soma / 4;
	
	system("cls || clear"); // * limpando a tela
	
	
	// * exibindo dados:
	printf("================================\n");
	
	printf("\tmedia: %.1f \n",media);
		
	printf("================================\n");

		
	system ("pause");
	return 0;
}
