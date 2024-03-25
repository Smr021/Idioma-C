#include <stdio.h>  // * entrada e saida de dados
#include <locale.h> // * adptação de um idioma 
#include <string.h> // * 

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i;
	
	
	printf("=== Numeros ímpares ===\n");

	
	for (i=1; i<=20; i++){
		if(i % 2 != 0){
		
			printf("%d \n", i);
		}
	}
	
	printf("=======================\n");

		
	system ("pause");
	return 0;
}
