#include <stdio.h>
#include <locale.h>




int main (){
	setlocale(LC_ALL,"portuguese");
	
	
	int numero, resto ;
	
	
	printf("Digite um numero: ");
	scanf("%i",&numero);
	
	
	
	system("cls || clear");
	
	
	resto = numero % 2 ;
	
	if (resto == 0)
		printf("O numero %i � par !\n",numero);	
	else 
		printf("O numero %i n�o � par. \n",numero);
	
	
	
		
	
	  
	
	
	
	system("pause");

return 0;
}
