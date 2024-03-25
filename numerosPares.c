#include <stdio.h>  // * entrada e saida de dados
#include <locale.h> // * adptação de um idioma 
#include <string.h> // * 

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i;
	
	
	printf("=== Numeros Pares ===\n");

	
	for (i=100; i<=120; i++){
		if(i % 2 == 0){
		
			printf("%d \n", i);
		}
	}
	
	printf("=======================\n");

		
	system ("pause");
	return 0;
}
