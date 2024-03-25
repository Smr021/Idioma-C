#include <stdio.h>  // * entrada e saida de dados
#include <locale.h> // * adptação de um idioma 
#include <string.h> // * 

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i ;
	
	for (i=1; i<=10; i++){
		printf("%d x %d = %d \n", 2, i, i*2);
	}
	
	printf("=======================\n");
	
	for (i=1; i<=10; i++){
		
		printf("%d x %d = %d \n", 3, i, i*3);
	}
	
	printf("=======================\n");
	
	for (i=1; i<=10; i++){
		printf("%d x %d = %d \n", 5, i, i*5);
	}
		
	system ("pause");
	return 0;
}
