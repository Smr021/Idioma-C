#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>


int main(){
	setlocale(LC_ALL,"portuguese");	
	
	char identificador;
	float peso, pesoIdeal, altura;
	 
	
		
	
	printf("=== Peso Ideal === \n");
	printf("Digite seu peso: \n");
	scanf("%f",&peso);
	
	printf("Digite sua altura: ");
	scanf("%f",&altura);
	
	printf("Digite seu sexo [M | F]: ");
	scanf("%c",&identificador);
	
		
	system("cls || clear ");
	
	identificador = toupper(identificador);
		
	switch (identificador){
		case 'M':
		pesoIdeal = (72.7 * altura) - 58;
		printf("Peso: %f.",peso);
		printf("Peso ideal: %f.",pesoIdeal);
			
		break;
					
		case 'F': 
		pesoIdeal = (62.1 * altura) - 44.7;
		printf("Peso: %f.",peso);
		printf("Peso ideal: %f.",pesoIdeal);
			
		break;
			
		default:
		printf("Opção invalida, digite M ou F");
		break;
				
	}
	
	

	
	
	system("pause");
	return 0;
	
}
