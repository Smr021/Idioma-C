#include <stdio.h>  // * entrada e saida de dados
#include <locale.h> // * adptação de um idioma 
#include <string.h> // * 

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i ;
	int numero;
	
	
	printf("=== Tabuada ===\n");
	printf("Qual numero voce deseja fazer a tabuada: ");
	scanf("%d",&numero);
	
	for (i=1; i<=10; i++){
		printf("%d x %d = %d \n", numero, i, i*numero);
	}
	
	printf("=======================\n");

		
	system ("pause");
	return 0;
}
