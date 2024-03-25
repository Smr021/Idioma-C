#include <stdio.h>  // * entrada e saida de dados
#include <locale.h> // * adptação de um idioma 
#include <string.h> // * 

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i,par = 0,impar,n1,numero = 0;
	
	
	printf("=== Soma dos Numeros ===\n");
	
	for (i=numero; i<=4; i++){
		printf("Digite o %d° numero:\n",numero ,numero++);
		scanf("%d",&n1);
			if (n1%2 == 0){
				par = par + 1;
				} else{
					impar = impar + 1;
			}
	}
	
	system("cls || clear");
	printf("========================================\n");
	printf("\tA) quantidades de numeros pares: %d \n",par);
		
	printf("\tb) quantidades de numeros impares: %d \n",impar);
	
	printf("========================================\n");

		
	system ("pause");
	return 0;
}
