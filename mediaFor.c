//incluindo biblioteca
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main (){
	setlocale(LC_ALL,""); 
	
	//Declarando vareáveis
	char continuar;
	int i, nota, soma = 0;
	float media;
	
	
	//Calculando dados
	do{
	soma = 0;

	for (i=1; i<=2; i++){
		do {
			printf("Digite a %dª nota: ",i);
			scanf("%d",&nota);
		} while (nota < 0 || nota > 10);			
	  soma += nota;
	}	
	media = soma /2;
	
	
	//Exibindo dados
	printf("Media: %.1f\n", media);
	printf("Deseja continuar? [s|n]\n");
	scanf("%s",&continuar);

	system("cls || clear"); // -> limpar a tela
	
} while (continuar == 's'); // -> voltar a nova interação
	
	return 0;	
}
